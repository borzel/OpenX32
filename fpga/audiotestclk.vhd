-- VHDL File to control Cirrus Logic CS42438 IC
-- v0.0.1, 24.07.2025
-- OpenX32 Project
-- https://github.com/xn--nding-jua/OpenX32
-- 

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity audiotestclk is
	port (
		clk		: in std_logic; -- 122.88 MHz for 48kHz
		o_sclk	: out std_logic; -- 12.288 MHz
		o_fs		: out std_logic -- 48 kHz
	);
end entity;

architecture behavioral of audiotestclk is
	signal count_sclk		: natural range 0 to 10 := 1;
	signal count_fs		: natural range 0 to 256 := 1;
	signal sclk				: std_logic := '0';
	signal fs				: std_logic := '0';
begin
	process (clk)
	begin
		if rising_edge(clk) then
			if (count_sclk = (122880000/(2*12288000))) then -- divide clk by 10 (122.88 MHz -> 12.288 MHz)
				sclk <= not sclk;
				count_sclk <= 1;

				-- derive fs from sclk
				if (count_fs = (12288000/48000)) then -- divide sclk by 256 (12.288 MHz -> 48 kHz)
					fs <= not fs;
					count_fs <= 1;
				else
					count_fs <= count_fs + 1;
				end if;
			else
				count_sclk <= count_sclk + 1;
			end if;
		end if;
	end process;
	
	-- output the signals
	o_sclk <= sclk;
	o_fs <= fs;
end behavioral;