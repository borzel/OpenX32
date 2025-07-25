#ifndef _IOMUX_DEFINE_H_
#define _IOMUX_DEFINE_H_

#define A0 0x0
#define A1 0x4
#define A2 0x8
#define A3 0xc
#define A4 0x10
#define A5 0x14
#define A6 0x18
#define A7 0x1c
#define A8 0x20
#define A9 0x24
#define A10 0x28
#define MA10 0x2c
#define A11 0x30
#define A12 0x34
#define A13 0x38
#define A14 0x3c
#define A15 0x40
#define A16 0x44
#define A17 0x48
#define A18 0x4c
#define A19 0x50
#define A20 0x54
#define A21 0x58
#define A22 0x5c
#define A23 0x60
#define A24 0x64
#define A25 0x68
#define SD0 0x6c
#define SD1 0x70
#define SD2 0x74
#define SD3 0x78
#define SD4 0x7c
#define SD5 0x80
#define SD6 0x84
#define SD7 0x88
#define SD8 0x8c
#define SD9 0x90
#define SD10 0x94
#define SD11 0x98
#define SD12 0x9c
#define SD13 0xa0
#define SD14 0xa4
#define SD15 0xa8
#define SDBA1 0xac
#define SDBA0 0xb0
#define DQM0 0xb4
#define DQM1 0xb8
#define RAS 0xbc
#define CAS 0xc0
#define SDWE 0xc4
#define SDCKE0 0xc8
#define SDCKE1 0xcc
#define SDCLK 0xd0
#define SDQS0 0xd4
#define SDQS1 0xd8
#define EB0 0xdc
#define EB1 0xe0
#define OE 0xe4
#define CS0 0xe8
#define CS1 0xec
#define CS2 0xf0
#define CS3 0xf4
#define CS4 0xf8
#define CS5 0xfc
#define NF_CE0 0x100
#define ECB 0x104
#define LBA 0x108
#define BCLK 0x10c
#define RW 0x110
#define NFWE_B 0x114
#define NFRE_B 0x118
#define NFALE 0x11c
#define NFCLE 0x120
#define NFWP_B 0x124
#define NFRB 0x128
#define D15 0x12c
#define D14 0x130
#define D13 0x134
#define D12 0x138
#define D11 0x13c
#define D10 0x140
#define D9 0x144
#define D8 0x148
#define D7 0x14c
#define D6 0x150
#define D5 0x154
#define D4 0x158
#define D3 0x15c
#define D2 0x160
#define D1 0x164
#define D0 0x168
#define LD0 0x16c
#define LD1 0x170
#define LD2 0x174
#define LD3 0x178
#define LD4 0x17c
#define LD5 0x180
#define LD6 0x184
#define LD7 0x188
#define LD8 0x18c
#define LD9 0x190
#define LD10 0x194
#define LD11 0x198
#define LD12 0x19c
#define LD13 0x1a0
#define LD14 0x1a4
#define LD15 0x1a8
#define HSYNC 0x1ac
#define VSYNC 0x1b0
#define LSCLK 0x1b4
#define OE_ACD 0x1b8
#define CONTRAST 0x1bc
#define PWM 0x1c0
#define CSI_D2 0x1c4
#define CSI_D3 0x1c8
#define CSI_D4 0x1cc
#define CSI_D5 0x1d0
#define CSI_D6 0x1d4
#define CSI_D7 0x1d8
#define CSI_D8 0x1dc
#define CSI_D9 0x1e0
#define CSI_MCLK 0x1e4
#define CSI_VSYNC 0x1e8
#define CSI_HSYNC 0x1ec
#define CSI_PIXCLK 0x1f0
#define I2C1_CLK 0x1f4
#define I2C1_DAT 0x1f8
#define CSPI1_MOSI 0x1fc
#define CSPI1_MISO 0x200
#define CSPI1_SS0 0x204
#define CSPI1_SS1 0x208
#define CSPI1_SCLK 0x20c
#define CSPI1_RDY 0x210
#define UART1_RXD 0x214
#define UART1_TXD 0x218
#define UART1_RTS 0x21c
#define UART1_CTS 0x220
#define UART2_RXD 0x224
#define UART2_TXD 0x228
#define UART2_RTS 0x22c
#define UART2_CTS 0x230
#define SD1_CMD 0x234
#define SD1_CLK 0x238
#define SD1_DATA0 0x23c
#define SD1_DATA1 0x240
#define SD1_DATA2 0x244
#define SD1_DATA3 0x248
#define KPP_ROW0 0x24c
#define KPP_ROW1 0x250
#define KPP_ROW2 0x254
#define KPP_ROW3 0x258
#define KPP_COL0 0x25c
#define KPP_COL1 0x260
#define KPP_COL2 0x264
#define KPP_COL3 0x268
#define FEC_MDC 0x26c
#define FEC_MDIO 0x270
#define FEC_TDATA0 0x274
#define FEC_TDATA1 0x278
#define FEC_TX_EN 0x27c
#define FEC_RDATA0 0x280
#define FEC_RDATA1 0x284
#define FEC_RX_DV 0x288
#define FEC_TX_CLK 0x28c
#define RTCK 0x290
#define TCK 0x294
#define TMS 0x298
#define TDI 0x29c
#define TDO 0x2a0
#define TRSTB 0x2a4
#define DE_B 0x2a8
#define SJC_MOD 0x2ac
#define USBPHY1_VBUS 0x2b0
#define USBPHY1_DP 0x2b4
#define USBPHY1_DM 0x2b8
#define USBPHY1_UID 0x2bc
#define USBPHY1_RREF 0x2c0
#define USBPHY2_DM 0x2c4
#define USBPHY2_DP 0x2c8
#define GPIO_A 0x2cc
#define GPIO_B 0x2d0
#define GPIO_C 0x2d4
#define GPIO_D 0x2d8
#define GPIO_E 0x2dc
#define GPIO_F 0x2e0
#define EXT_ARMCLK 0x2e4
#define UPLL_BYPCLK 0x2e8
#define VSTBY_REQ 0x2ec
#define VSTBY_ACK 0x2f0
#define POWER_FAIL 0x2f4
#define RESET_B 0x2f8
#define POR_B 0x2fc
#define CLKO 0x300
#define BOOT_MODE0 0x304
#define BOOT_MODE1 0x308
#define CLK_SEL 0x30c
#define TEST_MODE 0x310
#define OSC24M_EXTAL 0x314
#define OSC24M_XTAL 0x318
#define OSC32K_EXTAL 0x31c
#define OSC32K_XTAL 0x320
#define TAMPER_A 0x324
#define TAMPER_B 0x328
#define MESH_C 0x32c
#define MESH_D 0x330
#define OSC_BYP 0x334
#define XP 0x338
#define XN 0x33c
#define YP 0x340
#define YN 0x344
#define WIPER 0x348
#define INAUX0 0x34c
#define INAUX1 0x350
#define INAUX2 0x354
#define REF 0x358

