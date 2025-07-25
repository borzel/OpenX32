-- VHDL File to control Cirrus Logic CS2000CP PLL IC
-- v0.0.1, 24.07.2025
-- OpenX32 Project
-- https://github.com/xn--nding-jua/OpenX32
-- 
-- 
-- Recommended process for reset and power-up in Software Mode
-- 1. nRST = 0 -> nRST = 1
-- 2. Config1: Write to Power Control Register and set bit 0 to '1'
-- 3. Config2: Write to MISC register
-- 4. Config3: Mute all DACs
-- 5. Config4: Write to Power Control Register and set bit 0 to '0'
-- 6. Wait around 2000 LRCK (=50ms)
-- 7. Config5: Unmute DACs
-- 

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity cs2000cp_config is
	port (
		clk			: in std_logic; -- expecting 16 MHz
		i_start		: in std_logic;
		i_txbusy		: in std_logic;
		
		o_address	: out std_logic_vector(7 downto 0);
		o_map			: out std_logic_vector(7 downto 0);
		o_data		: out std_logic_vector(7 downto 0);
		o_start		: out std_logic
	);
end entity;

architecture behavioral of cs2000cp_config is
	type t_SM is (s_Startup, s_Reset, s_Start, s_Config, s_Wait, s_Done);
	signal s_SM				: t_SM := s_Startup;
	signal count_state	: natural range 0 to 2500000 := 0; -- allow a maximum of 156ms
	
	signal mapaddress		: std_logic_vector(7 downto 0);
	signal data				: std_logic_vector(7 downto 0);
	signal start			: std_logic;
	
	signal count_cfg		: natural range 0 to 12 := 0;
	constant chipaddress	: std_logic_vector(7 downto 0) := "10011110"; -- 7-bit address followed by R/nW
	type cs2000_cfg_lut_t is array(0 to 11, 0 to 1) of std_logic_vector(7 downto 0);
	constant cs2000_cfg_lut: cs2000_cfg_lut_t := (
		(x"03", x"07"), -- AUX-Pin as PLL-Lock + Device-Config Enable 1
		(x"05", x"09"), -- Freeze-Bit to 1 + Device-Config Enable 2
		(x"17", x"18"), -- Clock-Output if PLL Unlocked + High-Accuracy-Mode
		(x"16", x"08"), -- Clock-Skip Disabled + Ref-Clock DIV to "01" -> 16MHz to 28MHz range
		(x"1E", x"00"), -- Loop-Bandwidth to 1 Hz
		(x"04", x"01"), -- Hybrid-PLL mode and lock-clock-ratio to 0
		(x"06", x"00"), -- Multiplicator-Value MSB
		(x"07", x"0C"), -- Multiplicator-Value
		(x"08", x"49"), -- Multiplicator-Value
		(x"09", x"BA"), -- Multiplicator-Value LSB
		(x"02", x"00"), -- Enable CLK- and AUX-Output
		(x"05", x"01")  -- Set Freeze to 0 -> changes take effect immediately
	);
	-- 16MHz -> 12.288MHz = x0.768 -> 2^20 * 0.768 = 805306 = 0x000C49BA
begin
	process (clk)
	begin
		if rising_edge(clk) then
			if (i_start = '1') then
				-- start the configuration process
				count_state <= 0;
				mapaddress <= x"00";
				data <= x"00";
				start <= '0';
				count_cfg <= 0;
				s_SM <= s_Config;
				
			else
				if (s_SM = s_Startup) then
					-- wait for begin
					
				elsif (s_SM = s_Config) then

					-- transmit bits over SPI-interface
					mapaddress <= cs2000_cfg_lut(count_cfg, 0); -- set address
					data <= cs2000_cfg_lut(count_cfg, 1); -- set the data
					start <= '1';
					
					s_SM <= s_Wait;

				elsif (s_SM = s_Wait) then
					start <= '0';
					
					-- wait until spi message has been sent
					if (i_txbusy = '0') then
						-- check if we have reached end of configuration
						if (count_cfg = 11) then
							-- yes -> end configuration
							s_SM <= s_Done;
						else
							-- still data to transmit
							count_cfg <= count_cfg + 1;
							s_SM <= s_Config;
						end if;
					end if;
										
				elsif (s_SM = s_Done) then
					-- stay here until next start-request
					mapaddress <= x"00";
					data <= x"00";
					count_cfg <= 0;
					start <= '0';
					
				end if;		
			end if;
		end if;
	end process;
	
	o_address <= chipaddress;
	o_map <= mapaddress;
	o_data <= data;
	o_start <= start;
end behavioral;