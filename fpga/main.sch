<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3a" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="clk_16MHz" />
        <signal name="clk_main" />
        <signal name="XLXN_50" />
        <signal name="XLXN_52(7:0)" />
        <signal name="XLXN_54" />
        <signal name="XLXN_55(7:0)" />
        <signal name="XLXN_56(7:0)" />
        <signal name="XLXN_57(7:0)" />
        <signal name="imx25_uart4_rxd" />
        <signal name="imx25_uart4_txd" />
        <signal name="XLXN_62(7:0)" />
        <signal name="XLXN_63" />
        <signal name="XLXN_65(7:0)" />
        <port polarity="Input" name="clk_16MHz" />
        <port polarity="Output" name="imx25_uart4_rxd" />
        <port polarity="Input" name="imx25_uart4_txd" />
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
            <timestamp>2025-7-22T20:4:39</timestamp>
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
            <timestamp>2025-7-22T20:2:51</timestamp>
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
            <timestamp>2025-7-22T20:8:30</timestamp>
            <rect width="304" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <rect width="64" x="368" y="-44" height="24" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
        </blockdef>
        <blockdef name="rs232_decoder">
            <timestamp>2025-7-22T20:15:50</timestamp>
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
        <block symbolname="dcm1" name="XLXI_20">
            <blockpin name="RST_IN" />
            <blockpin signalname="clk_16MHz" name="CLKIN_IN" />
            <blockpin name="LOCKED_OUT" />
            <blockpin signalname="clk_main" name="CLKFX_OUT" />
            <blockpin name="CLKIN_IBUFG_OUT" />
            <blockpin name="CLK0_OUT" />
        </block>
        <block symbolname="uart_tx" name="XLXI_21">
            <blockpin signalname="clk_main" name="i_Clk" />
            <blockpin signalname="XLXN_50" name="i_TX_DV" />
            <blockpin signalname="XLXN_52(7:0)" name="i_TX_Byte(7:0)" />
            <blockpin name="o_TX_Active" />
            <blockpin signalname="imx25_uart4_rxd" name="o_TX_Serial" />
            <blockpin signalname="XLXN_54" name="o_TX_Done" />
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
        <block symbolname="constant" name="XLXI_24">
            <attr value="48" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_55(7:0)" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_25">
            <attr value="45" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_56(7:0)" name="O" />
        </block>
        <block symbolname="constant" name="XLXI_26">
            <attr value="4C" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_57(7:0)" name="O" />
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
    </netlist>
    <sheet sheetnum="1" width="7609" height="5382">
        <attr value="CM" name="LengthUnitName" />
        <attr value="4" name="GridsPerUnit" />
        <instance x="640" y="464" name="XLXI_20" orien="R0">
        </instance>
        <branch name="clk_16MHz">
            <wire x2="640" y1="432" y2="432" x1="608" />
        </branch>
        <iomarker fontsize="28" x="608" y="432" name="clk_16MHz" orien="R180" />
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1200" y="304" type="branch" />
            <wire x2="1200" y1="304" y2="304" x1="1104" />
            <wire x2="1280" y1="304" y2="304" x1="1200" />
        </branch>
        <instance x="1456" y="912" name="XLXI_21" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="1424" y="752" type="branch" />
            <wire x2="1424" y1="752" y2="752" x1="1344" />
            <wire x2="1456" y1="752" y2="752" x1="1424" />
        </branch>
        <instance x="752" y="1168" name="XLXI_23" orien="R0">
        </instance>
        <branch name="XLXN_50">
            <wire x2="1456" y1="816" y2="816" x1="1136" />
        </branch>
        <branch name="XLXN_52(7:0)">
            <wire x2="1296" y1="1136" y2="1136" x1="1136" />
            <wire x2="1296" y1="880" y2="1136" x1="1296" />
            <wire x2="1456" y1="880" y2="880" x1="1296" />
        </branch>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="528" y="816" type="branch" />
            <wire x2="528" y1="816" y2="816" x1="464" />
            <wire x2="752" y1="816" y2="816" x1="528" />
        </branch>
        <branch name="XLXN_54">
            <wire x2="512" y1="880" y2="1232" x1="512" />
            <wire x2="2000" y1="1232" y2="1232" x1="512" />
            <wire x2="752" y1="880" y2="880" x1="512" />
            <wire x2="2000" y1="880" y2="880" x1="1888" />
            <wire x2="2000" y1="880" y2="1232" x1="2000" />
        </branch>
        <instance x="224" y="976" name="XLXI_25" orien="R0">
        </instance>
        <branch name="XLXN_55(7:0)">
            <wire x2="752" y1="944" y2="944" x1="240" />
        </branch>
        <branch name="XLXN_56(7:0)">
            <wire x2="752" y1="1008" y2="1008" x1="368" />
        </branch>
        <branch name="XLXN_57(7:0)">
            <wire x2="752" y1="1072" y2="1072" x1="240" />
        </branch>
        <instance x="96" y="912" name="XLXI_24" orien="R0">
        </instance>
        <instance x="96" y="1040" name="XLXI_26" orien="R0">
        </instance>
        <branch name="imx25_uart4_rxd">
            <wire x2="1920" y1="816" y2="816" x1="1888" />
        </branch>
        <iomarker fontsize="28" x="1920" y="816" name="imx25_uart4_rxd" orien="R0" />
        <instance x="2432" y="864" name="XLXI_28" orien="R0">
        </instance>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2336" y="768" type="branch" />
            <wire x2="2336" y1="768" y2="768" x1="2240" />
            <wire x2="2432" y1="768" y2="768" x1="2336" />
        </branch>
        <branch name="imx25_uart4_txd">
            <wire x2="2416" y1="832" y2="832" x1="2400" />
            <wire x2="2432" y1="832" y2="832" x1="2416" />
        </branch>
        <instance x="3008" y="864" name="XLXI_29" orien="R0">
        </instance>
        <branch name="XLXN_62(7:0)">
            <wire x2="3008" y1="832" y2="832" x1="2864" />
        </branch>
        <branch name="XLXN_63">
            <wire x2="2944" y1="768" y2="768" x1="2864" />
            <wire x2="2944" y1="672" y2="768" x1="2944" />
            <wire x2="3008" y1="672" y2="672" x1="2944" />
        </branch>
        <branch name="clk_main">
            <attrtext style="alignment:SOFT-BCENTER;fontsize:28;fontname:Arial" attrname="Name" x="2960" y="512" type="branch" />
            <wire x2="2960" y1="512" y2="512" x1="2880" />
            <wire x2="3008" y1="512" y2="512" x1="2960" />
        </branch>
        <branch name="XLXN_65(7:0)">
            <wire x2="448" y1="1136" y2="1296" x1="448" />
            <wire x2="3600" y1="1296" y2="1296" x1="448" />
            <wire x2="752" y1="1136" y2="1136" x1="448" />
            <wire x2="3600" y1="512" y2="512" x1="3456" />
            <wire x2="3600" y1="512" y2="1248" x1="3600" />
            <wire x2="3600" y1="1248" y2="1296" x1="3600" />
        </branch>
        <iomarker fontsize="28" x="2400" y="832" name="imx25_uart4_txd" orien="R180" />
    </sheet>
</drawing>