#define DVS_MISC 0x35c
#define DSE_FEC 0x360
#define DVS_JTAG 0x364
#define DSE_NFC 0x368
#define DSE_CSI 0x36c
#define DSE_WEIM 0x370
#define DSE_DDR 0x374
#define DVS_CRM 0x378
#define DSE_KPP 0x37c
#define DSE_SDHC1 0x380
#define DSE_LCD 0x384
#define DSE_UART 0x388
#define DVS_NFC 0x38c
#define DVS_CSI 0x390
#define DSE_CSPI1 0x394
#define DDRTYPE 0x398
#define DVS_SDHC1 0x39c
#define DVS_LCD 0x3a0

#define ALT0 0x0
#define ALT1 0x1
#define ALT2 0x2
#define ALT3 0x3
#define ALT4 0x4
#define ALT5 0x5
#define ALT6 0x6
#define ALT7 0x7

#ifndef IOMUXC_BASE_ADDR
//#define IOMUXC_BASE_ADDR 0x0
#endif

#define GPR_BASE_ADDR (IOMUXC_BASE_ADDR + 0x0) // 0x0
#define OBSRV_BASE_ADDR (GPR_BASE_ADDR + 0x4) // 0x4
#define SW_MUX_BASE_ADDR (OBSRV_BASE_ADDR + 0x4) // 0x8
#define SW_PAD_BASE_ADDR (SW_MUX_BASE_ADDR + 0x224) // 0x22c
#define SW_GRP_BASE_ADDR (SW_PAD_BASE_ADDR + 0x1ec) // 0x418
#define SW_INPUT_PORT_BASE_ADDR (SW_GRP_BASE_ADDR + 0x48) // 0x460
#define SELECT_INPUT_BASE_ADDR (SW_INPUT_PORT_BASE_ADDR + 0x0) // 0x460

#endif

