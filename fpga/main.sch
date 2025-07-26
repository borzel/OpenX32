<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3a" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk_16MHz" />
        <signal name="clk_main" />
        <signal name="rst" />
        <signal name="XLXN_50" />
        <signal name="XLXN_52(7:0)" />
        <signal name="XLXN_54" />
        <signal name="XLXN_55(7:0)" />
        <signal name="XLXN_56(7:0)" />
        <signal name="XLXN_57(7:0)" />
        <signal name="XLXN_65(7:0)" />
        <signal name="XLXN_67(7:0)" />
        <signal name="XLXN_68(7:0)" />
        <signal name="XLXN_69(7:0)" />
        <signal name="XLXN_70" />
        <signal name="AUX_nRST" />
        <signal name="AUX_nCS" />
        <signal name="AUX_CCLK" />
        <signal name="AUX_CDATA" />
        <signal name="tdm_sclk" />
        <signal name="tdm_fs" />
        <signal name="imx25_uart4_rxd" />
        <signal name="imx25_uart4_txd" />
        <signal name="XLXN_62(7:0)" />
        <signal name="XLXN_63" />
        <signal name="PLL_OUT" />
        <signal name="XLXN_222" />
        <signal name="XLXN_223(7:0)" />
        <signal name="XLXN_224(7:0)" />
        <signal name="XLXN_225(7:0)" />
        <signal name="XLXN_226" />
        <signal name="PLL_nCS" />
        <signal name="PLL_CDATA" />
        <signal name="AUX_DA" />
        <signal name="AUX_AD" />
        <signal name="AUX_MCLK" />
        <signal name="AUX_SCLK" />
        <signal name="AUX_FSYNC" />
        <signal name="DA_MCLK" />
        <signal name="DA_BCLK" />
        <signal name="DA_FSYNC" />
        <signal name="DA_DATA0" />
        <signal name="imx25_uart3_txd" />
        <signal name="DA_RX" />
        <signal name="DA_TX" />
        <signal name="imx25_uart3_rxd" />
        <signal name="nDA_RESET" />
        <signal name="XLXN_320" />
        <signal name="FPGACLK" />
        <signal name="XLXN_330" />
        <signal name="XLXN_342(7:0)" />
        <signal name="XLXN_346" />
        <signal name="PLL_IN" />
        <signal name="XLXN_355(23:0)" />
        <signal name="XLXN_356(23:0)" />
        <signal name="XLXN_357(23:0)" />
        <signal name="XLXN_358(23:0)" />
        <signal name="XLXN_359(23:0)" />
        <signal name="XLXN_360(23:0)" />
        <signal name="XLXN_363(23:0)" />
        <signal name="XLXN_364(23:0)" />
        <signal name="XLXN_365(23:0)" />
        <signal name="XLXN_366(23:0)" />
        <signal name="XLXN_367(23:0)" />
        <signal name="XLXN_368(23:0)" />
        <signal name="PLL_CCLK" />
        <signal name="XLXN_384" />
        <signal name="XLXN_385" />
        <signal name="XLXN_386" />
        <port polarity="Output" name="AUX_nRST" />
        <port polarity="Output" name="AUX_nCS" />
        <port polarity="Output" name="AUX_CCLK" />
        <port polarity="Output" name="AUX_CDATA" />
        <port polarity="Output" name="imx25_uart4_rxd" />
        <port polarity="Input" name="imx25_uart4_txd" />
        <port polarity="Input" name="PLL_OUT" />
        <port polarity="Output" name="PLL_nCS" />
        <port polarity="Output" name="PLL_CDATA" />
        <port polarity="Output" name="AUX_DA" />
        <port polarity="Input" name="AUX_AD" />
        <port polarity="Output" name="AUX_MCLK" />
        <port polarity="Output" name="AUX_SCLK" />
        <port polarity="Output" name="AUX_FSYNC" />
        <port polarity="Output" name="DA_MCLK" />
        <port polarity="Output" name="DA_BCLK" />
        <port polarity="Output" name="DA_FSYNC" />
        <port polarity="Output" name="DA_DATA0" />
        <port polarity="Input" name="imx25_uart3_txd" />
        <port polarity="Input" name="DA_RX" />
        <port polarity="Output" name="DA_TX" />
        <port polarity="Output" name="imx25_uart3_rxd" />
        <port polarity="Output" name="nDA_RESET" />
        <port polarity="Input" name="FPGACLK" />
        <port polarity="Output" name="PLL_IN" />
        <port polarity="Output" name="PLL_CCLK" />
        <blockdef name="dcm1">
            <timestamp>2025-7-22T19:46:16</timestamp>
            <rect width="336" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="464" y1="-224" y2="-224" x1="400" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <line x2="464" y1="-96" y2="-96" x1="400" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
        </blockdef>
        <blockdef name="uart_tx">
            <timestamp>2025-7-23T18:43:51</timestamp>
            <rect width="304" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
        </blockdef>
        <blockdef name="rs232_encoder">
            <timestamp>2025-7-23T18:43:27</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <blockdef name="uart_rx">
            <timestamp>2025-7-23T18:44:2</timestamp>
            <rect width="304" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <rect width="64" x="368" y="-44" height="24" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
        </blockdef>
        <blockdef name="rs232_decoder">
            <timestamp>2025-7-23T18:44:14</timestamp>
            <rect width="320" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-192" y2="-192" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="384" y="-364" height="24" />
            <line x2="448" y1="-352" y2="-352" x1="384" />
            <rect width="64" x="384" y="-300" height="24" />
            <line x2="448" y1="-288" y2="-288" x1="384" />
            <rect width="64" x="384" y="-236" height="24" />
            <line x2="448" y1="-224" y2="-224" x1="384" />
            <rect width="64" x="384" y="-172" height="24" />
            <line x2="448" y1="-160" y2="-160" x1="384" />
            <rect width="64" x="384" y="-108" height="24" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
            <rect width="64" x="384" y="-44" height="24" />
            <line x2="448" y1="-32" y2="-32" x1="384" />
        </blockdef>
        <blockdef name="cs42438_config">
            <timestamp>2025-7-26T21:55:16</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="reset">
            <timestamp>2025-7-25T7:41:38</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="tdm_8ch_rx">
            <timestamp>2025-7-25T7:44:51</timestamp>
            <rect width="256" x="64" y="-576" height="576" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-384" y2="-384" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-64" y2="-64" x1="64" />
            <line x2="384" y1="-544" y2="-544" x1="320" />
            <rect width="64" x="320" y="-492" height="24" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <rect width="64" x="320" y="-428" height="24" />
            <line x2="384" y1="-416" y2="-416" x1="320" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="tdm_8ch_tx">
            <timestamp>2025-7-25T7:45:14</timestamp>
            <rect width="256" x="64" y="-704" height="704" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-672" y2="-672" x1="320" />
        </blockdef>
        <blockdef name="audioclk">
            <timestamp>2025-7-26T19:46:47</timestamp>
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-128" height="192" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="cs2000cp_config">
            <timestamp>2025-7-26T22:24:30</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="spi_tx">
            <timestamp>2025-7-26T19:48:16</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-208" y2="-208" x1="320" />
            <line x2="384" y1="-128" y2="-128" x1="320" />
            <line x2="384" y1="-48" y2="-48" x1="320" />
        </blockdef>
        <blockdef name="bufg">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="0" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="128" y1="0" y2="-32" x1="64" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
        </blockdef>
        <blockdef name="buf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="0" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="64" y1="-64" y2="0" x1="64" />
        </blockdef>
        <blockdef name="ddfs_drom">
            <timestamp>2025-7-25T19:30:19</timestamp>
            <rect width="288" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="352" y="-108" height="24" />
            <line x2="416" y1="-96" y2="-96" x1="352" />
        </blockdef>
        <blockdef name="audiotestclk">
            <timestamp>2025-7-26T19:50:15</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="dcm1" name="XLXI_20">
            <blockpin name="RST_IN" />
            <blockpin signalname="FPGACLK" name="CLKIN_IN" />
            <blockpin name="LOCKED_OUT" />
            <blockpin signalname="clk_main" name="CLKFX_OUT" />
            <blockpin signalname="PLL_IN" name="CLKIN_IBUFG_OUT" />
            <blockpin signalname="XLXN_330" name="CLK0_OUT" />
        </block>
        <block symbolname="reset" name="XLXI_38">
            <blockpin signalname="clk_16MHz" name="clk" />
            <blockpin signalname="XLXN_320" name="i_pll_locked" />
            <blockpin signalname="rst" name="o_reset" />
        </block>
        <block symbolname="rs232_encoder" name="XLXI_23">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="XLXN_54" name="TX_rdy" />
            <blockpin signalname="XLXN_55(7:0)" name="byte1(7:0)" />
            <blockpin signalname="XLXN_56(7:0)" name="byte2(7:0)" />
            <blockpin signalname="XLXN_57(7:0)" name="byte3(7:0)" />
            <blockpin signalname="XLXN_65(7:0)" name="byte4(7:0)" />
            <blockpin signalname="XLXN_50" name="TX_send" />
            <blockpin signalname="XLXN_52(7:0)" name="TX_data(7:0)" />
        </block>
        <block symbolname="constant" name="XLXI_25">
            <attr value="33" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_56(7:0)" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_24">
            <attr value="58" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_55(7:0)" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_26">
            <attr value="32" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_57(7:0)" name="O" />
        </block>
        <block symbolname="audioclk" name="XLXI_53">
            <blockpin signalname="PLL_OUT" name="i_sclk" />
            <blockpin name="o_sclk" />
            <blockpin name="o_fs" />
        </block>
        <block symbolname="uart_tx" name="XLXI_21">
            <blockpin signalname="clk_main" name="i_Clk" />
            <blockpin signalname="XLXN_50" name="i_TX_DV" />
            <blockpin signalname="XLXN_52(7:0)" name="i_TX_Byte(7:0)" />
            <blockpin name="o_TX_Active" />
            <blockpin signalname="imx25_uart4_rxd" name="o_TX_Serial" />
            <blockpin signalname="XLXN_54" name="o_TX_Done" />
        </block>
        <block symbolname="uart_rx" name="XLXI_28">
            <blockpin signalname="clk_main" name="i_Clk" />
            <blockpin signalname="imx25_uart4_txd" name="i_RX_Serial" />
            <blockpin signalname="XLXN_63" name="o_RX_DV" />
            <blockpin signalname="XLXN_62(7:0)" name="o_RX_Byte(7:0)" />
        </block>
        <block symbolname="rs232_decoder" name="XLXI_29">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="XLXN_63" name="RX_DataReady" />
            <blockpin signalname="XLXN_62(7:0)" name="RX_Data(7:0)" />
            <blockpin signalname="XLXN_65(7:0)" name="value1(7:0)" />
            <blockpin name="value2(7:0)" />
            <blockpin name="value3(7:0)" />
            <blockpin name="value4(7:0)" />
            <blockpin name="value5(31:0)" />
            <blockpin name="value6(47:0)" />
        </block>
        <block symbolname="tdm_8ch_rx" name="XLXI_49">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="tdm_sclk" name="bclk" />
            <blockpin signalname="tdm_fs" name="fsync" />
            <blockpin signalname="AUX_AD" name="sdata" />
            <blockpin name="sync_out" />
            <blockpin name="ch1_out(23:0)" />
            <blockpin signalname="XLXN_355(23:0)" name="ch2_out(23:0)" />
            <blockpin signalname="XLXN_356(23:0)" name="ch3_out(23:0)" />
            <blockpin signalname="XLXN_357(23:0)" name="ch4_out(23:0)" />
            <blockpin signalname="XLXN_358(23:0)" name="ch5_out(23:0)" />
            <blockpin signalname="XLXN_359(23:0)" name="ch6_out(23:0)" />
            <blockpin signalname="XLXN_360(23:0)" name="ch7_out(23:0)" />
            <blockpin signalname="XLXN_367(23:0)" name="ch8_out(23:0)" />
        </block>
        <block symbolname="tdm_8ch_tx" name="XLXI_50">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="tdm_sclk" name="bclk" />
            <blockpin signalname="tdm_fs" name="fsync" />
            <blockpin signalname="XLXN_368(23:0)" name="ch1_in(23:0)" />
            <blockpin signalname="XLXN_355(23:0)" name="ch2_in(23:0)" />
            <blockpin signalname="XLXN_356(23:0)" name="ch3_in(23:0)" />
            <blockpin signalname="XLXN_357(23:0)" name="ch4_in(23:0)" />
            <blockpin signalname="XLXN_358(23:0)" name="ch5_in(23:0)" />
            <blockpin signalname="XLXN_359(23:0)" name="ch6_in(23:0)" />
            <blockpin signalname="XLXN_360(23:0)" name="ch7_in(23:0)" />
            <blockpin signalname="XLXN_367(23:0)" name="ch8_in(23:0)" />
            <blockpin signalname="AUX_DA" name="sdata" />
        </block>
        <block symbolname="buf" name="XLXI_87">
            <blockpin signalname="tdm_sclk" name="I" />
            <blockpin signalname="AUX_MCLK" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_88">
            <blockpin signalname="tdm_sclk" name="I" />
            <blockpin signalname="AUX_SCLK" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_89">
            <blockpin signalname="tdm_fs" name="I" />
            <blockpin signalname="AUX_FSYNC" name="O" />
        </block>
        <block symbolname="tdm_8ch_tx" name="XLXI_99">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="tdm_sclk" name="bclk" />
            <blockpin signalname="tdm_fs" name="fsync" />
            <blockpin signalname="XLXN_368(23:0)" name="ch1_in(23:0)" />
            <blockpin signalname="XLXN_355(23:0)" name="ch2_in(23:0)" />
            <blockpin signalname="XLXN_356(23:0)" name="ch3_in(23:0)" />
            <blockpin signalname="XLXN_357(23:0)" name="ch4_in(23:0)" />
            <blockpin signalname="XLXN_358(23:0)" name="ch5_in(23:0)" />
            <blockpin signalname="XLXN_359(23:0)" name="ch6_in(23:0)" />
            <blockpin signalname="XLXN_360(23:0)" name="ch7_in(23:0)" />
            <blockpin signalname="XLXN_367(23:0)" name="ch8_in(23:0)" />
            <blockpin signalname="DA_DATA0" name="sdata" />
        </block>
        <block symbolname="buf" name="XLXI_96">
            <blockpin signalname="tdm_sclk" name="I" />
            <blockpin signalname="DA_MCLK" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_97">
            <blockpin signalname="tdm_sclk" name="I" />
            <blockpin signalname="DA_BCLK" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_98">
            <blockpin signalname="tdm_fs" name="I" />
            <blockpin signalname="DA_FSYNC" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_109">
            <blockpin signalname="imx25_uart3_txd" name="I" />
            <blockpin signalname="DA_TX" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_110">
            <blockpin signalname="DA_RX" name="I" />
            <blockpin signalname="imx25_uart3_rxd" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_111">
            <attr value="1" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="nDA_RESET" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_112">
            <attr value="1" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_320" name="O" />
        </block>
        <block symbolname="bufg" name="XLXI_83">
            <blockpin signalname="XLXN_330" name="I" />
            <blockpin signalname="clk_16MHz" name="O" />
        </block>
        <block symbolname="ddfs_drom" name="XLXI_118">
            <blockpin signalname="clk_16MHz" name="CLK" />
            <blockpin signalname="XLXN_342(7:0)" name="Freq_Data(7:0)" />
            <blockpin signalname="XLXN_368(23:0)" name="Dout(23:0)" />
        </block>
        <block symbolname="constant" name="XLXI_119">
            <attr value="FC" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_342(7:0)" name="O" />
        </block>
        <block symbolname="spi_tx" name="XLXI_122">
            <blockpin signalname="clk_16MHz" name="clk" />
            <blockpin signalname="XLXN_346" name="i_start" />
            <blockpin signalname="XLXN_67(7:0)" name="i_address(7:0)" />
            <blockpin signalname="XLXN_68(7:0)" name="i_map(7:0)" />
            <blockpin signalname="XLXN_69(7:0)" name="i_data(7:0)" />
            <blockpin signalname="AUX_nCS" name="o_nCS" />
            <blockpin signalname="AUX_CCLK" name="o_cclk" />
            <blockpin signalname="AUX_CDATA" name="o_cdata" />
            <blockpin signalname="XLXN_70" name="o_busy" />
        </block>
        <block symbolname="spi_tx" name="XLXI_123">
            <blockpin signalname="clk_16MHz" name="clk" />
            <blockpin signalname="XLXN_222" name="i_start" />
            <blockpin signalname="XLXN_223(7:0)" name="i_address(7:0)" />
            <blockpin signalname="XLXN_224(7:0)" name="i_map(7:0)" />
            <blockpin signalname="XLXN_225(7:0)" name="i_data(7:0)" />
            <blockpin signalname="PLL_nCS" name="o_nCS" />
            <blockpin signalname="PLL_CCLK" name="o_cclk" />
            <blockpin signalname="PLL_CDATA" name="o_cdata" />
            <blockpin signalname="XLXN_226" name="o_busy" />
        </block>
        <block symbolname="cs42438_config" name="XLXI_124">
            <blockpin signalname="clk_16MHz" name="clk" />
            <blockpin signalname="rst" name="i_start" />
            <blockpin signalname="XLXN_70" name="i_txbusy" />
            <blockpin signalname="AUX_nRST" name="o_nRST" />
            <blockpin signalname="XLXN_346" name="o_start" />
            <blockpin signalname="XLXN_67(7:0)" name="o_address(7:0)" />
            <blockpin signalname="XLXN_68(7:0)" name="o_map(7:0)" />
            <blockpin signalname="XLXN_69(7:0)" name="o_data(7:0)" />
        </block>
        <block symbolname="cs2000cp_config" name="XLXI_126">
            <blockpin signalname="clk_16MHz" name="clk" />
            <blockpin signalname="rst" name="i_start" />
            <blockpin signalname="XLXN_226" name="i_txbusy" />
            <blockpin signalname="XLXN_222" name="o_start" />
            <blockpin signalname="XLXN_223(7:0)" name="o_address(7:0)" />
            <blockpin signalname="XLXN_224(7:0)" name="o_map(7:0)" />
            <blockpin signalname="XLXN_225(7:0)" name="o_data(7:0)" />
        </block>
        <block symbolname="audiotestclk" name="XLXI_128">
            <blockpin signalname="clk_main" name="clk" />
            <blockpin signalname="tdm_sclk" name="o_sclk" />
            <blockpin signalname="tdm_fs" name="o_fs" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="7609" height="5382">
        <attr value="CM" name="LengthUnitName" />
        <attr value="4" name="GridsPerUnit" />
        <instance x="640" y="464" name="XLXI_20" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1200" y="304" type="branch" />
            <wire x2="1200" y1="304" y2="304" x1="1104" />
            <wire x2="1280" y1="304" y2="304" x1="1200" />
        </branch>
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="3900" x="352" y="40" height="476" />
        <instance x="1888" y="272" name="XLXI_38" orien="R0">
        </instance>
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1792" y="176" type="branch" />
            <wire x2="1792" y1="176" y2="176" x1="1696" />
            <wire x2="1888" y1="176" y2="176" x1="1792" />
        </branch>
        <branch name="rst">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2288" y="176" type="branch" />
            <wire x2="2288" y1="176" y2="176" x1="2272" />
            <wire x2="2352" y1="176" y2="176" x1="2288" />
        </branch>
        <instance x="1056" y="1168" name="XLXI_23" orien="R0">
        </instance>
        <branch name="XLXN_50">
            <wire x2="1600" y1="816" y2="816" x1="1440" />
        </branch>
        <branch name="XLXN_52(7:0)">
            <wire x2="1504" y1="1136" y2="1136" x1="1440" />
            <wire x2="1600" y1="880" y2="880" x1="1504" />
            <wire x2="1504" y1="880" y2="1136" x1="1504" />
        </branch>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="832" y="816" type="branch" />
            <wire x2="832" y1="816" y2="816" x1="768" />
            <wire x2="1056" y1="816" y2="816" x1="832" />
        </branch>
        <branch name="XLXN_54">
            <wire x2="928" y1="880" y2="1248" x1="928" />
            <wire x2="2080" y1="1248" y2="1248" x1="928" />
            <wire x2="1056" y1="880" y2="880" x1="928" />
            <wire x2="2080" y1="880" y2="880" x1="2032" />
            <wire x2="2080" y1="880" y2="1248" x1="2080" />
        </branch>
        <instance x="528" y="976" name="XLXI_25" orien="R0">
        </instance>
        <branch name="XLXN_55(7:0)">
            <wire x2="1056" y1="944" y2="944" x1="544" />
        </branch>
        <branch name="XLXN_56(7:0)">
            <wire x2="1056" y1="1008" y2="1008" x1="672" />
        </branch>
        <branch name="XLXN_57(7:0)">
            <wire x2="1056" y1="1072" y2="1072" x1="544" />
        </branch>
        <instance x="400" y="912" name="XLXI_24" orien="R0">
        </instance>
        <instance x="400" y="1040" name="XLXI_26" orien="R0">
        </instance>
        <branch name="XLXN_65(7:0)">
            <wire x2="992" y1="1136" y2="1296" x1="992" />
            <wire x2="3616" y1="1296" y2="1296" x1="992" />
            <wire x2="1056" y1="1136" y2="1136" x1="992" />
            <wire x2="3616" y1="816" y2="816" x1="3504" />
            <wire x2="3616" y1="816" y2="1296" x1="3616" />
        </branch>
        <text x="560" y="900">Character 'X'</text>
        <text x="668" y="988">Character '3'</text>
        <text x="540" y="1088">Character '2'</text>
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="3404" x="348" y="616" height="724" />
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="388" y="664">UART to i.MX25</text>
        <branch name="XLXN_67(7:0)">
            <wire x2="1568" y1="1712" y2="1712" x1="1072" />
        </branch>
        <branch name="XLXN_68(7:0)">
            <wire x2="1568" y1="1776" y2="1776" x1="1072" />
        </branch>
        <branch name="XLXN_69(7:0)">
            <wire x2="1568" y1="1840" y2="1840" x1="1072" />
        </branch>
        <branch name="XLXN_70">
            <wire x2="592" y1="1840" y2="1952" x1="592" />
            <wire x2="2032" y1="1952" y2="1952" x1="592" />
            <wire x2="688" y1="1840" y2="1840" x1="592" />
            <wire x2="2032" y1="1824" y2="1824" x1="1952" />
            <wire x2="2032" y1="1824" y2="1952" x1="2032" />
        </branch>
        <branch name="AUX_nRST">
            <wire x2="1104" y1="1584" y2="1584" x1="1072" />
        </branch>
        <branch name="AUX_nCS">
            <wire x2="1984" y1="1584" y2="1584" x1="1952" />
        </branch>
        <branch name="AUX_CCLK">
            <wire x2="1984" y1="1664" y2="1664" x1="1952" />
        </branch>
        <branch name="AUX_CDATA">
            <wire x2="1984" y1="1744" y2="1744" x1="1952" />
        </branch>
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="576" y="1584" type="branch" />
            <wire x2="576" y1="1584" y2="1584" x1="464" />
            <wire x2="688" y1="1584" y2="1584" x1="576" />
        </branch>
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="1924" x="352" y="1448" height="588" />
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="380" y="1488">AUX Config</text>
        <branch name="rst">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="528" y="1712" type="branch" />
            <wire x2="528" y1="1712" y2="1712" x1="464" />
            <wire x2="688" y1="1712" y2="1712" x1="528" />
        </branch>
        <iomarker fontsize="28" x="1104" y="1584" name="AUX_nRST" orien="R0" />
        <iomarker fontsize="28" x="1984" y="1584" name="AUX_nCS" orien="R0" />
        <iomarker fontsize="28" x="1984" y="1664" name="AUX_CCLK" orien="R0" />
        <iomarker fontsize="28" x="1984" y="1744" name="AUX_CDATA" orien="R0" />
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="376" y="84">Clock and Reset</text>
        <instance x="2624" y="368" name="XLXI_53" orien="R0">
        </instance>
        <instance x="1600" y="912" name="XLXI_21" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1568" y="752" type="branch" />
            <wire x2="1568" y1="752" y2="752" x1="1488" />
            <wire x2="1600" y1="752" y2="752" x1="1568" />
        </branch>
        <branch name="imx25_uart4_rxd">
            <wire x2="2064" y1="816" y2="816" x1="2032" />
        </branch>
        <iomarker fontsize="28" x="2064" y="816" name="imx25_uart4_rxd" orien="R0" />
        <instance x="2480" y="1168" name="XLXI_28" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2384" y="1072" type="branch" />
            <wire x2="2384" y1="1072" y2="1072" x1="2288" />
            <wire x2="2480" y1="1072" y2="1072" x1="2384" />
        </branch>
        <branch name="imx25_uart4_txd">
            <wire x2="2480" y1="1136" y2="1136" x1="2448" />
        </branch>
        <instance x="3056" y="1168" name="XLXI_29" orien="R0">
        </instance>
        <branch name="XLXN_62(7:0)">
            <wire x2="3056" y1="1136" y2="1136" x1="2912" />
        </branch>
        <branch name="XLXN_63">
            <wire x2="2992" y1="1072" y2="1072" x1="2912" />
            <wire x2="2992" y1="976" y2="1072" x1="2992" />
            <wire x2="3056" y1="976" y2="976" x1="2992" />
        </branch>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3008" y="816" type="branch" />
            <wire x2="3008" y1="816" y2="816" x1="2928" />
            <wire x2="3056" y1="816" y2="816" x1="3008" />
        </branch>
        <iomarker fontsize="28" x="2448" y="1136" name="imx25_uart4_txd" orien="R180" />
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="1704" x="2368" y="1448" height="588" />
        <text style="fontsize:36;fontname:Arial" x="1332" y="296">clk_main is 124MHz at the moment</text>
        <branch name="PLL_OUT">
            <wire x2="2624" y1="272" y2="272" x1="2592" />
        </branch>
        <iomarker fontsize="28" x="2592" y="272" name="PLL_OUT" orien="R180" />
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1488" y="1584" type="branch" />
            <wire x2="1488" y1="1584" y2="1584" x1="1360" />
            <wire x2="1568" y1="1584" y2="1584" x1="1488" />
        </branch>
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2544" y="1648" type="branch" />
            <wire x2="2544" y1="1648" y2="1648" x1="2416" />
            <wire x2="2688" y1="1648" y2="1648" x1="2544" />
        </branch>
        <branch name="XLXN_222">
            <wire x2="3344" y1="1648" y2="1648" x1="3072" />
        </branch>
        <branch name="XLXN_223(7:0)">
            <wire x2="3344" y1="1712" y2="1712" x1="3072" />
        </branch>
        <branch name="XLXN_224(7:0)">
            <wire x2="3344" y1="1776" y2="1776" x1="3072" />
        </branch>
        <branch name="XLXN_225(7:0)">
            <wire x2="3344" y1="1840" y2="1840" x1="3072" />
        </branch>
        <branch name="XLXN_226">
            <wire x2="2688" y1="1840" y2="1840" x1="2672" />
            <wire x2="2672" y1="1840" y2="1952" x1="2672" />
            <wire x2="3808" y1="1952" y2="1952" x1="2672" />
            <wire x2="3808" y1="1824" y2="1824" x1="3728" />
            <wire x2="3808" y1="1824" y2="1952" x1="3808" />
        </branch>
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="2400" y="1488">PLL Config</text>
        <branch name="PLL_nCS">
            <wire x2="3760" y1="1584" y2="1584" x1="3728" />
        </branch>
        <branch name="PLL_CDATA">
            <wire x2="3760" y1="1744" y2="1744" x1="3728" />
        </branch>
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3264" y="1584" type="branch" />
            <wire x2="3264" y1="1584" y2="1584" x1="3152" />
            <wire x2="3344" y1="1584" y2="1584" x1="3264" />
        </branch>
        <iomarker fontsize="28" x="3760" y="1584" name="PLL_nCS" orien="R0" />
        <iomarker fontsize="28" x="3760" y="1744" name="PLL_CDATA" orien="R0" />
        <instance x="688" y="2992" name="XLXI_49" orien="R0">
        </instance>
        <instance x="1488" y="2992" name="XLXI_50" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="512" y="2448" type="branch" />
            <wire x2="512" y1="2448" y2="2448" x1="448" />
            <wire x2="688" y1="2448" y2="2448" x1="512" />
        </branch>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1360" y="2320" type="branch" />
            <wire x2="1360" y1="2320" y2="2320" x1="1248" />
            <wire x2="1488" y1="2320" y2="2320" x1="1360" />
        </branch>
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="2368" x="360" y="2184" height="1012" />
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="444" y="2224">AUX Loopback-Test</text>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="544" y="2608" type="branch" />
            <wire x2="544" y1="2608" y2="2608" x1="448" />
            <wire x2="688" y1="2608" y2="2608" x1="544" />
        </branch>
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="544" y="2768" type="branch" />
            <wire x2="544" y1="2768" y2="2768" x1="448" />
            <wire x2="688" y1="2768" y2="2768" x1="544" />
        </branch>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1360" y="2384" type="branch" />
            <wire x2="1360" y1="2384" y2="2384" x1="1248" />
            <wire x2="1488" y1="2384" y2="2384" x1="1360" />
        </branch>
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1344" y="2448" type="branch" />
            <wire x2="1344" y1="2448" y2="2448" x1="1248" />
            <wire x2="1488" y1="2448" y2="2448" x1="1344" />
        </branch>
        <branch name="AUX_DA">
            <wire x2="1904" y1="2320" y2="2320" x1="1872" />
        </branch>
        <branch name="AUX_AD">
            <wire x2="688" y1="2928" y2="2928" x1="656" />
        </branch>
        <iomarker fontsize="28" x="1904" y="2320" name="AUX_DA" orien="R0" />
        <iomarker fontsize="28" x="656" y="2928" name="AUX_AD" orien="R180" />
        <instance x="2176" y="2528" name="XLXI_87" orien="R0" />
        <instance x="2176" y="2608" name="XLXI_88" orien="R0" />
        <instance x="2176" y="2688" name="XLXI_89" orien="R0" />
        <branch name="AUX_MCLK">
            <wire x2="2432" y1="2496" y2="2496" x1="2400" />
        </branch>
        <branch name="AUX_SCLK">
            <wire x2="2432" y1="2576" y2="2576" x1="2400" />
        </branch>
        <branch name="AUX_FSYNC">
            <wire x2="2432" y1="2656" y2="2656" x1="2400" />
        </branch>
        <iomarker fontsize="28" x="2432" y="2496" name="AUX_MCLK" orien="R0" />
        <iomarker fontsize="28" x="2432" y="2576" name="AUX_SCLK" orien="R0" />
        <iomarker fontsize="28" x="2432" y="2656" name="AUX_FSYNC" orien="R0" />
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2080" y="2496" type="branch" />
            <wire x2="2080" y1="2496" y2="2496" x1="1984" />
            <wire x2="2176" y1="2496" y2="2496" x1="2080" />
        </branch>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2080" y="2576" type="branch" />
            <wire x2="2080" y1="2576" y2="2576" x1="1984" />
            <wire x2="2176" y1="2576" y2="2576" x1="2080" />
        </branch>
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2064" y="2656" type="branch" />
            <wire x2="2064" y1="2656" y2="2656" x1="1984" />
            <wire x2="2176" y1="2656" y2="2656" x1="2064" />
        </branch>
        <text style="fontsize:36;fontname:Arial;textcolor:rgb(255,0,0)" x="444" y="3328">8CH OUTPUT</text>
        <rect style="linewidth:W;linecolor:rgb(0,0,255)" width="2368" x="360" y="3288" height="1012" />
        <instance x="1488" y="4080" name="XLXI_99" orien="R0">
        </instance>
        <instance x="2176" y="3600" name="XLXI_96" orien="R0" />
        <instance x="2176" y="3680" name="XLXI_97" orien="R0" />
        <instance x="2176" y="3760" name="XLXI_98" orien="R0" />
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2080" y="3568" type="branch" />
            <wire x2="2080" y1="3568" y2="3568" x1="1984" />
            <wire x2="2176" y1="3568" y2="3568" x1="2080" />
        </branch>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2080" y="3648" type="branch" />
            <wire x2="2080" y1="3648" y2="3648" x1="1984" />
            <wire x2="2176" y1="3648" y2="3648" x1="2080" />
        </branch>
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2064" y="3728" type="branch" />
            <wire x2="2064" y1="3728" y2="3728" x1="1984" />
            <wire x2="2176" y1="3728" y2="3728" x1="2064" />
        </branch>
        <branch name="DA_MCLK">
            <wire x2="2432" y1="3568" y2="3568" x1="2400" />
        </branch>
        <branch name="DA_BCLK">
            <wire x2="2432" y1="3648" y2="3648" x1="2400" />
        </branch>
        <branch name="DA_FSYNC">
            <wire x2="2432" y1="3728" y2="3728" x1="2400" />
        </branch>
        <iomarker fontsize="28" x="2432" y="3568" name="DA_MCLK" orien="R0" />
        <iomarker fontsize="28" x="2432" y="3648" name="DA_BCLK" orien="R0" />
        <iomarker fontsize="28" x="2432" y="3728" name="DA_FSYNC" orien="R0" />
        <branch name="DA_DATA0">
            <wire x2="1904" y1="3408" y2="3408" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1904" y="3408" name="DA_DATA0" orien="R0" />
        <instance x="2176" y="3936" name="XLXI_109" orien="R0" />
        <instance x="2176" y="4032" name="XLXI_110" orien="R0" />
        <branch name="imx25_uart3_txd">
            <wire x2="2176" y1="3904" y2="3904" x1="2144" />
        </branch>
        <iomarker fontsize="28" x="2144" y="3904" name="imx25_uart3_txd" orien="R180" />
        <branch name="DA_RX">
            <wire x2="2176" y1="4000" y2="4000" x1="2144" />
        </branch>
        <iomarker fontsize="28" x="2144" y="4000" name="DA_RX" orien="R180" />
        <branch name="DA_TX">
            <wire x2="2432" y1="3904" y2="3904" x1="2400" />
        </branch>
        <iomarker fontsize="28" x="2432" y="3904" name="DA_TX" orien="R0" />
        <branch name="imx25_uart3_rxd">
            <wire x2="2432" y1="4000" y2="4000" x1="2400" />
        </branch>
        <iomarker fontsize="28" x="2432" y="4000" name="imx25_uart3_rxd" orien="R0" />
        <instance x="1696" y="4160" name="XLXI_111" orien="R0">
        </instance>
        <branch name="nDA_RESET">
            <wire x2="1872" y1="4192" y2="4192" x1="1840" />
        </branch>
        <iomarker fontsize="28" x="1872" y="4192" name="nDA_RESET" orien="R0" />
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1360" y="3408" type="branch" />
            <wire x2="1360" y1="3408" y2="3408" x1="1248" />
            <wire x2="1488" y1="3408" y2="3408" x1="1360" />
        </branch>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1360" y="3472" type="branch" />
            <wire x2="1360" y1="3472" y2="3472" x1="1248" />
            <wire x2="1488" y1="3472" y2="3472" x1="1360" />
        </branch>
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1360" y="3536" type="branch" />
            <wire x2="1360" y1="3536" y2="3536" x1="1248" />
            <wire x2="1488" y1="3536" y2="3536" x1="1360" />
        </branch>
        <branch name="XLXN_320">
            <wire x2="1888" y1="240" y2="240" x1="1856" />
        </branch>
        <instance x="1712" y="208" name="XLXI_112" orien="R0">
        </instance>
        <branch name="FPGACLK">
            <wire x2="640" y1="432" y2="432" x1="608" />
        </branch>
        <iomarker fontsize="28" x="608" y="432" name="FPGACLK" orien="R180" />
        <branch name="XLXN_330">
            <wire x2="1136" y1="432" y2="432" x1="1104" />
        </branch>
        <instance x="1136" y="464" name="XLXI_83" orien="R0" />
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1440" y="432" type="branch" />
            <wire x2="1440" y1="432" y2="432" x1="1360" />
            <wire x2="1536" y1="432" y2="432" x1="1440" />
        </branch>
        <instance x="512" y="3152" name="XLXI_118" orien="R0">
        </instance>
        <instance x="176" y="3088" name="XLXI_119" orien="R0">
        </instance>
        <branch name="XLXN_342(7:0)">
            <wire x2="512" y1="3120" y2="3120" x1="320" />
        </branch>
        <branch name="clk_16MHz">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="416" y="3056" type="branch" />
            <wire x2="416" y1="3056" y2="3056" x1="256" />
            <wire x2="512" y1="3056" y2="3056" x1="416" />
        </branch>
        <branch name="XLXN_346">
            <wire x2="1568" y1="1648" y2="1648" x1="1072" />
        </branch>
        <instance x="1568" y="1872" name="XLXI_122" orien="R0">
        </instance>
        <instance x="3344" y="1872" name="XLXI_123" orien="R0">
        </instance>
        <instance x="688" y="1872" name="XLXI_124" orien="R0">
        </instance>
        <instance x="2688" y="1872" name="XLXI_126" orien="R0">
        </instance>
        <branch name="XLXN_355(23:0)">
            <wire x2="1408" y1="2576" y2="2576" x1="1072" />
            <wire x2="1488" y1="2576" y2="2576" x1="1408" />
            <wire x2="1408" y1="2576" y2="3664" x1="1408" />
            <wire x2="1488" y1="3664" y2="3664" x1="1408" />
        </branch>
        <branch name="XLXN_356(23:0)">
            <wire x2="1392" y1="2640" y2="2640" x1="1072" />
            <wire x2="1488" y1="2640" y2="2640" x1="1392" />
            <wire x2="1392" y1="2640" y2="3728" x1="1392" />
            <wire x2="1488" y1="3728" y2="3728" x1="1392" />
        </branch>
        <branch name="XLXN_357(23:0)">
            <wire x2="1376" y1="2704" y2="2704" x1="1072" />
            <wire x2="1488" y1="2704" y2="2704" x1="1376" />
            <wire x2="1376" y1="2704" y2="3792" x1="1376" />
            <wire x2="1488" y1="3792" y2="3792" x1="1376" />
        </branch>
        <branch name="XLXN_358(23:0)">
            <wire x2="1344" y1="2768" y2="2768" x1="1072" />
            <wire x2="1488" y1="2768" y2="2768" x1="1344" />
            <wire x2="1344" y1="2768" y2="3856" x1="1344" />
            <wire x2="1488" y1="3856" y2="3856" x1="1344" />
        </branch>
        <branch name="XLXN_359(23:0)">
            <wire x2="1328" y1="2832" y2="2832" x1="1072" />
            <wire x2="1488" y1="2832" y2="2832" x1="1328" />
            <wire x2="1328" y1="2832" y2="3920" x1="1328" />
            <wire x2="1488" y1="3920" y2="3920" x1="1328" />
        </branch>
        <branch name="XLXN_360(23:0)">
            <wire x2="1312" y1="2896" y2="2896" x1="1072" />
            <wire x2="1488" y1="2896" y2="2896" x1="1312" />
            <wire x2="1312" y1="2896" y2="3984" x1="1312" />
            <wire x2="1488" y1="3984" y2="3984" x1="1312" />
        </branch>
        <branch name="XLXN_367(23:0)">
            <wire x2="1296" y1="2960" y2="2960" x1="1072" />
            <wire x2="1296" y1="2960" y2="4048" x1="1296" />
            <wire x2="1488" y1="4048" y2="4048" x1="1296" />
            <wire x2="1488" y1="2960" y2="2960" x1="1296" />
        </branch>
        <branch name="XLXN_368(23:0)">
            <wire x2="1152" y1="3056" y2="3056" x1="928" />
            <wire x2="1248" y1="3056" y2="3056" x1="1152" />
            <wire x2="1152" y1="3056" y2="3600" x1="1152" />
            <wire x2="1488" y1="3600" y2="3600" x1="1152" />
            <wire x2="1248" y1="2512" y2="3056" x1="1248" />
            <wire x2="1488" y1="2512" y2="2512" x1="1248" />
        </branch>
        <instance x="3536" y="368" name="XLXI_128" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3392" y="272" type="branch" />
            <wire x2="3392" y1="272" y2="272" x1="3328" />
            <wire x2="3536" y1="272" y2="272" x1="3392" />
        </branch>
        <text style="fontsize:36;fontname:Arial" x="3348" y="400">clk_main is 124MHz, so audiotestclk results 12.4 MHz instead of 12.288 MHz!</text>
        <iomarker fontsize="28" x="1200" y="368" name="PLL_IN" orien="R0" />
        <branch name="PLL_IN">
            <wire x2="1200" y1="368" y2="368" x1="1104" />
        </branch>
        <branch name="rst">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2544" y="1744" type="branch" />
            <wire x2="2544" y1="1744" y2="1744" x1="2416" />
            <wire x2="2688" y1="1744" y2="1744" x1="2544" />
        </branch>
        <branch name="PLL_CCLK">
            <wire x2="3744" y1="1664" y2="1664" x1="3728" />
            <wire x2="3760" y1="1664" y2="1664" x1="3744" />
        </branch>
        <iomarker fontsize="28" x="3760" y="1664" name="PLL_CCLK" orien="R0" />
        <branch name="tdm_fs">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3952" y="336" type="branch" />
            <wire x2="3952" y1="336" y2="336" x1="3920" />
            <wire x2="4128" y1="336" y2="336" x1="3952" />
        </branch>
        <branch name="tdm_sclk">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="3968" y="272" type="branch" />
            <wire x2="3968" y1="272" y2="272" x1="3920" />
            <wire x2="4128" y1="272" y2="272" x1="3968" />
        </branch>
    </sheet>
</drawing>