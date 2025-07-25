library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity reset is
    Port ( clk : in  STD_LOGIC; -- expecting 16 MHz clock
           i_pll_locked : in  STD_LOGIC;
           o_reset : out  STD_LOGIC);
end reset;

architecture Behavioral of reset is
	signal count_clk	: natural range 0 to 100000 := 0;
begin
	process (clk)
	begin
		if rising_edge(clk) then
			if (i_pll_locked = '1') then
				-- wait 5 ms, then reset circuit and go into online state
				if (count_clk < (16000000/200)) then
					-- waiting
					o_reset <= '0';
					count_clk <= count_clk + 1;
				elsif (count_clk = (16000000/200)) then
					-- resetting for 1 clock
					o_reset <= '1';
					count_clk <= count_clk + 1;
				else
					-- online state. Do nothing here and keep this forever
					o_reset <= '0';
				end if;
			else
				-- still waiting for PLL to lock
				count_clk <= 0;
				o_reset <= '0';
			end if;
		end if;
	end process;
end Behavioral;

