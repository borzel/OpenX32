// This is generated from an EXCEL sheel - DO NOT EDIT
// Generated on 11/22/2007 5:35:28 PM for SENNA.00.01
#ifndef SOC_MEMORY_MAP_H
#define SOC_MEMORY_MAP_H
// ############################################################################
// #                                                                          #
// #                         Senna Specific Memory Map                        #
// #                    Freescale Confidential Proprietary                    #
// # Purpose:                                                                 #
// #   This file is used by the compilers/assembler to decode the memory map  #
// #                                                                          #
// # Description                                                              #
// #   This file list out each individual memory location for decoding        #
// #                                                                          #
// # Initial version writen by                                                #
// #   Louis Gao (louis.gao@freescale.com)                                    #
// #                                                                          #
// # Revisions                                                                #
// #    Date       By           Description of changes                        #
// #  17 Oct 2007  Louis Gao    Initial release for Senna.                    #
// #  25 Oct 2007  Louis Gao    Added CSPI3 and SIM2. Updated ARMP offset
// #  02 Nov 2007  Louis Gao   Updated CRM according to initial CRM release
// #  05 Nov 2007  Louis Gao   Updated UART5, TSC/ADC according to memery map release on 11/05
// #  22 Nov 2007  Louis Gao   Updated CRM
// #  25 Jan 2008  Louis Gao   Added GPIO4
// #
// #
// #
// #
// ############################################################################
// Memory Map
// ----------
// 00000000	 -      00003FFF	  	16 KB	  	AP ROM (32KB)
// 00004000	 - 	00403FFF	  	4MB	  	Reserved
// 00404000	 - 	00407FFF	  	16 KB	  	AP ROM (32KB)
// 00408000	 - 	0FFFFFFF	  	252MB (minus 32KB)	  	Reserved
// 10000000	 - 	1FFFFFFF	  	256MB	  	Reserved for RAM aliasing
// 10000000	 - 	1001FFFF	  	128KB	  	Reserved
// 20000000	 - 	2FFFFFFF	  	256MB	  	Reserved
// 30000000	 - 	3FFFFFFF	  	256MB	  	 Reserved
// 40000000	 - 	41FFFFFF	  	32M	  	AIPS #A off platform global module enable #0
// 42000000	 - 	43EFFFFF	  	31M	  	AIPS #A off platform global module enable #1
// 43F00000	 - 	43F03FFF	  	16KB	  	AIPS A Control Regs (slot 0)
// 43F04000	 - 	43F07FFF	  	16KB	  	AIPS A MAX
// 43F08000	 - 	43F0BFFF	  	16KB	  	AIPS A CLKCTL
// 43F0C000	 - 	43F0FFFF	  	16KB	  	AIPS A ETB Registers
// 43F10000	 - 	43F13FFF	  	16KB	  	AIPS A ETB Memory
// 43F14000	 - 	43F17FFF	  	16KB	  	AAPE Registers
// 43F18000	 - 	43F1BFFF	  	16KB	  	AIPS A ECT CTI0??
// 43F1C000	 - 	43F1FFFF	  	16KB	  	JAM??
// 43F20000	 - 	43F23FFF	  	16KB	  	Reserved
// 43F24000	 - 	43F27FFF	  	16KB	  	
// 43F28000	 - 	43F2BFFF	  	16KB	  	
// 43F2C000	 - 	43F7FFFF	  	336KB	  	Reserved
// 43F80000	 - 	43F83FFF	  	16K	  	I2C
// 43F84000	 - 	43F87FFF	  	16K	  	I2C3
// 43F88000	 - 	43F8BFFF	  	16K	  	CAN1
// 43F8C000	 - 	43F8FFFF	  	16K	  	CAN2
// 43F90000	 - 	43F93FFF	  	16K	  	UART1
// 43F94000	 - 	43F97FFF	  	16K	  	UART2
// 43F98000	 - 	43F9BFFF	  	16K	  	I2C2
// 43F9C000	 - 	43F9FFFF	  	16K	  	OWIRE
// 43FA0000	 - 	43FA3FFF	  	16K	  	ATA (CPU Side)
// 43FA4000	 - 	43FA7FFF	  	16K	  	CSPI1
// 43FA8000	 - 	43FABFFF	  	16K	  	KPP
// 43FAC000	 - 	43FAFFFF	  	16K	  	IOMUXC
// 43FB0000	 - 	43FB3FFF	  	16K	  	Audmux
// 43FB4000	 - 	43FB7FFF	  	16K	  	Reserved
// 43FB8000	 - 	43FBBFFF	  	16K	  	ECT (IP BUS A)
// 43FBC000	 - 	43FBFFFF	  	16K	  	ECT (IP BUS B)
// 43FC0000	 - 	43FFFFFF	  	256K	  	Reserved AIPS #A off platform slots
// 44000000	 - 	4FFFFFFF	  	192M	  	Reserved (aliased AIPS #A slots)
// 50000000	 - 	51FFFFFF	  	32M	  	AIPS #B off platform global module enable #0
// 50000000	 - 	50003FFF	  	16 KB	  	SPBA base address
// 50004000	 - 	50007FFF	  	16 KB	  	CSPI3
// 50008000	 - 	5000BFFF	  	16 KB	  	UART4
// 5000C000	 - 	5000FFFF	  	16 KB	  	UART3
// 50010000	 - 	50013FFF	  	16 KB	  	CSPI2
// 50014000	 - 	50017FFF	  	16 KB	  	SSI2
// 50018000	 - 	5001BFFF	  	16 KB	  	ESAI
// 5001C000	 - 	5001FFFF	  	16 KB	  	Reserved
// 50020000	 - 	50023FFF	  	16 KB	  	ATA (DMA port)
// 50024000	 - 	50027FFF	  	16 KB	  	SIM1
// 50028000	 - 	5002BFFF	  	16 KB	  	SIM2
// 5002C000	 - 	5002FFFF	  	16 KB	  	UART5
// 50030000	 - 	50033FFF	  	16 KB	  	TSC/ADC
// 50034000	 - 	50037FFF	  	16 KB	  	SSI1
// 50038000	 - 	5003BFFF	  	16 KB	  	FEC
// 5003C000	 - 	5003FFFF	  	16 KB	  	SPBA
// 50040000	 - 	51FFFFFF	  	31.75MB	  	Reserved
// 52000000	 - 	53EFFFFF	  	31M	  	AIPS #B off platform global module enable #1
// 53F00000	 - 	53F03FFF	  	16 KB	  	AIPS B Control Registers (slot 0)
// 53F04000	 - 	53F07FFF	  	16KB	  	Reserved
// 53F08000	 - 	53F7FFFF	  	480KB	  	Reserved AIPS #B
// 53F80000	 - 	53F83FFF	  	16K	  	CCM
// 53F84000	 - 	53F87FFF	  	16K	  	GPT4
// 53F88000	 - 	53F8BFFF	  	16K	  	GPT3
// 53F8c000	 - 	53F8FFFF	  	16K	  	GPT2
// 53F90000	 - 	53F93FFF	  	16K	  	GPT1
// 53F94000	 - 	53F97FFF	  	16K	  	EPIT1
// 53F98000	 - 	53F9BFFF	  	16K	  	EPIT2
// 53F9C000	 - 	53F9FFFF	  	16K	  	GPIO4
// 53FA0000	 - 	53FA3FFF	  	16K	  	PWM2
// 53FA4000	 - 	53FA7FFF	  	16K	  	GPIO3
// 53FA8000	 - 	53FABFFF	  	16K	  	PWM3
// 53FAC000	 - 	53FAFFFF	  	16K	  	SCC
// 53FB0000	 - 	53FB3FFF	  	16K	  	RNGB
// 53FB4000	 - 	53FB7FFF	  	16K	  	eSDHC1
// 53FB8000	 - 	53FBBFFF	  	16K	  	eSDHC2
// 53FBC000	 - 	53FBFFFF	  	16K	  	LCDC
// 53FC0000	 - 	53FC3FFF	  	16K	  	SLCDC
// 53FC4000	 - 	53FC7FFF	  	16K	  	Reserved
// 53FC8000	 - 	53FCBFFF	  	16k	  	PWM4
// 53FCC000	 - 	53FCFFFF	  	16K	  	GPIO1
// 53FD0000	 - 	53FD3FFF	  	16K	  	GPIO2
// 53FD4000	 - 	53FD7FFF	  	16K	  	SDMA
// 53FD8000	 - 	53FDBFFF	  	16K	  	Reserved
// 53FDC000	 - 	53FDFFFF	  	16K	  	WDOG
// 53FE0000	 - 	53FE3FFF	  	16K	  	PWM1
// 53FE4000	 - 	53FE7FFF	  	16K	  	Tamper Detector
// 53FE8000	 - 	53FEBFFF	  	16K	  	Volatile Keys
// 53FEC000	 - 	53FEFFFF	  	16K	  	RTICv3
// 53FF0000	 - 	53FF3FFF	  	16K	  	IIM
// 53FF4000	 - 	53FF7FFF	  	16K	  	USB
// 53FF8000	 - 	53FFBFFF	  	16K	  	CSI
// 53FFC000	 - 	53FFFFFF	  	16K	  	DryICE
// 54000000	 - 	5FFFFFFF	  	192M	  	Reserved (aliased AIPS #B slots)
// 60000000	 - 	67FFFFFF	  	128 MB	  	AP ROMPATCH
// 68000000	 - 	6FFFFFFF	  	128 MB	  	AP AVIC
// 70000000	 - 	77FFFFFF	  	128 MB	  	
// 78000000	 - 	7801FFFF	  		  	128KB Internal RAM
// 78020000	 - 	7FFFFFFF	  		  	Reserved
// 80000000	 - 	8FFFFFFF	  	256 MB	  	SDRAM Bank 0
// 90000000	 - 	9FFFFFFF	  	256 MB	  	SDRAM Bank 1
// A0000000	 - 	A7FFFFFF	  	128 MB	  	WEIM CS0 (flash 128)
// A8000000	 - 	AFFFFFFF	  	128 MB	  	WEIM CS11(flash 64)
// B0000000	 - 	B1FFFFFF	  	32 MB	  	WEIM CS2 (SRAM)
// B2000000	 - 	B3FFFFFF	  	32 MB	  	WEIM CS3
// B4000000	 - 	B5FFFFFF	  	32 MB	  	WEIM CS4
// B6000000	 - 	B7FFFFFF	  	32 MB	  	WEIM CS5
// B8000000	 - 	B8000FFF	  	4 KB	  	NAND flash controller
// B8001000	 - 	B8001FFF	  	4 KB 	  	SDRAM control registers
// B8002000	 - 	B8002FFF	  	4 KB	  	WEIM control registers
// B8003000	 - 	B8003FFF	  	4 KB	  	M3IF control registers
// B8004000	 - 	B8004FFF	  	4 KB	  	EMI control registers
// B8005000	 - 	BAFFFFFF	  		  	Reserved
// BB000000	 - 	BB000FFF	  		  	NAND flash  -  Main area buf
// BB001000	 - 	BB0011FF	  		  	NAND flash  -  Spare area buf
// BB001200	 - 	BB001DFF	  		  	Reserved
// BB001E00	 - 	BB001FFF	  		  	NAND flash  -  Control Regs
// BB012000	 - 	BFFFFFFF	  		  	Reserved
// C0000000	 - 	FFFFFFFF	  	 - 	  	Reserved


// #########################################
// # BOOT ROM                              #
// # $0000_0000 to $0000_3FFF              #
// # $0040_4000 to $0040_7FFF              #
// #########################################
#define BOOTROM1_ADDR_BOT          0x00000000
#define BOOTROM1_PHY_SIZE          0x00004000
#define BOOTROM1_ASS_SIZE          0x00004000

#define BOOTROM2_ADDR_BOT          0x00404000
#define BOOTROM2_PHY_SIZE          0x00004000
#define BOOTROM2_ASS_SIZE          0x00004000

// #########################################
// # AIPS1                                 #
// #########################################
#define AIPS1_BASE_ADDR            0x43F00000
#define AIPS1_MPROT0_7             (AIPS1_BASE_ADDR+0x00)     // Master Privilege Reg 0-7
#define AIPS1_MPROT8_15            (AIPS1_BASE_ADDR+0x04)     // Master Privilege Reg 8-15
#define AIPS1_PACR0_7              (AIPS1_BASE_ADDR+0x20)     // Peripheral Access Control Reg 0-7
#define AIPS1_PACR8_15             (AIPS1_BASE_ADDR+0x24)     // Peripheral Access Control Reg 8-15
#define AIPS1_PACR16_23            (AIPS1_BASE_ADDR+0x28)     // Peripheral Access Control Reg 16-23
#define AIPS1_PACR24_31            (AIPS1_BASE_ADDR+0x2C)     // Peripheral Access Control Reg 24-32
#define AIPS1_OPACR0_7             (AIPS1_BASE_ADDR+0x40)     // Off-Platform Peri Access Ctl Reg 0-7
#define AIPS1_OPACR8_15            (AIPS1_BASE_ADDR+0x44)     // Off-Platform Peri Access Ctl Reg 8-15
#define AIPS1_OPACR16_23           (AIPS1_BASE_ADDR+0x48)     // Off-Platform Peri Access Ctl Reg 16-23
#define AIPS1_OPACR24_31           (AIPS1_BASE_ADDR+0x4C)     // Off-Platform Peri Access Ctl Reg 24-31
#define AIPS1_OPACR32_33           (AIPS1_BASE_ADDR+0x50)     // Off-Platform Peri Access Ctl Reg 32-33

// #########################################
// # MAX                                   #
// #########################################
#define MAX_BASE_ADDR              0x43F04000
#define MAX_SLV0_BASE              (MAX_BASE_ADDR+0x000)      // base location for slave 0
#define MAX_SLV1_BASE              (MAX_BASE_ADDR+0x100)      // base location for slave 1
#define MAX_SLV2_BASE              (MAX_BASE_ADDR+0x200)      // base location for slave 2
#define MAX_SLV3_BASE              (MAX_BASE_ADDR+0x300)      // base location for slave 3
#define MAX_SLV4_BASE              (MAX_BASE_ADDR+0x400)      // base location for slave 4

#define MAX_SLV0_MPR0              (MAX_SLV0_BASE+0x00)       // 32bit max slv0 master priority reg
#define MAX_SLV0_SGPCR0            (MAX_SLV0_BASE+0x10)       // 32bit max slv0 general ctrl reg

#define MAX_SLV1_MPR1              (MAX_SLV1_BASE+0x00)       // 32bit max slv1 master priority reg
#define MAX_SLV1_SGPCR1            (MAX_SLV1_BASE+0x10)       // 32bit max slv1 general ctrl reg

#define MAX_SLV2_MPR2              (MAX_SLV2_BASE+0x00)       // 32bit max slv2 master priority reg
#define MAX_SLV2_SGPCR2            (MAX_SLV2_BASE+0x10)       // 32bit max slv2 general ctrl reg

#define MAX_SLV3_MPR3              (MAX_SLV3_BASE+0x00)       // 32bit max slv3 master priority reg
#define MAX_SLV3_SGPCR3            (MAX_SLV3_BASE+0x10)       // 32bit max slv3 general ctrl reg

#define MAX_SLV4_MPR4              (MAX_SLV4_BASE+0x00)       // 32bit max slv4 master priority reg
#define MAX_SLV4_SGPCR4            (MAX_SLV4_BASE+0x10)       // 32bit max slv4 general ctrl reg

#define MAX_MST0_MGPCR0            (MAX_BASE_ADDR+0x800)      // 32bit max mst0 general ctrl reg
#define MAX_MST1_MGPCR1            (MAX_BASE_ADDR+0x900)      // 32bit max mst1 general ctrl reg
#define MAX_MST2_MGPCR2            (MAX_BASE_ADDR+0xA00)      // 32bit max mst2 general ctrl reg
#define MAX_MST3_MGPCR3            (MAX_BASE_ADDR+0xB00)      // 32bit max mst3 general ctrl reg
#define MAX_MST4_MGPCR4            (MAX_BASE_ADDR+0xC00)      // 32bit max mst4 general ctrl reg

// #########################################
// # CLKCTL                                #
// #########################################
#define CTL_BASE_ADDR              0x43F08000
#define CTL_GP_CTRL                (CTL_BASE_ADDR+0x00)      
#define CTL_GP_SER                 (CTL_BASE_ADDR+0x04)      
#define CTL_GP_CER                 (CTL_BASE_ADDR+0x08)      
#define CTL_GP_TAPID               (CTL_BASE_ADDR+0x010)     

// #########################################
// # ETB                                   #
// #########################################
#define ETB_BASE_ADDR              0x43F0C000
#define ETB_ID                     (ETB_BASE_ADDR+0x00)       // Identification Register
#define ETB_RAM_DEPTH              (ETB_BASE_ADDR+0x04)       // RAM Depth Register
#define ETB_RAM_WIDTH              (ETB_BASE_ADDR+0x08)       // RAM Width Register
#define ETB_STATUS                 (ETB_BASE_ADDR+0x0C)       // Status Register
#define ETB_RAM_W_PTR              (ETB_BASE_ADDR+0x18)       // RAM Write Pointer Register
#define ETB_TRG_CNT                (ETB_BASE_ADDR+0x1C)       // Trigger Counter Register
#define ETB_CTL                    (ETB_BASE_ADDR+0x20)       // Control Register

// #########################################
// # ARMP_ECT                              #
// #########################################
#define ARMP_ECT_BASE_ADDR         0x43F18000
#define ARMP_ECT_CTICONTROL        (ARMP_ECT_BASE_ADDR+0x0)   // CTI Control Register
#define ARMP_ECT_CTISTATUS         (ARMP_ECT_BASE_ADDR+0x4)   // CTI Status Register
#define ARMP_ECT_CTILOCK           (ARMP_ECT_BASE_ADDR+0x8)   // CTI Lock Enable Register
#define ARMP_ECT_CTIPROTECTION     (ARMP_ECT_BASE_ADDR+0xC)   // CTI Protection Enable Register
#define ARMP_ECT_CTIINTACK         (ARMP_ECT_BASE_ADDR+0x10)  // CTI Interrupt Acknowledge Register
#define ARMP_ECT_CTIAPPTEST        (ARMP_ECT_BASE_ADDR+0x14)  // CTI Application Trigger Set Register
#define ARMP_ECT_CTIAPPCLEAR       (ARMP_ECT_BASE_ADDR+0x18)  // CTI Application Trigger Clear Register
#define ARMP_ECT_CTIAPPPULSE       (ARMP_ECT_BASE_ADDR+0x1C)  // CTI Application Pulse Register
#define ARMP_ECT_CTIINEN0          (ARMP_ECT_BASE_ADDR+0x20)  // CTI Trigger to Channel Enable Register
#define ARMP_ECT_CTIINEN1          (ARMP_ECT_BASE_ADDR+0x24) 
#define ARMP_ECT_CTIINEN2          (ARMP_ECT_BASE_ADDR+0x28) 
#define ARMP_ECT_CTIINEN3          (ARMP_ECT_BASE_ADDR+0x2C) 
#define ARMP_ECT_CTIINEN4          (ARMP_ECT_BASE_ADDR+0x30) 
#define ARMP_ECT_CTIINEN5          (ARMP_ECT_BASE_ADDR+0x34) 
#define ARMP_ECT_CTIINEN6          (ARMP_ECT_BASE_ADDR+0x38) 
#define ARMP_ECT_CTIINEN7          (ARMP_ECT_BASE_ADDR+0x3C) 
#define ARMP_ECT_CTIOUTEN0         (ARMP_ECT_BASE_ADDR+0xA0)  // CTI Channel to Trigger Enable Regier
#define ARMP_ECT_CTIOUTEN1         (ARMP_ECT_BASE_ADDR+0xA4) 
#define ARMP_ECT_CTIOUTEN2         (ARMP_ECT_BASE_ADDR+0xA8) 
#define ARMP_ECT_CTIOUTEN3         (ARMP_ECT_BASE_ADDR+0xAC) 
#define ARMP_ECT_CTIOUTEN4         (ARMP_ECT_BASE_ADDR+0xB0) 
#define ARMP_ECT_CTIOUTEN5         (ARMP_ECT_BASE_ADDR+0xB4) 
#define ARMP_ECT_CTIOUTEN6         (ARMP_ECT_BASE_ADDR+0xB8) 
#define ARMP_ECT_CTIOUTEN7         (ARMP_ECT_BASE_ADDR+0xBC) 
#define ARMP_ECT_CTITRIGINSTATUS   (ARMP_ECT_BASE_ADDR+0x130) // CTI Trigger In Status Register
#define ARMP_ECT_CTITRIGOUTSTATUS  (ARMP_ECT_BASE_ADDR+0x134) // CTI Trigger Out Status Register
#define ARMP_ECT_CTICHINSTATUS     (ARMP_ECT_BASE_ADDR+0x138) // CTI Channel In Status Register
#define ARMP_ECT_CTICHOUTSTATUS    (ARMP_ECT_BASE_ADDR+0x13C) // CTI Channel Out Status Register
#define ARMP_ECT_CTIITCR           (ARMP_ECT_BASE_ADDR+0x200) // CTI Test Control Register
#define ARMP_ECT_CTIITIP0          (ARMP_ECT_BASE_ADDR+0x204) // CTI Input Test Register 0
#define ARMP_ECT_CTIITIP1          (ARMP_ECT_BASE_ADDR+0x208) // CTI Input Test Register 1
#define ARMP_ECT_CTIITIP2          (ARMP_ECT_BASE_ADDR+0x20C) // CTI Input Test Register 2
#define ARMP_ECT_CTIITIP3          (ARMP_ECT_BASE_ADDR+0x210) // CTI Input Test Register 3
#define ARMP_ECT_CTITIOP0          (ARMP_ECT_BASE_ADDR+0x214) // CTI Output Test Register 0
#define ARMP_ECT_CTITIOP1          (ARMP_ECT_BASE_ADDR+0x218) // CTI Output Test Register 1
#define ARMP_ECT_CTITIOP2          (ARMP_ECT_BASE_ADDR+0x21C) // CTI Output Test Register 2
#define ARMP_ECT_CTITIOP3          (ARMP_ECT_BASE_ADDR+0x220) // CTI Output Test Register 3
#define ARMP_ECT_CTIPERIPHID0      (ARMP_ECT_BASE_ADDR+0xFE0) // CTI Peripheral Identification Register 0
#define ARMP_ECT_CTIPERIPHID1      (ARMP_ECT_BASE_ADDR+0xFE4) // CTI Peripheral Identification Register 1
#define ARMP_ECT_CTIPERIPHID2      (ARMP_ECT_BASE_ADDR+0xFE8) // CTI Peripheral Identification Register 2
#define ARMP_ECT_CTIPERIPHID3      (ARMP_ECT_BASE_ADDR+0xFEC) // CTI Peripheral Identification Register 3
#define ARMP_ECT_CTIPCELLID0       (ARMP_ECT_BASE_ADDR+0xFF0) // CTI Identification Register 0
#define ARMP_ECT_CTIPCELLID1       (ARMP_ECT_BASE_ADDR+0xFF4) // CTI Identification Register 1
#define ARMP_ECT_CTIPCELLID2       (ARMP_ECT_BASE_ADDR+0xFF8) // CTI Identification Register 2
#define ARMP_ECT_CTIPCELLID3       (ARMP_ECT_BASE_ADDR+0xFFC) // CTI Identification Register 3

// #########################################
// # I2C1                                  #
// #########################################
#define I2C1_BASE_ADDR             0x43F80000
#define I2C1_IADR                  (I2C1_BASE_ADDR+0x00)      // 16bit i2c address reg
#define I2C1_IFDR                  (I2C1_BASE_ADDR+0x04)      // 16bit i2c frequency divider reg
#define I2C1_I2CR                  (I2C1_BASE_ADDR+0x08)      // 16bit i2c control reg
#define I2C1_I2SR                  (I2C1_BASE_ADDR+0x0C)      // 16bit i2c status reg
#define I2C1_I2DR                  (I2C1_BASE_ADDR+0x10)      // 16bit i2c data i/o reg

// #########################################
// # I2C3                                  #
// #########################################
#define I2C3_BASE_ADDR             0x43F84000
#define I2C3_IADR                  (I2C3_BASE_ADDR+0x00)      // 16bit i2c address reg
#define I2C3_IFDR                  (I2C3_BASE_ADDR+0x04)      // 16bit i2c frequency divider reg
#define I2C3_I2CR                  (I2C3_BASE_ADDR+0x08)      // 16bit i2c control reg
#define I2C3_I2SR                  (I2C3_BASE_ADDR+0x0C)      // 16bit i2c status reg
#define I2C3_I2DR                  (I2C3_BASE_ADDR+0x10)      // 16bit i2c data i/o reg

// #########################################
// # CAN1                                  #
// #########################################
#define CAN1_BASE_ADDR             0x43F88000

// #########################################
// # CAN2                                  #
// #########################################
#define CAN2_BASE_ADDR             0x43F8C000

// #########################################
// # UART1                                 #
// #########################################
#define UART1_BASE_ADDR            0x43F90000
#define UART1_URXD_1               (UART1_BASE_ADDR+0x00)     // 32bit uart1 receiver reg
#define UART1_UTXD_1               (UART1_BASE_ADDR+0x40)     // 32bit uart1 transmitter reg
#define UART1_UCR1_1               (UART1_BASE_ADDR+0x80)     // 32bit uart1 control 1 reg
#define UART1_UCR2_1               (UART1_BASE_ADDR+0x84)     // 32bit uart1 control 2 reg
#define UART1_UCR3_1               (UART1_BASE_ADDR+0x88)     // 32bit uart1 control 3 reg
#define UART1_UCR4_1               (UART1_BASE_ADDR+0x8C)     // 32bit uart1 control 4 reg
#define UART1_UFCR_1               (UART1_BASE_ADDR+0x90)     // 32bit uart1 fifo control reg
#define UART1_USR1_1               (UART1_BASE_ADDR+0x94)     // 32bit uart1 status 1 reg
#define UART1_USR2_1               (UART1_BASE_ADDR+0x98)     // 32bit uart1 status 2 reg
#define UART1_UESC_1               (UART1_BASE_ADDR+0x9C)     // 32bit uart1 escape char reg
#define UART1_UTIM_1               (UART1_BASE_ADDR+0xA0)     // 32bit uart1 escape timer reg
#define UART1_UBIR_1               (UART1_BASE_ADDR+0xA4)     // 32bit uart1 BRM incremental reg
#define UART1_UBMR_1               (UART1_BASE_ADDR+0xA8)     // 32bit uart1 BRM modulator reg
#define UART1_UBRC_1               (UART1_BASE_ADDR+0xAC)     // 32bit uart1 baud rate count reg
#define UART1_ONEMS_1              (UART1_BASE_ADDR+0xB0)     // 32bit uart1 one ms reg
#define UART1_UTS_1                (UART1_BASE_ADDR+0xB4)     // 32bit uart1 test reg

// #########################################
// # UART2                                 #
// #########################################
#define UART2_BASE_ADDR            0x43F94000
#define UART2_URXD_2               (UART2_BASE_ADDR+0x00)     // 32bit uart2 receiver reg
#define UART2_UTXD_2               (UART2_BASE_ADDR+0x40)     // 32bit uart2 transmitter reg
#define UART2_UCR1_2               (UART2_BASE_ADDR+0x80)     // 32bit uart2 control 1 reg
#define UART2_UCR2_2               (UART2_BASE_ADDR+0x84)     // 32bit uart2 control 2 reg
#define UART2_UCR3_2               (UART2_BASE_ADDR+0x88)     // 32bit uart2 control 3 reg
#define UART2_UCR4_2               (UART2_BASE_ADDR+0x8C)     // 32bit uart2 control 4 reg
#define UART2_UFCR_2               (UART2_BASE_ADDR+0x90)     // 32bit uart2 fifo control reg
#define UART2_USR1_2               (UART2_BASE_ADDR+0x94)     // 32bit uart2 status 1 reg
#define UART2_USR2_2               (UART2_BASE_ADDR+0x98)     // 32bit uart2 status 2 reg
#define UART2_UESC_2               (UART2_BASE_ADDR+0x9C)     // 32bit uart2 escape char reg
#define UART2_UTIM_2               (UART2_BASE_ADDR+0xA0)     // 32bit uart2 escape timer reg
#define UART2_UBIR_2               (UART2_BASE_ADDR+0xA4)     // 32bit uart2 BRM incremental reg
#define UART2_UBMR_2               (UART2_BASE_ADDR+0xA8)     // 32bit uart2 BRM modulator reg
#define UART2_UBRC_2               (UART2_BASE_ADDR+0xAC)     // 32bit uart2 baud rate count reg
#define UART2_ONEMS_2              (UART2_BASE_ADDR+0xB0)     // 32bit uart2 one ms reg
#define UART2_UTS_2                (UART2_BASE_ADDR+0xB4)     // 32bit uart2 test reg

// #########################################
// # I2C2                                  #
// #########################################
#define I2C2_BASE_ADDR             0x43F98000
#define I2C2_IADR                  (I2C2_BASE_ADDR+0x00)      // 16bit i2c address reg
#define I2C2_IFDR                  (I2C2_BASE_ADDR+0x04)      // 16bit i2c frequency divider reg
#define I2C2_I2CR                  (I2C2_BASE_ADDR+0x08)      // 16bit i2c control reg
#define I2C2_I2SR                  (I2C2_BASE_ADDR+0x0C)      // 16bit i2c status reg
#define I2C2_I2DR                  (I2C2_BASE_ADDR+0x10)      // 16bit i2c data i/o reg

// #########################################
// # OWIRE                                 #
// #########################################
#define OWIRE_BASE_ADDR            0x43F9C000
#define OWIRE_CTRL                 (OWIRE_BASE_ADDR+0x00)     // 16bit owire control reg
#define OWIRE_TIME_DIV             (OWIRE_BASE_ADDR+0x02)     // 16bit owire time divider reg
#define OWIRE_RESET                (OWIRE_BASE_ADDR+0x04)     // 16bit owire reset reg
#define OWIRE_COMMAND              (OWIRE_BASE_ADDR+0x06)     // 16bit owire command reg
#define OWIRE_TXRX                 (OWIRE_BASE_ADDR+0x08)     // 16bit owire tx rx reg
#define OWIRE_INTR                 (OWIRE_BASE_ADDR+0x0A)     // 16bit owire interrupt reg
#define OWIRE_INTR_EN              (OWIRE_BASE_ADDR+0x0C)     // 16bit owire interrupt enable reg

// #########################################
// # CSPI1                                 #
// #########################################
#define CSPI1_BASE_ADDR            0x43FA4000
#define CSPI1_RXDATA               (CSPI1_BASE_ADDR+0x00)     // 32bit cspi1 receive data reg
#define CSPI1_TXDATA               (CSPI1_BASE_ADDR+0x04)     // 32bit cspi1 transmit data reg
#define CSPI1_CONREG               (CSPI1_BASE_ADDR+0x08)     // 32bit cspi1 control reg
#define CSPI1_INTREG               (CSPI1_BASE_ADDR+0x0C)     // 32bit cspi1 interrupt stat/ctr reg
#define CSPI1_DMAREG               (CSPI1_BASE_ADDR+0x10)     // 32bit cspi1 test reg
#define CSPI1_STATREG              (CSPI1_BASE_ADDR+0x14)     // 32bit cspi1 sample period ctrl reg
#define CSPI1_PERIODREG            (CSPI1_BASE_ADDR+0x18)     // 32bit cspi1 dma ctrl reg
#define CSPI1_TESTREG              (CSPI1_BASE_ADDR+0x1C)     // 32bit cspi1 soft reset reg

// #########################################
// # KPP                                   #
// #########################################
#define KPP_BASE_ADDR              0x43FA8000
#define KPP_KPCR                   (KPP_BASE_ADDR+0x00)       // 16bit kpp keypad control reg
#define KPP_KPSR                   (KPP_BASE_ADDR+0x02)       // 16bit kpp keypad status reg
#define KPP_KDDR                   (KPP_BASE_ADDR+0x04)       // 16bit kpp keypad data directon reg
#define KPP_KPDR                   (KPP_BASE_ADDR+0x06)       // 16bit kpp keypad data reg

// #########################################
// # IOMUXC                                #
// #########################################
#define IOMUXC_BASE_ADDR           0x43FAC000

// #########################################
// # AUDMUX                                #
// #########################################
#define AUDMUX_BASE_ADDR           0x43FB0000
#define AUDMUX_HPCR1               (AUDMUX_BASE_ADDR+0x00)    // Host Port Control Register 1
#define AUDMUX_HPDCR1              (AUDMUX_BASE_ADDR+0x04)    // Host Port Data Control Register 1
#define AUDMUX_HPCR2               (AUDMUX_BASE_ADDR+0x08)    // Host Port Control Register 2
#define AUDMUX_HPDCR2              (AUDMUX_BASE_ADDR+0x0C)    // Host Port Data Control Register 2
#define AUDMUX_HPCR3               (AUDMUX_BASE_ADDR+0x10)    // Host Port Control Register 3
#define AUDMUX_HPDCR3              (AUDMUX_BASE_ADDR+0x14)    // Host Port Data Control Register 3
#define AUDMUX_PPCR1               (AUDMUX_BASE_ADDR+0x18)    // Peripheral Port Control Register 1
#define AUDMUX_PPDCR1              (AUDMUX_BASE_ADDR+0x1C)    // Peripheral Port Data Control Register 1
#define AUDMUX_PPCR2               (AUDMUX_BASE_ADDR+0x20)    // Peripheral Port Control Register 2
#define AUDMUX_PPDCR2              (AUDMUX_BASE_ADDR+0x24)    // Peripheral Port Data Control Register 2
#define AUDMUX_PPCR3               (AUDMUX_BASE_ADDR+0x28)    // Peripheral Port Control Register 3
#define AUDMUX_PPDCR3              (AUDMUX_BASE_ADDR+0x2C)    // Peripheral Port Data Control Register 3
#define AUDMUX_PPCR4               (AUDMUX_BASE_ADDR+0x30)    // Peripheral Port Control Register 4
#define AUDMUX_PPDCR4              (AUDMUX_BASE_ADDR+0x34)    // Peripheral Port Data Control Register 4
#define AUDMUX_CNMCR               (AUDMUX_BASE_ADDR+0x38)    // CE Bus Control Register

// #########################################
// # ECT1                                  #
// #########################################
#define ECT1_BASE_ADDR             0x43FB8000
#define ECT1_CTICONTROL            (ECT1_BASE_ADDR+0x0)       // CTI Control Register
#define ECT1_CTISTATUS             (ECT1_BASE_ADDR+0x4)       // CTI Status Register
#define ECT1_CTILOCK               (ECT1_BASE_ADDR+0x8)       // CTI Lock Enable Register
#define ECT1_CTIPROTECTION         (ECT1_BASE_ADDR+0xC)       // CTI Protection Enable Register
#define ECT1_CTIINTACK             (ECT1_BASE_ADDR+0x10)      // CTI Interrupt Acknowledge Register
#define ECT1_CTIAPPTEST            (ECT1_BASE_ADDR+0x14)      // CTI Application Trigger Set Register
#define ECT1_CTIAPPCLEAR           (ECT1_BASE_ADDR+0x18)      // CTI Application Trigger Clear Register
#define ECT1_CTIAPPPULSE           (ECT1_BASE_ADDR+0x1C)      // CTI Application Pulse Register
#define ECT1_CTIINEN0              (ECT1_BASE_ADDR+0x20)      // CTI Trigger to Channel Enable Register
#define ECT1_CTIINEN1              (ECT1_BASE_ADDR+0x24)     
#define ECT1_CTIINEN2              (ECT1_BASE_ADDR+0x28)     
#define ECT1_CTIINEN3              (ECT1_BASE_ADDR+0x2C)     
#define ECT1_CTIINEN4              (ECT1_BASE_ADDR+0x30)     
#define ECT1_CTIINEN5              (ECT1_BASE_ADDR+0x34)     
#define ECT1_CTIINEN6              (ECT1_BASE_ADDR+0x38)     
#define ECT1_CTIINEN7              (ECT1_BASE_ADDR+0x3C)     
#define ECT1_CTIOUTEN0             (ECT1_BASE_ADDR+0x0A0)     // CTI Channel to Trigger Enable Regier
#define ECT1_CTIOUTEN1             (ECT1_BASE_ADDR+0x0A4)    
#define ECT1_CTIOUTEN2             (ECT1_BASE_ADDR+0x0A8)    
#define ECT1_CTIOUTEN3             (ECT1_BASE_ADDR+0x0AC)    
#define ECT1_CTIOUTEN4             (ECT1_BASE_ADDR+0x0B0)    
#define ECT1_CTIOUTEN5             (ECT1_BASE_ADDR+0x0B4)    
#define ECT1_CTIOUTEN6             (ECT1_BASE_ADDR+0x0B8)    
#define ECT1_CTIOUTEN7             (ECT1_BASE_ADDR+0x0BC)    
#define ECT1_CTITRIGINSTATUS       (ECT1_BASE_ADDR+0x130)     // CTI Trigger In Status Register
#define ECT1_CTITRIGOUTSTATUS      (ECT1_BASE_ADDR+0x134)     // CTI Trigger Out Status Register
#define ECT1_CTICHINSTATUS         (ECT1_BASE_ADDR+0x138)     // CTI Channel In Status Register
#define ECT1_CTICHOUTSTATUS        (ECT1_BASE_ADDR+0x13C)     // CTI Channel Out Status Register
#define ECT1_CTIITCR               (ECT1_BASE_ADDR+0x200)     // CTI Test Control Register
#define ECT1_CTIITIP0              (ECT1_BASE_ADDR+0x204)     // CTI Input Test Register 0
#define ECT1_CTIITIP1              (ECT1_BASE_ADDR+0x208)     // CTI Input Test Register 1
#define ECT1_CTIITIP2              (ECT1_BASE_ADDR+0x20C)     // CTI Input Test Register 2
#define ECT1_CTIITIP3              (ECT1_BASE_ADDR+0x210)     // CTI Input Test Register 3
#define ECT1_CTITIOP0              (ECT1_BASE_ADDR+0x214)     // CTI Output Test Register 0
#define ECT1_CTITIOP1              (ECT1_BASE_ADDR+0x218)     // CTI Output Test Register 1
#define ECT1_CTITIOP2              (ECT1_BASE_ADDR+0x21C)     // CTI Output Test Register 2
#define ECT1_CTITIOP3              (ECT1_BASE_ADDR+0x220)     // CTI Output Test Register 3
#define ECT1_CTIPERIPHID0          (ECT1_BASE_ADDR+0xFE0)     // CTI Peripheral Identification Register 0
#define ECT1_CTIPERIPHID1          (ECT1_BASE_ADDR+0xFE4)     // CTI Peripheral Identification Register 1
#define ECT1_CTIPERIPHID2          (ECT1_BASE_ADDR+0xFE8)     // CTI Peripheral Identification Register 2
#define ECT1_CTIPERIPHID3          (ECT1_BASE_ADDR+0xFEC)     // CTI Peripheral Identification Register 3
#define ECT1_CTIPCELLID0           (ECT1_BASE_ADDR+0xFF0)     // CTI Identification Register 0
#define ECT1_CTIPCELLID1           (ECT1_BASE_ADDR+0xFF4)     // CTI Identification Register 1
#define ECT1_CTIPCELLID2           (ECT1_BASE_ADDR+0xFF8)     // CTI Identification Register 2
#define ECT1_CTIPCELLID3           (ECT1_BASE_ADDR+0xFFC)     // CTI Identification Register 3

// #########################################
// # ECT2                                  #
// #########################################
#define ECT2_BASE_ADDR             0x43FBC000
#define ECT2_CTICONTROL            (ECT2_BASE_ADDR+0x0)       // CTI Control Register
#define ECT2_CTISTATUS             (ECT2_BASE_ADDR+0x4)       // CTI Status Register
#define ECT2_CTILOCK               (ECT2_BASE_ADDR+0x8)       // CTI Lock Enable Register
#define ECT2_CTIPROTECTION         (ECT2_BASE_ADDR+0xC)       // CTI Protection Enable Register
#define ECT2_CTIINTACK             (ECT2_BASE_ADDR+0x10)      // CTI Interrupt Acknowledge Register
#define ECT2_CTIAPPTEST            (ECT2_BASE_ADDR+0x14)      // CTI Application Trigger Set Register
#define ECT2_CTIAPPCLEAR           (ECT2_BASE_ADDR+0x18)      // CTI Application Trigger Clear Register
#define ECT2_CTIAPPPULSE           (ECT2_BASE_ADDR+0x1C)      // CTI Application Pulse Register
#define ECT2_CTIINEN0              (ECT2_BASE_ADDR+0x20)      // CTI Trigger to Channel Enable Register
#define ECT2_CTIINEN1              (ECT2_BASE_ADDR+0x24)     
#define ECT2_CTIINEN2              (ECT2_BASE_ADDR+0x28)     
#define ECT2_CTIINEN3              (ECT2_BASE_ADDR+0x2C)     
#define ECT2_CTIINEN4              (ECT2_BASE_ADDR+0x30)     
#define ECT2_CTIINEN5              (ECT2_BASE_ADDR+0x34)     
#define ECT2_CTIINEN6              (ECT2_BASE_ADDR+0x38)     
#define ECT2_CTIINEN7              (ECT2_BASE_ADDR+0x03C)    
#define ECT2_CTIOUTEN0             (ECT2_BASE_ADDR+0x0A0)     // CTI Channel to Trigger Enable Regier
#define ECT2_CTIOUTEN1             (ECT2_BASE_ADDR+0x0A4)    
#define ECT2_CTIOUTEN2             (ECT2_BASE_ADDR+0x0A8)    
#define ECT2_CTIOUTEN3             (ECT2_BASE_ADDR+0x0AC)    
#define ECT2_CTIOUTEN4             (ECT2_BASE_ADDR+0x0B0)    
#define ECT2_CTIOUTEN5             (ECT2_BASE_ADDR+0x0B4)    
#define ECT2_CTIOUTEN6             (ECT2_BASE_ADDR+0x0B8)    
#define ECT2_CTIOUTEN7             (ECT2_BASE_ADDR+0x0BC)    
#define ECT2_CTITRIGINSTATUS       (ECT2_BASE_ADDR+0x130)     // CTI Trigger In Status Register
#define ECT2_CTITRIGOUTSTATUS      (ECT2_BASE_ADDR+0x134)     // CTI Trigger Out Status Register
#define ECT2_CTICHINSTATUS         (ECT2_BASE_ADDR+0x138)     // CTI Channel In Status Register
#define ECT2_CTICHOUTSTATUS        (ECT2_BASE_ADDR+0x13C)     // CTI Channel Out Status Register
#define ECT2_CTIITCR               (ECT2_BASE_ADDR+0x200)     // CTI Test Control Register
#define ECT2_CTIITIP0              (ECT2_BASE_ADDR+0x204)     // CTI Input Test Register 0
#define ECT2_CTIITIP1              (ECT2_BASE_ADDR+0x208)     // CTI Input Test Register 1
#define ECT2_CTIITIP2              (ECT2_BASE_ADDR+0x20C)     // CTI Input Test Register 2
#define ECT2_CTIITIP3              (ECT2_BASE_ADDR+0x210)     // CTI Input Test Register 3
#define ECT2_CTITIOP0              (ECT2_BASE_ADDR+0x214)     // CTI Output Test Register 0
#define ECT2_CTITIOP1              (ECT2_BASE_ADDR+0x218)     // CTI Output Test Register 1
#define ECT2_CTITIOP2              (ECT2_BASE_ADDR+0x21C)     // CTI Output Test Register 2
#define ECT2_CTITIOP3              (ECT2_BASE_ADDR+0x220)     // CTI Output Test Register 3
#define ECT2_CTIPERIPHID0          (ECT2_BASE_ADDR+0xFE0)     // CTI Peripheral Identification Register 0
#define ECT2_CTIPERIPHID1          (ECT2_BASE_ADDR+0xFE4)     // CTI Peripheral Identification Register 1
#define ECT2_CTIPERIPHID2          (ECT2_BASE_ADDR+0xFE8)     // CTI Peripheral Identification Register 2
#define ECT2_CTIPERIPHID3          (ECT2_BASE_ADDR+0xFEC)     // CTI Peripheral Identification Register 3
#define ECT2_CTIPCELLID0           (ECT2_BASE_ADDR+0xFF0)     // CTI Identification Register 0
#define ECT2_CTIPCELLID1           (ECT2_BASE_ADDR+0xFF4)     // CTI Identification Register 1
#define ECT2_CTIPCELLID2           (ECT2_BASE_ADDR+0xFF8)     // CTI Identification Register 2
#define ECT2_CTIPCELLID3           (ECT2_BASE_ADDR+0xFFC)     // CTI Identification Register 3

// #########################################
// # SPBA                                  #
// # $5000_0000 to $5000_3FFF              #
// # SPBA REG                              #
// # $5003_C000 to $5003_FFFF              #
// #########################################
#define SPBA_BASE_ADDR             0x50000000
#define SPBA_PER0_START_ADDR       (SPBA_BASE_ADDR+0x00)     
#define SPBA_PER1_START_ADDR       (SPBA_BASE_ADDR+0x4000)   
#define SPBA_PER2_START_ADDR       (SPBA_BASE_ADDR+0x8000)   
#define SPBA_PER3_START_ADDR       (SPBA_BASE_ADDR+0xC000)   
#define SPBA_PER4_START_ADDR       (SPBA_BASE_ADDR+0x10000)  
#define SPBA_PER5_START_ADDR       (SPBA_BASE_ADDR+0x14000)  
#define SPBA_PER6_START_ADDR       (SPBA_BASE_ADDR+0x18000)  
#define SPBA_PER7_START_ADDR       (SPBA_BASE_ADDR+0x1C000)  
#define SPBA_PER8_START_ADDR       (SPBA_BASE_ADDR+0x20000)  
#define SPBA_PER9_START_ADDR       (SPBA_BASE_ADDR+0x24000)  
#define SPBA_PER10_START_ADDR      (SPBA_BASE_ADDR+0x28000)  
#define SPBA_PER11_START_ADDR      (SPBA_BASE_ADDR+0x2C000)  
#define SPBA_PER12_START_ADDR      (SPBA_BASE_ADDR+0x30000)  
#define SPBA_PER13_START_ADDR      (SPBA_BASE_ADDR+0x34000)  
#define SPBA_PER14_START_ADDR      (SPBA_BASE_ADDR+0x38000)  

#define SPBA_REG_ADDR              (SPBA_BASE_ADDR+0x3C000)  
#define SPBA_PRR0                  (SPBA_REG_ADDR+0x00)      
#define SPBA_PRR1                  (SPBA_REG_ADDR+0x04)      
#define SPBA_PRR2                  (SPBA_REG_ADDR+0x08)      
#define SPBA_PRR3                  (SPBA_REG_ADDR+0x0C)      
#define SPBA_PRR4                  (SPBA_REG_ADDR+0x10)      
#define SPBA_PRR5                  (SPBA_REG_ADDR+0x14)      
#define SPBA_PRR6                  (SPBA_REG_ADDR+0x18)      
#define SPBA_PRR7                  (SPBA_REG_ADDR+0x1C)      
#define SPBA_PRR8                  (SPBA_REG_ADDR+0x20)      
#define SPBA_PRR9                  (SPBA_REG_ADDR+0x24)      
#define SPBA_PRR10                 (SPBA_REG_ADDR+0x28)      
#define SPBA_PRR11                 (SPBA_REG_ADDR+0x2C)      
#define SPBA_PRR12                 (SPBA_REG_ADDR+0x30)      
#define SPBA_PRR13                 (SPBA_REG_ADDR+0x34)      
#define SPBA_PRR14                 (SPBA_REG_ADDR+0x38)      

// #########################################
// # CSPI3                                 #
// #########################################
#define CSPI3_BASE_ADDR            0x50004000
#define CSPI3_RXDATA               (CSPI3_BASE_ADDR+0x00)     // 32bit cspi3 receive data reg
#define CSPI3_TXDATA               (CSPI3_BASE_ADDR+0x04)     // 32bit cspi3 transmit data reg
#define CSPI3_CONREG               (CSPI3_BASE_ADDR+0x08)     // 32bit cspi3 control reg
#define CSPI3_INTREG               (CSPI3_BASE_ADDR+0x0C)     // 32bit cspi3 interrupt stat/ctr reg
#define CSPI3_DMAREG               (CSPI3_BASE_ADDR+0x10)     // 32bit cspi3 test reg
#define CSPI3_STATREG              (CSPI3_BASE_ADDR+0x14)     // 32bit cspi3 sample period ctrl reg
#define CSPI3_PERIODREG            (CSPI3_BASE_ADDR+0x18)     // 32bit cspi3 dma ctrl reg
#define CSPI3_TESTREG              (CSPI3_BASE_ADDR+0x1C)     // 32bit cspi3 soft reset reg


// #########################################
// # UART4                                 #
// #########################################
#define UART4_BASE_ADDR            0x50008000
#define UART4_URXD_4               (UART4_BASE_ADDR+0x00)     // 32bit uart4 receiver reg
#define UART4_UTXD_4               (UART4_BASE_ADDR+0x40)     // 32bit uart4 transmitter reg
#define UART4_UCR1_4               (UART4_BASE_ADDR+0x80)     // 32bit uart4 control 1 reg
#define UART4_UCR2_4               (UART4_BASE_ADDR+0x84)     // 32bit uart4 control 2 reg
#define UART4_UCR3_4               (UART4_BASE_ADDR+0x88)     // 32bit uart4 control 3 reg
#define UART4_UCR4_4               (UART4_BASE_ADDR+0x8C)     // 32bit uart4 control 4 reg
#define UART4_UFCR_4               (UART4_BASE_ADDR+0x90)     // 32bit uart4 fifo control reg
#define UART4_USR1_4               (UART4_BASE_ADDR+0x94)     // 32bit uart4 status 1 reg
#define UART4_USR2_4               (UART4_BASE_ADDR+0x98)     // 32bit uart4 status 2 reg
#define UART4_UESC_4               (UART4_BASE_ADDR+0x9C)     // 32bit uart4 escape char reg
#define UART4_UTIM_4               (UART4_BASE_ADDR+0xA0)     // 32bit uart4 escape timer reg
#define UART4_UBIR_4               (UART4_BASE_ADDR+0xA4)     // 32bit uart4 BRM incremental reg
#define UART4_UBMR_4               (UART4_BASE_ADDR+0xA8)     // 32bit uart4 BRM modulator reg
#define UART4_UBRC_4               (UART4_BASE_ADDR+0xAC)     // 32bit uart4 baud rate count reg
#define UART4_ONEMS_4              (UART4_BASE_ADDR+0xB0)     // 32bit uart4 one ms reg
#define UART4_UTS_4                (UART4_BASE_ADDR+0xB4)     // 32bit uart4 test reg

// #########################################
// # UART3                                 #
// #########################################
#define UART3_BASE_ADDR            0x5000C000
#define UART3_URXD_3               (UART3_BASE_ADDR+0x00)     // 32bit uart3 receiver reg
#define UART3_UTXD_3               (UART3_BASE_ADDR+0x40)     // 32bit uart3 transmitter reg
#define UART3_UCR1_3               (UART3_BASE_ADDR+0x80)     // 32bit uart3 control 1 reg
#define UART3_UCR2_3               (UART3_BASE_ADDR+0x84)     // 32bit uart3 control 2 reg
#define UART3_UCR3_3               (UART3_BASE_ADDR+0x88)     // 32bit uart3 control 3 reg
#define UART3_UCR4_3               (UART3_BASE_ADDR+0x8C)     // 32bit uart3 control 4 reg
#define UART3_UFCR_3               (UART3_BASE_ADDR+0x90)     // 32bit uart3 fifo control reg
#define UART3_USR1_3               (UART3_BASE_ADDR+0x94)     // 32bit uart3 status 1 reg
#define UART3_USR2_3               (UART3_BASE_ADDR+0x98)     // 32bit uart3 status 2 reg
#define UART3_UESC_3               (UART3_BASE_ADDR+0x9C)     // 32bit uart3 escape char reg
#define UART3_UTIM_3               (UART3_BASE_ADDR+0xA0)     // 32bit uart3 escape timer reg
#define UART3_UBIR_3               (UART3_BASE_ADDR+0xA4)     // 32bit uart3 BRM incremental reg
#define UART3_UBMR_3               (UART3_BASE_ADDR+0xA8)     // 32bit uart3 BRM modulator reg
#define UART3_UBRC_3               (UART3_BASE_ADDR+0xAC)     // 32bit uart3 baud rate count reg
#define UART3_ONEMS_3              (UART3_BASE_ADDR+0xB0)     // 32bit uart3 one ms reg
#define UART3_UTS_3                (UART3_BASE_ADDR+0xB4)     // 32bit uart3 test reg

// #########################################
// # CSPI2                                 #
// #########################################
#define CSPI2_BASE_ADDR            0x50010000
#define CSPI2_RXDATA               (CSPI2_BASE_ADDR+0x00)     // 32bit cspi2 receive data reg
#define CSPI2_TXDATA               (CSPI2_BASE_ADDR+0x04)     // 32bit cspi2 transmit data reg
#define CSPI2_CONREG               (CSPI2_BASE_ADDR+0x08)     // 32bit cspi2 control reg
#define CSPI2_INTREG               (CSPI2_BASE_ADDR+0x0C)     // 32bit cspi2 interrupt stat/ctr reg
#define CSPI2_DMAREG               (CSPI2_BASE_ADDR+0x10)     // 32bit cspi2 test reg
#define CSPI2_STATREG              (CSPI2_BASE_ADDR+0x14)     // 32bit cspi2 sample period ctrl reg
#define CSPI2_PERIODREG            (CSPI2_BASE_ADDR+0x18)     // 32bit cspi2 dma ctrl reg
#define CSPI2_TESTREG              (CSPI2_BASE_ADDR+0x1C)     // 32bit cspi2 soft reset reg

// #########################################
// # SSI2                                  #
// #########################################
#define SSI2_BASE_ADDR             0x50014000
#define SSI2_STX0                  (SSI2_BASE_ADDR+0x00)      // 32bit ssi2 tx reg 0
#define SSI2_STX1                  (SSI2_BASE_ADDR+0x04)      // 32bit ssi2 tx reg 1
#define SSI2_SRX0                  (SSI2_BASE_ADDR+0x08)      // 32bit ssi2 rx reg 0
#define SSI2_SRX1                  (SSI2_BASE_ADDR+0x0C)      // 32bit ssi2 rx reg 1
#define SSI2_SCR                   (SSI2_BASE_ADDR+0x10)      // 32bit ssi2 control reg
#define SSI2_SISR                  (SSI2_BASE_ADDR+0x14)      // 32bit ssi2 intr status reg
#define SSI2_SIER                  (SSI2_BASE_ADDR+0x18)      // 32bit ssi2 intr enable reg
#define SSI2_STCR                  (SSI2_BASE_ADDR+0x1C)      // 32bit ssi2 tx config reg
#define SSI2_SRCR                  (SSI2_BASE_ADDR+0x20)      // 32bit ssi2 rx config reg
#define SSI2_STCCR                 (SSI2_BASE_ADDR+0x24)      // 32bit ssi2 tx clock control reg
#define SSI2_SRCCR                 (SSI2_BASE_ADDR+0x28)      // 32bit ssi2 rx clock control reg
#define SSI2_SFCSR                 (SSI2_BASE_ADDR+0x2C)      // 32bit ssi2 fifo control/status reg
#define SSI2_STR                   (SSI2_BASE_ADDR+0x30)      // 32bit ssi2 test reg
#define SSI2_SOR                   (SSI2_BASE_ADDR+0x34)      // 32bit ssi2 option reg
#define SSI2_SACNT                 (SSI2_BASE_ADDR+0x38)      // 32bit ssi2 ac97 control reg
#define SSI2_SACADD                (SSI2_BASE_ADDR+0x3C)      // 32bit ssi2 ac97 cmd addr reg
#define SSI2_SACDAT                (SSI2_BASE_ADDR+0x40)      // 32bit ssi2 ac97 cmd data reg
#define SSI2_SATAG                 (SSI2_BASE_ADDR+0x44)      // 32bit ssi2 ac97 tag reg
#define SSI2_STMSK                 (SSI2_BASE_ADDR+0x48)      // 32bit ssi2 tx time slot mask reg
#define SSI2_SRMSK                 (SSI2_BASE_ADDR+0x4C)      // 32bit ssi2 rx time slot mask reg
#define SSI2_SACCST                (SSI2_BASE_ADDR+0x50)      // 10-bit field status of each AC97 slots
#define SSI2_SACCEN                (SSI2_BASE_ADDR+0x54)      // 10-bit field enable each AC97 slot
#define SSI2_SACCDIS               (SSI2_BASE_ADDR+0x58)      // 10-bit field disable each AC97 slot

// #########################################
// # ESAI                                  #
// #########################################
#define ESAI_BASE_ADDR             0x50018000
#define ESAI_ETDR                  (ESAI_BASE_ADDR+0x00)     
#define ESAI_ERDR                  (ESAI_BASE_ADDR+0x04)     
#define ESAI_ECR                   (ESAI_BASE_ADDR+0x08)     
#define ESAI_ESR                   (ESAI_BASE_ADDR+0x0c)     
#define ESAI_TFCR                  (ESAI_BASE_ADDR+0x10)     
#define ESAI_TFSR                  (ESAI_BASE_ADDR+0x14)     
#define ESAI_RFCR                  (ESAI_BASE_ADDR+0x18)     
#define ESAI_RFSR                  (ESAI_BASE_ADDR+0x1c)     
#define ESAI_TX0                   (ESAI_BASE_ADDR+0x80)     
#define ESAI_TX1                   (ESAI_BASE_ADDR+0x84)     
#define ESAI_TX2                   (ESAI_BASE_ADDR+0x88)     
#define ESAI_TX3                   (ESAI_BASE_ADDR+0x8c)     
#define ESAI_TX4                   (ESAI_BASE_ADDR+0x90)     
#define ESAI_TX5                   (ESAI_BASE_ADDR+0x94)     
#define ESAI_TSR                   (ESAI_BASE_ADDR+0x98)     
#define ESAI_RX0                   (ESAI_BASE_ADDR+0xA0)     
#define ESAI_RX1                   (ESAI_BASE_ADDR+0xA4)     
#define ESAI_RX2                   (ESAI_BASE_ADDR+0xA8)     
#define ESAI_RX3                   (ESAI_BASE_ADDR+0xAC)     
#define ESAI_SAISR                 (ESAI_BASE_ADDR+0xCC)     
#define ESAI_SAICR                 (ESAI_BASE_ADDR+0xD0)     
#define ESAI_TCR                   (ESAI_BASE_ADDR+0xD4)     
#define ESAI_TCCR                  (ESAI_BASE_ADDR+0xD8)     
#define ESAI_RCR                   (ESAI_BASE_ADDR+0xDC)     
#define ESAI_RCCR                  (ESAI_BASE_ADDR+0xE0)     
#define ESAI_TSMA                  (ESAI_BASE_ADDR+0xE4)     
#define ESAI_TSMB                  (ESAI_BASE_ADDR+0xE8)     
#define ESAI_RSMA                  (ESAI_BASE_ADDR+0xEC)     
#define ESAI_RSMB                  (ESAI_BASE_ADDR+0xF0)     
#define ESAI_PDRC                  (ESAI_BASE_ADDR+0xF4)     
#define ESAI_PRRC                  (ESAI_BASE_ADDR+0xF8)     
#define ESAI_PCRC                  (ESAI_BASE_ADDR+0xFC)     

// #########################################
// # ATA                                   #
// #########################################
#define ATA_BASE_ADDR              0x50020000
#define ATA_TIME_CONFIG0           (ATA_BASE_ADDR+0x00)      
#define ATA_TIME_CONFIG1           (ATA_BASE_ADDR+0x04)      
#define ATA_TIME_CONFIG2           (ATA_BASE_ADDR+0x08)      
#define ATA_TIME_CONFIG3           (ATA_BASE_ADDR+0x0C)      
#define ATA_TIME_CONFIG4           (ATA_BASE_ADDR+0x10)      
#define ATA_TIME_CONFIG5           (ATA_BASE_ADDR+0x14)      
#define ATA_FIFO_DATA_32           (ATA_BASE_ADDR+0x18)      
#define ATA_FIFO_DATA_16           (ATA_BASE_ADDR+0x1C)      
#define ATA_FIFO_FILL              (ATA_BASE_ADDR+0x20)      
#define ATA_CONTROL                (ATA_BASE_ADDR+0x24)      
#define ATA_INT_PENDING            (ATA_BASE_ADDR+0x28)      
#define ATA_INT_ENABLE             (ATA_BASE_ADDR+0x2C)      
#define ATA_INT_CLEAR              (ATA_BASE_ADDR+0x30)      
#define FIFO_ALARM                 (ATA_BASE_ADDR+0x34)      
#define ATA_DCTR                   (ATA_BASE_ADDR+0xD8)       // drive control register (w), alt. stat reg (r)
#define ATA_DDTR                   (ATA_BASE_ADDR+0xA0)       // drive data register (rw)
#define ATA_DFTR                   (ATA_BASE_ADDR+0xA4)       // drive features regi (w), error reg (r)
#define ATA_DSCR                   (ATA_BASE_ADDR+0xA8)       // drive sector count reg
#define ATA_DSNR                   (ATA_BASE_ADDR+0xAC)       // drive sector number reg
#define ATA_DCLR                   (ATA_BASE_ADDR+0xB0)       // drive cylinder low reg
#define ATA_DCHR                   (ATA_BASE_ADDR+0xB4)       // drive cylinder high reg
#define ATA_DDHR                   (ATA_BASE_ADDR+0xB8)       // drive device head reg
#define ATA_DCDR                   (ATA_BASE_ADDR+0xBC)       // drive command reg (w), status reg (r)

// #########################################
// # SIM1                                   #
// #########################################
#define SIM1_BASE_ADDR             0x50024000
#define SIM1_PORT1_CNTL      (SIM1_BASE_ADDR+0x00)
#define SIM1_SETUP           (SIM1_BASE_ADDR+0x04)
#define SIM1_PORT1_DETECT    (SIM1_BASE_ADDR+0x08)
#define SIM1_XMT_BUF         (SIM1_BASE_ADDR+0x0C)
#define SIM1_RCV_BUF         (SIM1_BASE_ADDR+0x10)
#define SIM1_PORT0_CNTL      (SIM1_BASE_ADDR+0x14)
#define SIM1_CNTL            (SIM1_BASE_ADDR+0x18)
#define SIM1_CLOCK_SELECT    (SIM1_BASE_ADDR+0x1C)
#define SIM1_RCV_THRESHOLD   (SIM1_BASE_ADDR+0x20)
#define SIM1_ENABLE          (SIM1_BASE_ADDR+0x24)
#define SIM1_XMT_STATUS      (SIM1_BASE_ADDR+0x28)
#define SIM1_RCV_STATUS      (SIM1_BASE_ADDR+0x2C)
#define SIM1_INT_MASK        (SIM1_BASE_ADDR+0x30)
#define SIM1_PORT0_DETECT    (SIM1_BASE_ADDR+0x3C)
#define SIM1_DATA_FORMAT     (SIM1_BASE_ADDR+0x40)
#define SIM1_XMT_THRESHOLD   (SIM1_BASE_ADDR+0x44)
#define SIM1_GUARD_CNTL      (SIM1_BASE_ADDR+0x48)
#define SIM1_OD_CONFIG       (SIM1_BASE_ADDR+0x4C)
#define SIM1_RESET_CNTL      (SIM1_BASE_ADDR+0x50)
#define SIM1_CHAR_WAIT       (SIM1_BASE_ADDR+0x54)
#define SIM1_GPCNT           (SIM1_BASE_ADDR+0x58)
#define SIM1_DIVISOR         (SIM1_BASE_ADDR+0x5C)
#define SIM1_BWT             (SIM1_BASE_ADDR+0x60)
#define SIM1_BGT             (SIM1_BASE_ADDR+0x64)
#define SIM1_BWT_H           (SIM1_BASE_ADDR+0x68)
#define SIM1_XMT_FIFO_STATUS (SIM1_BASE_ADDR+0x6C)
#define SIM1_RCV_FIFO_CNT    (SIM1_BASE_ADDR+0x70)
#define SIM1_RCV_FIFO_WPTR   (SIM1_BASE_ADDR+0x74)  
#define SIM1_RCV_FIFO_RPTR   (SIM1_BASE_ADDR+0x78) 


// #########################################
// # SIM2                                   #
// #########################################
#define SIM2_BASE_ADDR             0x50028000
#define SIM2_PORT1_CNTL      (SIM2_BASE_ADDR+0x00)
#define SIM2_SETUP           (SIM2_BASE_ADDR+0x04)
#define SIM2_PORT1_DETECT    (SIM2_BASE_ADDR+0x08)
#define SIM2_XMT_BUF         (SIM2_BASE_ADDR+0x0C)
#define SIM2_RCV_BUF         (SIM2_BASE_ADDR+0x10)
#define SIM2_PORT0_CNTL      (SIM2_BASE_ADDR+0x14)
#define SIM2_CNTL            (SIM2_BASE_ADDR+0x18)
#define SIM2_CLOCK_SELECT    (SIM2_BASE_ADDR+0x1C)
#define SIM2_RCV_THRESHOLD   (SIM2_BASE_ADDR+0x20)
#define SIM2_ENABLE          (SIM2_BASE_ADDR+0x24)
#define SIM2_XMT_STATUS      (SIM2_BASE_ADDR+0x28)
#define SIM2_RCV_STATUS      (SIM2_BASE_ADDR+0x2C)
#define SIM2_INT_MASK        (SIM2_BASE_ADDR+0x30)
#define SIM2_PORT0_DETECT    (SIM2_BASE_ADDR+0x3C)
#define SIM2_DATA_FORMAT     (SIM2_BASE_ADDR+0x40)
#define SIM2_XMT_THRESHOLD   (SIM2_BASE_ADDR+0x44)
#define SIM2_GUARD_CNTL      (SIM2_BASE_ADDR+0x48)
#define SIM2_OD_CONFIG       (SIM2_BASE_ADDR+0x4C)
#define SIM2_RESET_CNTL      (SIM2_BASE_ADDR+0x50)
#define SIM2_CHAR_WAIT       (SIM2_BASE_ADDR+0x54)
#define SIM2_GPCNT           (SIM2_BASE_ADDR+0x58)
#define SIM2_DIVISOR         (SIM2_BASE_ADDR+0x5C)
#define SIM2_BWT             (SIM2_BASE_ADDR+0x60)
#define SIM2_BGT             (SIM2_BASE_ADDR+0x64)
#define SIM2_BWT_H           (SIM2_BASE_ADDR+0x68)
#define SIM2_XMT_FIFO_STATUS (SIM2_BASE_ADDR+0x6C)
#define SIM2_RCV_FIFO_CNT    (SIM2_BASE_ADDR+0x70)
#define SIM2_RCV_FIFO_WPTR   (SIM2_BASE_ADDR+0x74)  
#define SIM2_RCV_FIFO_RPTR   (SIM2_BASE_ADDR+0x78) 


// #########################################
// # UART5                                 #
// #########################################
#define UART5_BASE_ADDR            0x5002C000
#define UART5_URXD_5               (UART5_BASE_ADDR+0x00)     // 32bit uart5 receiver reg
#define UART5_UTXD_5               (UART5_BASE_ADDR+0x40)     // 32bit uart5 transmitter reg
#define UART5_UCR1_5               (UART5_BASE_ADDR+0x80)     // 32bit uart5 control 1 reg
#define UART5_UCR2_5               (UART5_BASE_ADDR+0x84)     // 32bit uart5 control 2 reg
#define UART5_UCR3_5               (UART5_BASE_ADDR+0x88)     // 32bit uart5 control 3 reg
#define UART5_UCR4_5               (UART5_BASE_ADDR+0x8C)     // 32bit uart5 control 4 reg
#define UART5_UFCR_5               (UART5_BASE_ADDR+0x90)     // 32bit uart5 fifo control reg
#define UART5_USR1_5               (UART5_BASE_ADDR+0x94)     // 32bit uart5 status 1 reg
#define UART5_USR2_5               (UART5_BASE_ADDR+0x98)     // 32bit uart5 status 2 reg
#define UART5_UESC_5               (UART5_BASE_ADDR+0x9C)     // 32bit uart5 escape char reg
#define UART5_UTIM_5               (UART5_BASE_ADDR+0xA0)     // 32bit uart5 escape timer reg
#define UART5_UBIR_5               (UART5_BASE_ADDR+0xA4)     // 32bit uart5 BRM incremental reg
#define UART5_UBMR_5               (UART5_BASE_ADDR+0xA8)     // 32bit uart5 BRM modulator reg
#define UART5_UBRC_5               (UART5_BASE_ADDR+0xAC)     // 32bit uart5 baud rate count reg
#define UART5_ONEMS_5              (UART5_BASE_ADDR+0xB0)     // 32bit uart5 one ms reg
#define UART5_UTS_5                (UART5_BASE_ADDR+0xB4)     // 32bit uart5 test reg

// #########################################
// # TSC                               #
// #########################################
#define TSC_BASE_ADDR              0x50030000

// #########################################
// # SSI1                                  #
// #########################################
#define SSI1_BASE_ADDR             0x50034000
#define SSI1_STX0                  (SSI1_BASE_ADDR+0x00)      // 32bit ssi1 tx reg 0
#define SSI1_STX1                  (SSI1_BASE_ADDR+0x04)      // 32bit ssi1 tx reg 1
#define SSI1_SRX0                  (SSI1_BASE_ADDR+0x08)      // 32bit ssi1 rx reg 0
#define SSI1_SRX1                  (SSI1_BASE_ADDR+0x0C)      // 32bit ssi1 rx reg 1
#define SSI1_SCR                   (SSI1_BASE_ADDR+0x10)      // 32bit ssi1 control reg
#define SSI1_SISR                  (SSI1_BASE_ADDR+0x14)      // 32bit ssi1 intr status reg
#define SSI1_SIER                  (SSI1_BASE_ADDR+0x18)      // 32bit ssi1 intr enable reg
#define SSI1_STCR                  (SSI1_BASE_ADDR+0x1C)      // 32bit ssi1 tx config reg
#define SSI1_SRCR                  (SSI1_BASE_ADDR+0x20)      // 32bit ssi1 rx config reg
#define SSI1_STCCR                 (SSI1_BASE_ADDR+0x24)      // 32bit ssi1 tx clock control reg
#define SSI1_SRCCR                 (SSI1_BASE_ADDR+0x28)      // 32bit ssi1 rx clock control reg
#define SSI1_SFCSR                 (SSI1_BASE_ADDR+0x2C)      // 32bit ssi1 fifo control/status reg
#define SSI1_STR                   (SSI1_BASE_ADDR+0x30)      // 32bit ssi1 test reg
#define SSI1_SOR                   (SSI1_BASE_ADDR+0x34)      // 32bit ssi1 option reg
#define SSI1_SACNT                 (SSI1_BASE_ADDR+0x38)      // 32bit ssi1 ac97 control reg
#define SSI1_SACADD                (SSI1_BASE_ADDR+0x3C)      // 32bit ssi1 ac97 cmd addr reg
#define SSI1_SACDAT                (SSI1_BASE_ADDR+0x40)      // 32bit ssi1 ac97 cmd data reg
#define SSI1_SATAG                 (SSI1_BASE_ADDR+0x44)      // 32bit ssi1 ac97 tag reg
#define SSI1_STMSK                 (SSI1_BASE_ADDR+0x48)      // 32bit ssi1 tx time slot mask reg
#define SSI1_SRMSK                 (SSI1_BASE_ADDR+0x4C)      // 32bit ssi1 rx time slot mask reg
#define SSI1_SACCST                (SSI1_BASE_ADDR+0x50)      // 10-bit field status of each AC97 slots
#define SSI1_SACCEN                (SSI1_BASE_ADDR+0x54)      // 10-bit field enable each AC97 slot
#define SSI1_SACCDIS               (SSI1_BASE_ADDR+0x58)      // 10-bit field disable each AC97 slot

// #########################################
// # FEC                                   #
// #########################################
#define FEC_BASE_ADDR              0x50038000
#define FEC_EIR                    (FEC_BASE_ADDR+0x004)     
#define FEC_EIMR                   (FEC_BASE_ADDR+0x008)     
#define FEC_RDAR                   (FEC_BASE_ADDR+0x010)     
#define FEC_TDAR                   (FEC_BASE_ADDR+0x014)     
#define FEC_ECR                    (FEC_BASE_ADDR+0x024)     
#define FEC_MMFR                   (FEC_BASE_ADDR+0x040)     
#define FEC_MSCR                   (FEC_BASE_ADDR+0x044)     
#define FEC_MIBC                   (FEC_BASE_ADDR+0x064)     
#define FEC_RCR                    (FEC_BASE_ADDR+0x084)     
#define FEC_TCR                    (FEC_BASE_ADDR+0x0C4)     
#define FEC_PALR                   (FEC_BASE_ADDR+0x0E4)     
#define FEC_PAUR                   (FEC_BASE_ADDR+0x0E8)     
#define FEC_OPDR                   (FEC_BASE_ADDR+0x0EC)     
#define FEC_IAUR                   (FEC_BASE_ADDR+0x118)     
#define FEC_IALR                   (FEC_BASE_ADDR+0x11C)     
#define FEC_GAUR                   (FEC_BASE_ADDR+0x120)     
#define FEC_GALR                   (FEC_BASE_ADDR+0x124)     
#define FEC_TFWR                   (FEC_BASE_ADDR+0x144)     
#define FEC_FRBR                   (FEC_BASE_ADDR+0x14C)     
#define FEC_FRSR                   (FEC_BASE_ADDR+0x150)     
#define FEC_RDSR                   (FEC_BASE_ADDR+0x180)     
#define FEC_TDSR                   (FEC_BASE_ADDR+0x184)     
#define FEC_MRBR                   (FEC_BASE_ADDR+0x188)     

#define RMON_T_DROP                (FEC_BASE_ADDR+0x200)     
#define RMON_T_PACKETS             (FEC_BASE_ADDR+0x204)     
#define RMON_T_BC_PKT              (FEC_BASE_ADDR+0x208)     
#define RMON_T_MC_PKT              (FEC_BASE_ADDR+0x20C)     
#define RMON_T_CRC_ALIGN           (FEC_BASE_ADDR+0x210)     
#define RMON_T_UNDERSIZE           (FEC_BASE_ADDR+0x214)     
#define RMON_T_OVERSIZE            (FEC_BASE_ADDR+0x218)     
#define RMON_T_FRAG                (FEC_BASE_ADDR+0x21C)     
#define RMON_T_JAB                 (FEC_BASE_ADDR+0x220)     
#define RMON_T_COL                 (FEC_BASE_ADDR+0x224)     
#define RMON_T_P64                 (FEC_BASE_ADDR+0x228)     
#define RMON_T_P65TO127            (FEC_BASE_ADDR+0x22C)     
#define RMON_T_P128TO255           (FEC_BASE_ADDR+0x230)     
#define RMON_T_P256TO511           (FEC_BASE_ADDR+0x234)     
#define RMON_T_P512TO1023          (FEC_BASE_ADDR+0x238)     
#define RMON_T_P1024TO2047         (FEC_BASE_ADDR+0x23C)     
#define RMON_T_P_GTE20448          (FEC_BASE_ADDR+0x240)     
#define RMON_T_OCTETS              (FEC_BASE_ADDR+0x244)     
#define IEEE_T_DROP                (FEC_BASE_ADDR+0x248)     
#define IEEE_T_FRAME_OK            (FEC_BASE_ADDR+0x24C)     
#define IEEE_T_1COL                (FEC_BASE_ADDR+0x250)     
#define IEEE_T_MCOL                (FEC_BASE_ADDR+0x254)     
#define IEEE_T_DEF                 (FEC_BASE_ADDR+0x258)     
#define IEEE_T_LCOL                (FEC_BASE_ADDR+0x25C)     
#define IEEE_T_EXCOL               (FEC_BASE_ADDR+0x260)     
#define IEEE_T_MACERR              (FEC_BASE_ADDR+0x264)     
#define IEEE_T_CSERR               (FEC_BASE_ADDR+0x268)     
#define IEEE_T_SQE                 (FEC_BASE_ADDR+0x26C)     
#define IEEE_T_FDXFC               (FEC_BASE_ADDR+0x270)     
#define IEEE_T_OCTETS_OK           (FEC_BASE_ADDR+0x274)     
#define RMON_R_PACKETS             (FEC_BASE_ADDR+0x284)     
#define RMON_R_BC_PKT              (FEC_BASE_ADDR+0x288)     
#define RMON_R_MC_PKT              (FEC_BASE_ADDR+0x28C)     
#define RMON_R_CRC_ALIGN           (FEC_BASE_ADDR+0x290)     
#define RMON_R_UNDERSIZE           (FEC_BASE_ADDR+0x294)     
#define RMON_R_OVERSIZE            (FEC_BASE_ADDR+0x298)     
#define RMON_R_FRAG                (FEC_BASE_ADDR+0x29C)     
#define RMON_R_JAB                 (FEC_BASE_ADDR+0x2A0)     
#define RMON_R_RESVD_0             (FEC_BASE_ADDR+0x2A4)     
#define RMON_R_P64                 (FEC_BASE_ADDR+0x2A8)     
#define RMON_R_P65TO127            (FEC_BASE_ADDR+0x2AC)     
#define RMON_R_P128TO255           (FEC_BASE_ADDR+0x2B0)     
#define RMON_R_P256TO511           (FEC_BASE_ADDR+0x2B4)     
#define RMON_R_P512TO1023          (FEC_BASE_ADDR+0x2B8)     
#define RMON_R_P1024TO2047         (FEC_BASE_ADDR+0x2BC)     
#define RMON_R_P_GTE2048           (FEC_BASE_ADDR+0x2C0)     
#define RMON_R_OCTETS              (FEC_BASE_ADDR+0x2C4)     
#define IEEE_R_DROP                (FEC_BASE_ADDR+0x2C8)     
#define IEEE_R_FRAME_OK            (FEC_BASE_ADDR+0x2CC)     
#define IEEE_R_CRC                 (FEC_BASE_ADDR+0x2D0)     
#define IEEE_R_ALIGN               (FEC_BASE_ADDR+0x2D4)     
#define IEEE_R_MACERR              (FEC_BASE_ADDR+0x2D8)     
#define IEEE_R_FDXFC               (FEC_BASE_ADDR+0x2DC)     
#define IEEE_R_OCTETS_OK           (FEC_BASE_ADDR+0x2E0)     

// #########################################
// # AIPS2                                 #
// #########################################
#define AIPS2_BASE_ADDR            0x53F00000
#define AIPS2_MPROT0_7             (AIPS2_BASE_ADDR+0x00)     // Master Privilege Reg 0-7
#define AIPS2_MPROT8_15            (AIPS2_BASE_ADDR+0x04)     // Master Privilege Reg 8-15
#define AIPS2_PACR0_7              (AIPS2_BASE_ADDR+0x20)     // Peripheral Access Control Reg 0-7
#define AIPS2_PACR8_15             (AIPS2_BASE_ADDR+0x24)     // Peripheral Access Control Reg 8-15
#define AIPS2_PACR16_23            (AIPS2_BASE_ADDR+0x28)     // Peripheral Access Control Reg 16-23
#define AIPS2_PACR24_31            (AIPS2_BASE_ADDR+0x2C)     // Peripheral Access Control Reg 24-32
#define AIPS2_OPACR0_7             (AIPS2_BASE_ADDR+0x40)     // Off-Platform Peri Access Ctl Reg 0-7
#define AIPS2_OPACR8_15            (AIPS2_BASE_ADDR+0x44)     // Off-Platform Peri Access Ctl Reg 8-15
#define AIPS2_OPACR16_23           (AIPS2_BASE_ADDR+0x48)     // Off-Platform Peri Access Ctl Reg 16-23
#define AIPS2_OPACR24_31           (AIPS2_BASE_ADDR+0x4C)     // Off-Platform Peri Access Ctl Reg 24-31
#define AIPS2_OPACR32_33           (AIPS2_BASE_ADDR+0x50)     // Off-Platform Peri Access Ctl Reg 32-33

// #########################################
// # CRM                                   #
// # $53F8_0000 to $53F8_3FFF              #
// #########################################
#define CCM_BASE_ADDR              0x53F80000
#define CCM_MPCTL                  (CCM_BASE_ADDR+0x00)       // MCU PLL Control Register
#define CCM_UPCTL                  (CCM_BASE_ADDR+0x04)       // USB PLL Control Register
#define CCM_CCTL                   (CCM_BASE_ADDR+0x08)       // Clock Control Register
#define CCM_CGR0                   (CCM_BASE_ADDR+0x0C)       // Clock Gating Register 0
#define CCM_CGR1                   (CCM_BASE_ADDR+0x10)       // Clock Gating Register 1
#define CCM_CGR2                   (CCM_BASE_ADDR+0x14)       // Clock Gating Register 2
#define CCM_PDR0                   (CCM_BASE_ADDR+0x18)       // perclk Divider Register 0
#define CCM_PDR1                   (CCM_BASE_ADDR+0x1C)       // perclk Divider Register 1
#define CCM_PDR2                   (CCM_BASE_ADDR+0x20)       // perclk Divider Register 2
#define CCM_PDR3                   (CCM_BASE_ADDR+0x24)       // perclk Divider Register 3
#define CCM_CRSR                   (CCM_BASE_ADDR+0x28)       // CRM Status Register
#define CCM_CRDR                   (CCM_BASE_ADDR+0x2C)       // CRM Debug Register
#define CCM_DCVR0                  (CCM_BASE_ADDR+0x30)       // DPTC Comparator Value Register 0
#define CCM_DCVR1                  (CCM_BASE_ADDR+0x34)       // DPTC Comparator Value Register 1
#define CCM_DCVR2                  (CCM_BASE_ADDR+0x38)       // DPTC Comparator Value Register 2
#define CCM_DCVR3                  (CCM_BASE_ADDR+0x3C)       // DPTC Comparator Value Register 3
#define CCM_LTR0                   (CCM_BASE_ADDR+0x40)       // Load Tracking Register 0
#define CCM_LTR1                   (CCM_BASE_ADDR+0x44)       // Load Tracking Register 1
#define CCM_LTR2                   (CCM_BASE_ADDR+0x48)       // Load Tracking Register 2
#define CCM_LTR3                   (CCM_BASE_ADDR+0x4C)       // Load Tracking Register 3
#define CCM_LTBR0                  (CCM_BASE_ADDR+0x50)       // Load Tracking Buffer Register 0
#define CCM_LTBR1                  (CCM_BASE_ADDR+0x54)       // Load Tracking Buffer Register 1
#define CCM_PMCR0                  (CCM_BASE_ADDR+0x58)       // Power Management Control Register 0
#define CCM_PMCR1                  (CCM_BASE_ADDR+0x5C)       // Power Management Control Register 1
#define CCM_PMCR2                  (CCM_BASE_ADDR+0x60)       // Power Management Control Register 2
#define CCM_MISC                   (CCM_BASE_ADDR+0x64)       // CRM Misc Register

// #########################################
// # GPT4                                   #
// #########################################
#define GPT4_BASE_ADDR             0x53F84000
#define GPT4_GPT4CR                (GPT4_BASE_ADDR+0x00)     
#define GPT4_GPT4PR                (GPT4_BASE_ADDR+0x04)     
#define GPT4_GPT4SR                (GPT4_BASE_ADDR+0x08)     
#define GPT4_GPT4IR                (GPT4_BASE_ADDR+0x0C)     
#define GPT4_GPT4OCR1              (GPT4_BASE_ADDR+0x10)     
#define GPT4_GPT4OCR2              (GPT4_BASE_ADDR+0x14)     
#define GPT4_GPT4OCR3              (GPT4_BASE_ADDR+0x18)     
#define GPT4_GPT4ICR1              (GPT4_BASE_ADDR+0x1C)     
#define GPT4_GPT4ICR2              (GPT4_BASE_ADDR+0x20)     
#define GPT4_GPT4CNT               (GPT4_BASE_ADDR+0x24)     

// #########################################
// # GPT3                                   #
// #########################################
#define GPT3_BASE_ADDR             0x53F88000
#define GPT3_GPT3CR                (GPT3_BASE_ADDR+0x00)     
#define GPT3_GPT3PR                (GPT3_BASE_ADDR+0x04)     
#define GPT3_GPT3SR                (GPT3_BASE_ADDR+0x08)     
#define GPT3_GPT3IR                (GPT3_BASE_ADDR+0x0C)     
#define GPT3_GPT3OCR1              (GPT3_BASE_ADDR+0x10)     
#define GPT3_GPT3OCR2              (GPT3_BASE_ADDR+0x14)     
#define GPT3_GPT3OCR3              (GPT3_BASE_ADDR+0x18)     
#define GPT3_GPT3ICR1              (GPT3_BASE_ADDR+0x1C)     
#define GPT3_GPT3ICR2              (GPT3_BASE_ADDR+0x20)     
#define GPT3_GPT3CNT               (GPT3_BASE_ADDR+0x24)     

// #########################################
// # GPT2                                   #
// #########################################
#define GPT2_BASE_ADDR             0x53F8C000
#define GPT2_GPT2CR                (GPT2_BASE_ADDR+0x00)     
#define GPT2_GPT2PR                (GPT2_BASE_ADDR+0x04)     
#define GPT2_GPT2SR                (GPT2_BASE_ADDR+0x08)     
#define GPT2_GPT2IR                (GPT2_BASE_ADDR+0x0C)     
#define GPT2_GPT2OCR1              (GPT2_BASE_ADDR+0x10)     
#define GPT2_GPT2OCR2              (GPT2_BASE_ADDR+0x14)     
#define GPT2_GPT2OCR3              (GPT2_BASE_ADDR+0x18)     
#define GPT2_GPT2ICR1              (GPT2_BASE_ADDR+0x1C)     
#define GPT2_GPT2ICR2              (GPT2_BASE_ADDR+0x20)     
#define GPT2_GPT2CNT               (GPT2_BASE_ADDR+0x24)     

// #########################################
// # GPT1                                   #
// #########################################
#define GPT1_BASE_ADDR             0x53F90000
#define GPT1_GPT1CR                (GPT1_BASE_ADDR+0x00)     
#define GPT1_GPT1PR                (GPT1_BASE_ADDR+0x04)     
#define GPT1_GPT1SR                (GPT1_BASE_ADDR+0x08)     
#define GPT1_GPT1IR                (GPT1_BASE_ADDR+0x0C)     
#define GPT1_GPT1OCR1              (GPT1_BASE_ADDR+0x10)     
#define GPT1_GPT1OCR2              (GPT1_BASE_ADDR+0x14)     
#define GPT1_GPT1OCR3              (GPT1_BASE_ADDR+0x18)     
#define GPT1_GPT1ICR1              (GPT1_BASE_ADDR+0x1C)     
#define GPT1_GPT1ICR2              (GPT1_BASE_ADDR+0x20)     
#define GPT1_GPT1CNT               (GPT1_BASE_ADDR+0x24)     

// #########################################
// # EPIT1                                 #
// #########################################
#define EPIT1_BASE_ADDR            0x53F94000
#define EPIT1_EPITCR               (EPIT1_BASE_ADDR+0x00)    
#define EPIT1_EPITSR               (EPIT1_BASE_ADDR+0x04)    
#define EPIT1_EPITLR               (EPIT1_BASE_ADDR+0x08)    
#define EPIT1_EPITCMPR             (EPIT1_BASE_ADDR+0x0C)    
#define EPIT1_EPITCNR              (EPIT1_BASE_ADDR+0x10)    

// #########################################
// # EPIT2                                 #
// #########################################
#define EPIT2_BASE_ADDR            0x53F98000
#define EPIT2_EPITCR               (EPIT2_BASE_ADDR+0x00)    
#define EPIT2_EPITSR               (EPIT2_BASE_ADDR+0x04)    
#define EPIT2_EPITLR               (EPIT2_BASE_ADDR+0x08)    
#define EPIT2_EPITCMPR             (EPIT2_BASE_ADDR+0x0C)    
#define EPIT2_EPITCNR              (EPIT2_BASE_ADDR+0x10)    

// #########################################
// # GPIO4                                 #
// #########################################
#define GPIO4_BASE_ADDR            0x53F9C000
#define GPIO4_DR0                  (GPIO4_BASE_ADDR+0x00)    
#define GPIO4_GDIR0                (GPIO4_BASE_ADDR+0x04)    
#define GPIO4_PSR0                 (GPIO4_BASE_ADDR+0x08)    
#define GPIO4_ICR1                 (GPIO4_BASE_ADDR+0x0C)    
#define GPIO4_ICR2                 (GPIO4_BASE_ADDR+0x10)    
#define GPIO4_IMR                  (GPIO4_BASE_ADDR+0x14)    
#define GPIO4_ISR                  (GPIO4_BASE_ADDR+0x18)    

// #########################################
// # PWM2                                   #
// #########################################
#define PWM2_BASE_ADDR             0x53FA0000
#define PWM2_PWMCR                 (PWM2_BASE_ADDR+0x00)      // 32bit pwm control reg
#define PWM2_PWMSR                 (PWM2_BASE_ADDR+0x04)      // 32bit pwm sample reg
#define PWM2_PWMIR                 (PWM2_BASE_ADDR+0x08)      // 32bit pwm interrupt reg
#define PWM2_PWMSAR                (PWM2_BASE_ADDR+0x0C)      // 32bit pwm sample reg
#define PWM2_PWMPR                 (PWM2_BASE_ADDR+0x10)      // 32bit pwm period reg
#define PWM2_PWMCNR                (PWM2_BASE_ADDR+0x14)      // 32bit pwm counter reg

// #########################################
// # GPIO3                                 #
// #########################################
#define GPIO3_BASE_ADDR            0x53FA4000
#define GPIO3_DR0                  (GPIO3_BASE_ADDR+0x00)    
#define GPIO3_GDIR0                (GPIO3_BASE_ADDR+0x04)    
#define GPIO3_PSR0                 (GPIO3_BASE_ADDR+0x08)    
#define GPIO3_ICR1                 (GPIO3_BASE_ADDR+0x0C)    
#define GPIO3_ICR2                 (GPIO3_BASE_ADDR+0x10)    
#define GPIO3_IMR                  (GPIO3_BASE_ADDR+0x14)    
#define GPIO3_ISR                  (GPIO3_BASE_ADDR+0x18)    

// #########################################
// # PWM3                                   #
// #########################################
#define PWM3_BASE_ADDR             0x53FA8000
#define PWM3_PWMCR                 (PWM3_BASE_ADDR+0x00)      // 32bit pwm control reg
#define PWM3_PWMSR                 (PWM3_BASE_ADDR+0x04)      // 32bit pwm sample reg
#define PWM3_PWMIR                 (PWM3_BASE_ADDR+0x08)      // 32bit pwm interrupt reg
#define PWM3_PWMSAR                (PWM3_BASE_ADDR+0x0C)      // 32bit pwm sample reg
#define PWM3_PWMPR                 (PWM3_BASE_ADDR+0x10)      // 32bit pwm period reg
#define PWM3_PWMCNR                (PWM3_BASE_ADDR+0x14)      // 32bit pwm counter reg

// #########################################
// # SCC                                   #
// #########################################
#define SCC_BASE_ADDR              0x53FAC000
#define SCM_BASE_ADDR              0x53FAE000
#define SMN_BASE_ADDR              0x53FAF000
#define SCM_RED_START              (SCM_BASE_ADDR+0x00)      
#define SCM_BLACK_START            (SCM_BASE_ADDR+0x04)      
#define SCM_LENGTH                 (SCM_BASE_ADDR+0x08)      
#define SCM_CONTROL                (SCM_BASE_ADDR+0x0C)      
#define SCM_STATUS                 (SCM_BASE_ADDR+0x10)      
#define SCM_ERROR                  (SCM_BASE_ADDR+0x14)      
#define SCM_INT_CONTROL            (SCM_BASE_ADDR+0x18)      
#define SCM_CONFIGURATION          (SCM_BASE_ADDR+0x1C)      
#define SCM_INIT_VECTOR0           (SCM_BASE_ADDR+0x20)      
#define SCM_INIT_VECTOR1           (SCM_BASE_ADDR+0x24)      

#define SMN_STATUS                 (SMN_BASE_ADDR+0x00)      
#define SMN_COMMAND                (SMN_BASE_ADDR+0x04)      
#define SMN_SEQSTART               (SMN_BASE_ADDR+0x08)      
#define SMN_SEQEND                 (SMN_BASE_ADDR+0x0C)      
#define SMN_SEQCHK                 (SMN_BASE_ADDR+0x10)      
#define SMN_BITCNT                 (SMN_BASE_ADDR+0x14)      
#define SMN_INCSIZE                (SMN_BASE_ADDR+0x18)      
#define SMN_BBDEC                  (SMN_BASE_ADDR+0x1C)      
#define SMN_COMPSIZE               (SMN_BASE_ADDR+0x20)      
#define SMN_PTCHK                  (SMN_BASE_ADDR+0x24)      
#define SMN_CTCHK                  (SMN_BASE_ADDR+0x28)      
#define SMN_TIMERIV                (SMN_BASE_ADDR+0x2C)      
#define SMN_TIMERCTL               (SMN_BASE_ADDR+0x30)      
#define SMN_DDSTATUS               (SMN_BASE_ADDR+0x34)      
#define SMN_TIMER                  (SMN_BASE_ADDR+0x38)      

// #########################################
// # RNGB                                  #
// #########################################
#define RNGB_BASE_ADDR             0x53FB0000
#define RNGB_VER_ID                (RNGB_BASE_ADDR+0x000)    
#define RNGB_COMMAND               (RNGB_BASE_ADDR+0x004)    
#define RNGB_CONTROL               (RNGB_BASE_ADDR+0x008)    
#define RNGB_STAT                  (RNGB_BASE_ADDR+0x00C)    
#define RNGB_ERR_STAT              (RNGB_BASE_ADDR+0x010)    
#define RNGB_FIFO                  (RNGB_BASE_ADDR+0x014)    
#define RNGB_VERIF_CTL             (RNGB_BASE_ADDR+0x020)    
#define RNGB_OSC_CNTR_CTL          (RNGB_BASE_ADDR+0x028)    
#define RNGB_OSC_CNTR              (RNGB_BASE_ADDR+0x02C)    
#define RNGB_OSC_CNTR_STAT         (RNGB_BASE_ADDR+0x030)    

// #########################################
// # ESDHC1                               #
// #########################################
#define ESDHC1_BASE_ADDR           0x53FB4000

// #########################################
// # ESDHC2                               #
// #########################################
#define ESDHC2_BASE_ADDR           0x53FB8000

// #########################################
// # LCDC                                   #
// #########################################
#define LCDC_BASE_ADDR             0x53FBC000
#define LCDC_LSSAR               (LCDC_BASE_ADDR+0x00)      // 32bit lcdc screen start addr reg
#define LCDC_LSR                 (LCDC_BASE_ADDR+0x04)      // 32bit lcdc size reg
#define LCDC_LVPWR               (LCDC_BASE_ADDR+0x08)      // 32bit lcdc virtual page width reg
#define LCDC_LCPR                (LCDC_BASE_ADDR+0x0C)      // 32bit lcd cursor position reg
#define LCDC_LCWHBR              (LCDC_BASE_ADDR+0x10)      // 32bit lcd cursor width/heigh/blink
#define LCDC_LCCMR               (LCDC_BASE_ADDR+0x14)      // 32bit lcd color cursor mapping reg
#define LCDC_LPCR                (LCDC_BASE_ADDR+0x18)      // 32bit lcdc panel config reg
#define LCDC_LHCR                (LCDC_BASE_ADDR+0x1C)      // 32bit lcdc horizontal config reg
#define LCDC_LVCR                (LCDC_BASE_ADDR+0x20)      // 32bit lcdc vertical config reg
#define LCDC_LPOR                (LCDC_BASE_ADDR+0x24)      // 32bit lcdc panning offset reg
#define LCDC_LSCR                (LCDC_BASE_ADDR+0x28)      // 32bit lcdc sharp config 1 reg
#define LCDC_LPCCR               (LCDC_BASE_ADDR+0x2C)      // 32bit lcdc pwm contrast ctrl reg
#define LCDC_LDCR                (LCDC_BASE_ADDR+0x30)      // 32bit lcdc dma control reg
#define LCDC_LRMCR               (LCDC_BASE_ADDR+0x34)      // 32bit lcdc refresh mode ctrl reg
#define LCDC_LICR                (LCDC_BASE_ADDR+0x38)      // 32bit lcdc interrupt config reg
#define LCDC_LIER                (LCDC_BASE_ADDR+0x3C)      // 32bit lcdc interrupt enable reg
#define LCDC_LISR                (LCDC_BASE_ADDR+0x40)      // 32bit lcdc interrupt status reg
#define LCDC_LGWSAR              (LCDC_BASE_ADDR+0x50)      // 32bit lcdc graphic win start add
#define LCDC_LGWSR               (LCDC_BASE_ADDR+0x54)      // 32bit lcdc graphic win size reg
#define LCDC_LGWVPWR             (LCDC_BASE_ADDR+0x58)      // 32bit lcdc graphic win virtual pg
#define LCDC_LGWPOR              (LCDC_BASE_ADDR+0x5C)      // 32bit lcdc graphic win pan offset
#define LCDC_LGWPR               (LCDC_BASE_ADDR+0x60)      // 32bit lcdc graphic win positon reg
#define LCDC_LGWCR               (LCDC_BASE_ADDR+0x64)      // 32bit lcdc graphic win control reg
#define LCDC_LGWDCR              (LCDC_BASE_ADDR+0x68)      // 32bit lcdc graphic win DMA control reg
#define LCDC_LAUSCR              (LCDC_BASE_ADDR+0x80)      // 
#define LCDC_LAUSCCR             (LCDC_BASE_ADDR+0x84)      // 

#define LCDC_BPLUT_BASE          (LCDC_BASE_ADDR+0x800)     // Background Plane LUT (800 - BFC)
#define LCDC_GWLUT_BASE          (LCDC_BASE_ADDR+0xC00)     // Background Plane LUT (C00 - FFC)

// #########################################
// # SLCDC                                   #
// #########################################
#define SLCDC_BASE_ADDR            0x53FC0000
#define SLCDC_DBADDR             (SLCDC_BASE_ADDR+0x00)     // 32bit slcdc data base addr
#define SLCDC_DBUF_SIZE          (SLCDC_BASE_ADDR+0x04)     // 32bit slcdc data buffer size high
#define SLCDC_CBADDR             (SLCDC_BASE_ADDR+0x08)     // 32bit slcdc cmd base addr high
#define SLCDC_CBUF_SIZE          (SLCDC_BASE_ADDR+0x0C)     // 32bit slcdc cmd buffer size high
#define SLCDC_CBUF_SSIZE         (SLCDC_BASE_ADDR+0x10)     // 32bit slcdc cmd string size
#define SLCDC_FIFO_CONFIG        (SLCDC_BASE_ADDR+0x14)     // 32bit slcdc fifo config reg
#define SLCDC_LCD_CONFIG         (SLCDC_BASE_ADDR+0x18)     // 32bit slcdc lcd controller config
#define SLCDC_LCD_TXCONFIG       (SLCDC_BASE_ADDR+0x1C)     // 32bit slcdc lcd transmit config reg
#define SLCDC_LCD_CTRL_STAT      (SLCDC_BASE_ADDR+0x20)     // 32bit slcdc lcd control/status reg
#define SLCDC_LCD_CLKCONFIG      (SLCDC_BASE_ADDR+0x24)     // 32bit slcdc lcd clock config reg
#define SLCDC_LCD_WR_DATA        (SLCDC_BASE_ADDR+0x28)     // 32bit slcdc lcd write data reg


// #########################################
// # PWM4                                   #
// #########################################
#define PWM4_BASE_ADDR             0x53FC8000
#define PWM4_PWMCR                 (PWM4_BASE_ADDR+0x00)      // 32bit pwm control reg
#define PWM4_PWMSR                 (PWM4_BASE_ADDR+0x04)      // 32bit pwm sample reg
#define PWM4_PWMIR                 (PWM4_BASE_ADDR+0x08)      // 32bit pwm interrupt reg
#define PWM4_PWMSAR                (PWM4_BASE_ADDR+0x0C)      // 32bit pwm sample reg
#define PWM4_PWMPR                 (PWM4_BASE_ADDR+0x10)      // 32bit pwm period reg
#define PWM4_PWMCNR                (PWM4_BASE_ADDR+0x14)      // 32bit pwm counter reg

// #########################################
// # GPIO1                                 #
// #########################################
#define GPIO1_BASE_ADDR            0x53FCC000
#define GPIO1_DR0                  (GPIO1_BASE_ADDR+0x00)    
#define GPIO1_GDIR0                (GPIO1_BASE_ADDR+0x04)    
#define GPIO1_PSR0                 (GPIO1_BASE_ADDR+0x08)    
#define GPIO1_ICR1                 (GPIO1_BASE_ADDR+0x0C)    
#define GPIO1_ICR2                 (GPIO1_BASE_ADDR+0x10)    
#define GPIO1_IMR                  (GPIO1_BASE_ADDR+0x14)    
#define GPIO1_ISR                  (GPIO1_BASE_ADDR+0x18)    

// #########################################
// # GPIO2                                 #
// #########################################
#define GPIO2_BASE_ADDR            0x53FD0000
#define GPIO2_DR0                  (GPIO2_BASE_ADDR+0x00)    
#define GPIO2_GDIR0                (GPIO2_BASE_ADDR+0x04)    
#define GPIO2_PSR0                 (GPIO2_BASE_ADDR+0x08)    
#define GPIO2_ICR1                 (GPIO2_BASE_ADDR+0x0C)    
#define GPIO2_ICR2                 (GPIO2_BASE_ADDR+0x10)    
#define GPIO2_IMR                  (GPIO2_BASE_ADDR+0x14)    
#define GPIO2_ISR                  (GPIO2_BASE_ADDR+0x18)    

// #########################################
// # SDMA                                  #
// #########################################
#define SDMA_BASE_ADDR             0x53FD4000
#define SDMA_COPTR                 (SDMA_BASE_ADDR+0x000)    
#define SDMA_INTR                  (SDMA_BASE_ADDR+0x004)    
#define SDMA_STOP                  (SDMA_BASE_ADDR+0x008)    
#define SDMA_START                 (SDMA_BASE_ADDR+0x00C)    
#define SDMA_EVTOVR                (SDMA_BASE_ADDR+0x010)    
#define SDMA_DSPOVR                (SDMA_BASE_ADDR+0x014)    
#define SDMA_HOSTOVR               (SDMA_BASE_ADDR+0x018)    
#define SDMA_EVTPEND               (SDMA_BASE_ADDR+0x01C)    
#define SDMA_DSPENBL               (SDMA_BASE_ADDR+0x020)    
#define SDMA_RESET                 (SDMA_BASE_ADDR+0x024)    
#define SDMA_EVTERR                (SDMA_BASE_ADDR+0x028)    
#define SDMA_INTRMASK              (SDMA_BASE_ADDR+0x02C)    
#define SDMA_PSW                   (SDMA_BASE_ADDR+0x030)    
#define SDMA_EVTERRDBG             (SDMA_BASE_ADDR+0x034)    
#define SDMA_CONFIG                (SDMA_BASE_ADDR+0x038)    
#define SDMA_ONCE_ENB              (SDMA_BASE_ADDR+0x040)    
#define SDMA_ONCE_DATA             (SDMA_BASE_ADDR+0x044)    
#define SDMA_ONCE_INSTR            (SDMA_BASE_ADDR+0x048)    
#define SDMA_ONCE_STAT             (SDMA_BASE_ADDR+0x04C)    
#define SDMA_ONCE_CMD              (SDMA_BASE_ADDR+0x050)    
#define SDMA_MIRROR                (SDMA_BASE_ADDR+0x054)    
#define SDMA_ILLINSTADDR           (SDMA_BASE_ADDR+0x058)    
#define SDMA_CHN0ADDR              (SDMA_BASE_ADDR+0x05C)    
#define SDMA_XTRIG_CONF1           (SDMA_BASE_ADDR+0x070)    
#define SDMA_XTRIG_CONF2           (SDMA_BASE_ADDR+0x074)    
#define SDMA_CHNPRI_0              (SDMA_BASE_ADDR+0x100)    
#define SDMA_CHNPRI_1              (SDMA_BASE_ADDR+0x104)    
#define SDMA_CHNPRI_2              (SDMA_BASE_ADDR+0x108)    
#define SDMA_CHNPRI_3              (SDMA_BASE_ADDR+0x10C)    
#define SDMA_CHNPRI_4              (SDMA_BASE_ADDR+0x110)    
#define SDMA_CHNPRI_5              (SDMA_BASE_ADDR+0x114)    
#define SDMA_CHNPRI_6              (SDMA_BASE_ADDR+0x118)    
#define SDMA_CHNPRI_7              (SDMA_BASE_ADDR+0x11C)    
#define SDMA_CHNPRI_8              (SDMA_BASE_ADDR+0x120)    
#define SDMA_CHNPRI_9              (SDMA_BASE_ADDR+0x124)    
#define SDMA_CHNPRI_10             (SDMA_BASE_ADDR+0x128)    
#define SDMA_CHNPRI_11             (SDMA_BASE_ADDR+0x12C)    
#define SDMA_CHNPRI_12             (SDMA_BASE_ADDR+0x130)    
#define SDMA_CHNPRI_13             (SDMA_BASE_ADDR+0x134)    
#define SDMA_CHNPRI_14             (SDMA_BASE_ADDR+0x138)    
#define SDMA_CHNPRI_15             (SDMA_BASE_ADDR+0x13C)    
#define SDMA_CHNPRI_16             (SDMA_BASE_ADDR+0x140)    
#define SDMA_CHNPRI_17             (SDMA_BASE_ADDR+0x144)    
#define SDMA_CHNPRI_18             (SDMA_BASE_ADDR+0x148)    
#define SDMA_CHNPRI_19             (SDMA_BASE_ADDR+0x14C)    
#define SDMA_CHNPRI_20             (SDMA_BASE_ADDR+0x150)    
#define SDMA_CHNPRI_21             (SDMA_BASE_ADDR+0x154)    
#define SDMA_CHNPRI_22             (SDMA_BASE_ADDR+0x158)    
#define SDMA_CHNPRI_23             (SDMA_BASE_ADDR+0x15C)    
#define SDMA_CHNPRI_24             (SDMA_BASE_ADDR+0x160)    
#define SDMA_CHNPRI_25             (SDMA_BASE_ADDR+0x164)    
#define SDMA_CHNPRI_26             (SDMA_BASE_ADDR+0x168)    
#define SDMA_CHNPRI_27             (SDMA_BASE_ADDR+0x16C)    
#define SDMA_CHNPRI_28             (SDMA_BASE_ADDR+0x170)    
#define SDMA_CHNPRI_29             (SDMA_BASE_ADDR+0x174)    
#define SDMA_CHNPRI_30             (SDMA_BASE_ADDR+0x178)    
#define SDMA_CHNPRI_31             (SDMA_BASE_ADDR+0x17C)    
#define SDMA_CHENBL_0              (SDMA_BASE_ADDR+0x200)    
#define SDMA_CHENBL_1              (SDMA_BASE_ADDR+0x204)    
#define SDMA_CHENBL_2              (SDMA_BASE_ADDR+0x208)    
#define SDMA_CHENBL_3              (SDMA_BASE_ADDR+0x20C)    
#define SDMA_CHENBL_4              (SDMA_BASE_ADDR+0x210)    
#define SDMA_CHENBL_5              (SDMA_BASE_ADDR+0x214)    
#define SDMA_CHENBL_6              (SDMA_BASE_ADDR+0x218)    
#define SDMA_CHENBL_7              (SDMA_BASE_ADDR+0x21C)    
#define SDMA_CHENBL_8              (SDMA_BASE_ADDR+0x220)    
#define SDMA_CHENBL_9              (SDMA_BASE_ADDR+0x224)    
#define SDMA_CHENBL_10             (SDMA_BASE_ADDR+0x228)    
#define SDMA_CHENBL_11             (SDMA_BASE_ADDR+0x22C)    
#define SDMA_CHENBL_12             (SDMA_BASE_ADDR+0x230)    
#define SDMA_CHENBL_13             (SDMA_BASE_ADDR+0x234)    
#define SDMA_CHENBL_14             (SDMA_BASE_ADDR+0x238)    
#define SDMA_CHENBL_15             (SDMA_BASE_ADDR+0x23C)    
#define SDMA_CHENBL_16             (SDMA_BASE_ADDR+0x240)    
#define SDMA_CHENBL_17             (SDMA_BASE_ADDR+0x244)    
#define SDMA_CHENBL_18             (SDMA_BASE_ADDR+0x248)    
#define SDMA_CHENBL_19             (SDMA_BASE_ADDR+0x24C)    
#define SDMA_CHENBL_20             (SDMA_BASE_ADDR+0x250)    
#define SDMA_CHENBL_21             (SDMA_BASE_ADDR+0x254)    
#define SDMA_CHENBL_22             (SDMA_BASE_ADDR+0x258)    
#define SDMA_CHENBL_23             (SDMA_BASE_ADDR+0x25C)    
#define SDMA_CHENBL_24             (SDMA_BASE_ADDR+0x260)    
#define SDMA_CHENBL_25             (SDMA_BASE_ADDR+0x264)    
#define SDMA_CHENBL_26             (SDMA_BASE_ADDR+0x268)    
#define SDMA_CHENBL_27             (SDMA_BASE_ADDR+0x26C)    
#define SDMA_CHENBL_28             (SDMA_BASE_ADDR+0x270)    
#define SDMA_CHENBL_29             (SDMA_BASE_ADDR+0x274)    
#define SDMA_CHENBL_30             (SDMA_BASE_ADDR+0x278)    
#define SDMA_CHENBL_31             (SDMA_BASE_ADDR+0x27C)    
#define SDMA_CHENBL_32             (SDMA_BASE_ADDR+0x280)    
#define SDMA_CHENBL_33             (SDMA_BASE_ADDR+0x284)    
#define SDMA_CHENBL_34             (SDMA_BASE_ADDR+0x288)    
#define SDMA_CHENBL_35             (SDMA_BASE_ADDR+0x28C)    
#define SDMA_CHENBL_36             (SDMA_BASE_ADDR+0x290)    
#define SDMA_CHENBL_37             (SDMA_BASE_ADDR+0x294)    
#define SDMA_CHENBL_38             (SDMA_BASE_ADDR+0x298)    
#define SDMA_CHENBL_39             (SDMA_BASE_ADDR+0x29C)    
#define SDMA_CHENBL_40             (SDMA_BASE_ADDR+0x2A0)    
#define SDMA_CHENBL_41             (SDMA_BASE_ADDR+0x2A4)    
#define SDMA_CHENBL_42             (SDMA_BASE_ADDR+0x2A8)    
#define SDMA_CHENBL_43             (SDMA_BASE_ADDR+0x2AC)    
#define SDMA_CHENBL_44             (SDMA_BASE_ADDR+0x2B0)    
#define SDMA_CHENBL_45             (SDMA_BASE_ADDR+0x2B4)    
#define SDMA_CHENBL_46             (SDMA_BASE_ADDR+0x2B8)    
#define SDMA_CHENBL_47             (SDMA_BASE_ADDR+0x2BC)    

// #########################################
// # WDOG                                  #
// #########################################
#define WDOG_BASE_ADDR             0x53FDC000
#define WDOG_WCR                   (WDOG_BASE_ADDR+0x00)      // 16bit watchdog control reg
#define WDOG_WSR                   (WDOG_BASE_ADDR+0x02)      // 16bit watchdog service reg
#define WDOG_WRSR                  (WDOG_BASE_ADDR+0x04)      // 16bit watchdog reset status reg

// #########################################
// # PWM1                                   #
// #########################################
#define PWM1_BASE_ADDR             0x53FE0000
#define PWM1_PWMCR                 (PWM1_BASE_ADDR+0x00)      // 32bit pwm control reg
#define PWM1_PWMSR                 (PWM1_BASE_ADDR+0x04)      // 32bit pwm sample reg
#define PWM1_PWMIR                 (PWM1_BASE_ADDR+0x08)      // 32bit pwm interrupt reg
#define PWM1_PWMSAR                (PWM1_BASE_ADDR+0x0C)      // 32bit pwm sample reg
#define PWM1_PWMPR                 (PWM1_BASE_ADDR+0x10)      // 32bit pwm period reg
#define PWM1_PWMCNR                (PWM1_BASE_ADDR+0x14)      // 32bit pwm counter reg

// #########################################
// # RTIC                                  #
// #########################################
#define RTIC_BASE_ADDR             0x53FEC000
#define RTIC_STATUS                (RTIC_BASE_ADDR+0x000)    
#define RTIC_COMMAND               (RTIC_BASE_ADDR+0x004)    
#define RTIC_CONTROL               (RTIC_BASE_ADDR+0x008)    
#define RTIC_DELAY_TIMER           (RTIC_BASE_ADDR+0x00C)    
#define RTIC_MEMORYA_ADD1          (RTIC_BASE_ADDR+0x010)    
#define RTIC_MEMORYA_LEN1          (RTIC_BASE_ADDR+0x014)    
#define RTIC_MEMORYA_ADD2          (RTIC_BASE_ADDR+0x018)    
#define RTIC_MEMORYA_LEN2          (RTIC_BASE_ADDR+0x01C)    
#define RTIC_MEMORYB_ADD1          (RTIC_BASE_ADDR+0x030)    
#define RTIC_MEMORYB_LEN1          (RTIC_BASE_ADDR+0x034)    
#define RTIC_MEMORYB_ADD2          (RTIC_BASE_ADDR+0x038)    
#define RTIC_MEMORYB_LEN2          (RTIC_BASE_ADDR+0x03C)    
#define RTIC_MEMORYC_ADD1          (RTIC_BASE_ADDR+0x050)    
#define RTIC_MEMORYC_LEN1          (RTIC_BASE_ADDR+0x054)    
#define RTIC_MEMORYC_ADD2          (RTIC_BASE_ADDR+0x058)    
#define RTIC_MEMORYC_LEN2          (RTIC_BASE_ADDR+0x05C)    
#define RTIC_MEMORYD_ADD1          (RTIC_BASE_ADDR+0x070)    
#define RTIC_MEMORYD_LEN1          (RTIC_BASE_ADDR+0x074)    
#define RTIC_MEMORYD_ADD2          (RTIC_BASE_ADDR+0x078)    
#define RTIC_MEMORYD_LEN2          (RTIC_BASE_ADDR+0x07C)    

#define RTIC_FAULT_ADD             (RTIC_BASE_ADDR+0x090)    
#define RTIC_WATCHDOG              (RTIC_BASE_ADDR+0x094)    

#define RTIC_HASHA_128             (RTIC_BASE_ADDR+0x0A0)    
#define RTIC_HASHA_96              (RTIC_BASE_ADDR+0x0A4)    
#define RTIC_HASHA_64              (RTIC_BASE_ADDR+0x0A8)    
#define RTIC_HASHA_32              (RTIC_BASE_ADDR+0x0AC)    
#define RTIC_HASHA_0               (RTIC_BASE_ADDR+0x0B0)    
#define RTIC_HASHB_128             (RTIC_BASE_ADDR+0x0C0)    
#define RTIC_HASHB_96              (RTIC_BASE_ADDR+0x0C4)    
#define RTIC_HASHB_64              (RTIC_BASE_ADDR+0x0C8)    
#define RTIC_HASHB_32              (RTIC_BASE_ADDR+0x0CC)    
#define RTIC_HASHB_0               (RTIC_BASE_ADDR+0x0D0)    
#define RTIC_HASHC_128             (RTIC_BASE_ADDR+0x0E0)    
#define RTIC_HASHC_96              (RTIC_BASE_ADDR+0x0E4)    
#define RTIC_HASHC_64              (RTIC_BASE_ADDR+0x0E8)    
#define RTIC_HASHC_32              (RTIC_BASE_ADDR+0x0EC)    
#define RTIC_HASHC_0               (RTIC_BASE_ADDR+0x0F0)    
#define RTIC_HASHD_128             (RTIC_BASE_ADDR+0x100)    
#define RTIC_HASHD_96              (RTIC_BASE_ADDR+0x104)    
#define RTIC_HASHD_64              (RTIC_BASE_ADDR+0x108)    
#define RTIC_HASHD_32              (RTIC_BASE_ADDR+0x10C)    
#define RTIC_HASHD_0               (RTIC_BASE_ADDR+0x110)    

// #########################################
// # IIM                                   #
// #########################################
#define IIM_BASE_ADDR              0x53FF0000
#define IIM_STAT                   (IIM_BASE_ADDR+0x0000)    
#define IIM_STATM                  (IIM_BASE_ADDR+0x0004)    
#define IIM_ERR                    (IIM_BASE_ADDR+0x0008)    
#define IIM_EMASK                  (IIM_BASE_ADDR+0x000C)    
#define IIM_FCTL                   (IIM_BASE_ADDR+0x0010)    
#define IIM_UA                     (IIM_BASE_ADDR+0x0014)    
#define IIM_LA                     (IIM_BASE_ADDR+0x0018)    
#define IIM_SDAT                   (IIM_BASE_ADDR+0x001C)    
#define IIM_PREV                   (IIM_BASE_ADDR+0x0020)    
#define IIM_SREV                   (IIM_BASE_ADDR+0x0024)    
#define IIM_PRG_P                  (IIM_BASE_ADDR+0x0028)    
#define IIM_SCS0                   (IIM_BASE_ADDR+0x002C)    
#define IIM_SCS1                   (IIM_BASE_ADDR+0x0030)    
#define IIM_SCS2                   (IIM_BASE_ADDR+0x0034)    
#define IIM_SCS3                   (IIM_BASE_ADDR+0x0038)    
#define IIM_FBAC0                  (IIM_BASE_ADDR+0x0800)    
#define IIM_JAC_HWV0               (IIM_BASE_ADDR+0x0804)    
#define IIM_HWV1                   (IIM_BASE_ADDR+0x0808)    
#define IIM_HWV2                   (IIM_BASE_ADDR+0x080C)    
#define IIM_HAB0                   (IIM_BASE_ADDR+0x0810)    
#define IIM_HAB1                   (IIM_BASE_ADDR+0x0814)    
#define IIM_PREV_FUSE              (IIM_BASE_ADDR+0x0818)    
#define IIM_SREV_FUSE              (IIM_BASE_ADDR+0x081C)    
#define IIM_SJC_CHALL_0            (IIM_BASE_ADDR+0x0820)    
#define IIM_SJC_CHALL_1            (IIM_BASE_ADDR+0x0824)    
#define IIM_SJC_CHALL_2            (IIM_BASE_ADDR+0x0828)    
#define IIM_SJC_CHALL_3            (IIM_BASE_ADDR+0x082C)    
#define IIM_SJC_CHALL_4            (IIM_BASE_ADDR+0x0830)    
#define IIM_SJC_CHALL_5            (IIM_BASE_ADDR+0x0834)    
#define IIM_SJC_CHALL_6            (IIM_BASE_ADDR+0x0838)    
#define IIM_SJC_CHALL_7            (IIM_BASE_ADDR+0x083C)    
#define IIM_FB0UC17                (IIM_BASE_ADDR+0x0840)    
#define IIM_FB0UC255               (IIM_BASE_ADDR+0x0BFC)    
#define IIM_FBAC1                  (IIM_BASE_ADDR+0x0C00)    
#define IIM_KEY0                   (IIM_BASE_ADDR+0x0C04)    
#define IIM_KEY1                   (IIM_BASE_ADDR+0x0C08)    
#define IIM_KEY2                   (IIM_BASE_ADDR+0x0C0C)    
#define IIM_KEY3                   (IIM_BASE_ADDR+0x0C10)    
#define IIM_KEY4                   (IIM_BASE_ADDR+0x0C14)    
#define IIM_KEY5                   (IIM_BASE_ADDR+0x0C18)    
#define IIM_KEY6                   (IIM_BASE_ADDR+0x0C1C)    
#define IIM_KEY7                   (IIM_BASE_ADDR+0x0C20)    
#define IIM_KEY8                   (IIM_BASE_ADDR+0x0C24)    
#define IIM_KEY9                   (IIM_BASE_ADDR+0x0C28)    
#define IIM_KEY10                  (IIM_BASE_ADDR+0x0C2C)    
#define IIM_KEY11                  (IIM_BASE_ADDR+0x0C30)    
#define IIM_KEY12                  (IIM_BASE_ADDR+0x0C34)    
#define IIM_KEY13                  (IIM_BASE_ADDR+0x0C38)    
#define IIM_KEY14                  (IIM_BASE_ADDR+0x0C3C)    
#define IIM_KEY15                  (IIM_BASE_ADDR+0x0C40)    
#define IIM_KEY16                  (IIM_BASE_ADDR+0x0C44)    
#define IIM_KEY17                  (IIM_BASE_ADDR+0x0C48)    
#define IIM_KEY18                  (IIM_BASE_ADDR+0x0C4C)    
#define IIM_KEY19                  (IIM_BASE_ADDR+0x0C50)    
#define IIM_KEY20                  (IIM_BASE_ADDR+0x0C54)    
#define IIM_SJC_RESP_0             (IIM_BASE_ADDR+0x0C58)    
#define IIM_SJC_RESP_1             (IIM_BASE_ADDR+0x0C5C)    
#define IIM_SJC_RESP_2             (IIM_BASE_ADDR+0x0C60)    
#define IIM_SJC_RESP_3             (IIM_BASE_ADDR+0x0C64)    
#define IIM_SJC_RESP_4             (IIM_BASE_ADDR+0x0C68)    
#define IIM_SJC_RESP_5             (IIM_BASE_ADDR+0x0C6C)    
#define IIM_SJC_RESP_6             (IIM_BASE_ADDR+0x0C70)    
#define IIM_SJC_RESP_7             (IIM_BASE_ADDR+0x0C74)    
#define IIM_FB2UC30                (IIM_BASE_ADDR+0x0C78)    
#define IIM_FB2UC255               (IIM_BASE_ADDR+0x0FFC)    
#define IIM_FBAC2                  (IIM_BASE_ADDR+0x1000)    
#define IIM_XCORD                  (IIM_BASE_ADDR+0x1004)    
#define IIM_YCORD                  (IIM_BASE_ADDR+0x1008)    
#define IIM_FAB                    (IIM_BASE_ADDR+0x100C)    
#define IIM_WAFER                  (IIM_BASE_ADDR+0x1010)    
#define IIM_LOT0                   (IIM_BASE_ADDR+0x1014)    
#define IIM_LOT1                   (IIM_BASE_ADDR+0x1018)    
#define IIM_LOT2                   (IIM_BASE_ADDR+0x101C)    
#define IIM_PROB                   (IIM_BASE_ADDR+0x1020)    
#define IIM_FT                     (IIM_BASE_ADDR+0x1024)    
#define IIM_FB1UC10                (IIM_BASE_ADDR+0x1028)    
#define IIM_FB1UC255               (IIM_BASE_ADDR+0x13FC)    
#define IIM_FBAC3                  (IIM_BASE_ADDR+0x1400)    
#define IIM_FB3UC1                 (IIM_BASE_ADDR+0x1404)    
#define IIM_FB3UC255               (IIM_BASE_ADDR+0x17FC)    

// #########################################
// # USB                                   #
// #########################################
#define USB_MODULE_BASE_ADDR       0x53FF4000
#define USB_OTG_BASE_ADDR          (USB_MODULE_BASE_ADDR+0x000)
#define USB_H1_BASE_ADDR           (USB_MODULE_BASE_ADDR+0x200)
#define USB_H2_BASE_ADDR           (USB_MODULE_BASE_ADDR+0x400)
#define USB_CONTROL_REG            (USB_MODULE_BASE_ADDR+0x600)
#define USB_OTG_MIRROR_REG         (USB_MODULE_BASE_ADDR+0x604)
#define USB_OTG_UTMI_PHY_CTRL_FUNC (USB_MODULE_BASE_ADDR+0x608)
#define USB_OTG_UTMI_PHY_CTRL_TEST (USB_MODULE_BASE_ADDR+0x60C)

#define USB_H2_ID                  (USB_H2_BASE_ADDR+0x000)   // Identification Register
#define USB_H2_HWGENERAL           (USB_H2_BASE_ADDR+0x004)   // General Hardware Parameters
#define USB_H2_HWHOST              (USB_H2_BASE_ADDR+0x008)   // Host Hardware Parameters
#define USB_H2_HWTXBUF             (USB_H2_BASE_ADDR+0x010)   // TX Buffer Hardware Parameters
#define USB_H2_HWRXBUF             (USB_H2_BASE_ADDR+0x014)   // RX Buffer Hardware Parameters
#define USB_H2_GPTIMER0LD          (USB_H2_BASE_ADDR+0x080)  
#define USB_H2_GPTIMER0CTRL        (USB_H2_BASE_ADDR+0x084)  
#define USB_H2_GPTIMER1LD          (USB_H2_BASE_ADDR+0x088)  
#define USB_H2_GPTIMER1CTRL        (USB_H2_BASE_ADDR+0x08C)  
#define USB_H2_CAPLENGTH           (USB_H2_BASE_ADDR+0x100)   // Capability Register Length
#define USB_H2_HCIVERSION          (USB_H2_BASE_ADDR+0x102)   // Host Interface Version Number
#define USB_H2_HCSPARAMS           (USB_H2_BASE_ADDR+0x104)   // Host Ctrl. Structural Parameters
#define USB_H2_HCCPARAMS           (USB_H2_BASE_ADDR+0x108)   // Host Ctrl. Capability Parameters
#define USB_H2_USBCMD              (USB_H2_BASE_ADDR+0x140)   // USB Command
#define USB_H2_USBSTS              (USB_H2_BASE_ADDR+0x144)   // USB Status
#define USB_H2_USBINTR             (USB_H2_BASE_ADDR+0x148)   // USB Interrupt Enable
#define USB_H2_FRINDEX             (USB_H2_BASE_ADDR+0x14C)   // USB Frame Index
#define USB_H2_PERIODICLISTBASE    (USB_H2_BASE_ADDR+0x154)   // Frame List Base Address
#define USB_H2_ASYNCLISTADDR       (USB_H2_BASE_ADDR+0x158)   // Next Asynchronous List Address
#define USB_H2_BURSTSIZE           (USB_H2_BASE_ADDR+0x160)   // Programmable Burst Size
#define USB_H2_TXFILLTUNING        (USB_H2_BASE_ADDR+0x164)   // Host Transmit Pre-Buffer Packet Tuning
#define USB_H2_CONFIGFLAG          (USB_H2_BASE_ADDR+0x180)   // Configured Flag Register
#define USB_H2_PORTSC1             (USB_H2_BASE_ADDR+0x184)   // Port Status/Control
#define USB_H2_USBMODE             (USB_H2_BASE_ADDR+0x1A8)   // USB Device Mode

#define USB_OTG_ID                 (USB_OTG_BASE_ADDR+0x000)  // Identification Register
#define USB_OTG_HWGENERAL          (USB_OTG_BASE_ADDR+0x004)  // General Hardware Parameters
#define USB_OTG_HWHOST             (USB_OTG_BASE_ADDR+0x008)  // Host Hardware Parameters
#define USB_OTG_HWDEVICE           (USB_OTG_BASE_ADDR+0x00C)  // Device Hardware Parameters
#define USB_OTG_HWTXBUF            (USB_OTG_BASE_ADDR+0x010)  // TX Buffer Hardware Parameters
#define USB_OTG_HWRXBUF            (USB_OTG_BASE_ADDR+0x014)  // RX Buffer Hardware Parameters
#define USB_OTG_GPTIMER0LD         (USB_OTG_BASE_ADDR+0x080) 
#define USB_OTG_GPTIMER0CTRL       (USB_OTG_BASE_ADDR+0x084) 
#define USB_OTG_GPTIMER1LD         (USB_OTG_BASE_ADDR+0x088) 
#define USB_OTG_GPTIMER1CTRL       (USB_OTG_BASE_ADDR+0x08C) 
#define USB_OTG_CAPLENGTH          (USB_OTG_BASE_ADDR+0x100)  // Capability Register Length
#define USB_OTG_HCIVERSION         (USB_OTG_BASE_ADDR+0x102)  // Host Interface Version Number
#define USB_OTG_HCSPARAMS          (USB_OTG_BASE_ADDR+0x104)  // Host Ctrl. Structural Parameters
#define USB_OTG_HCCPARAMS          (USB_OTG_BASE_ADDR+0x108)  // Host Ctrl. Capability Parameters
#define USB_OTG_DCIVERSION         (USB_OTG_BASE_ADDR+0x120)  // Dev. Interface Version Number
#define USB_OTG_DCCPARAMS          (USB_OTG_BASE_ADDR+0x124)  // Device Ctrl. Capability Parameters
#define USB_OTG_USBCMD             (USB_OTG_BASE_ADDR+0x140)  // USB Command
#define USB_OTG_USBSTS             (USB_OTG_BASE_ADDR+0x144)  // USB Status
#define USB_OTG_USBINTR            (USB_OTG_BASE_ADDR+0x148)  // USB Interrupt Enable
#define USB_OTG_FRINDEX            (USB_OTG_BASE_ADDR+0x14C)  // USB Frame Index
#define USB_OTG_PERIODICLISTBASE   (USB_OTG_BASE_ADDR+0x154)  // Frame List Base Address
#define USB_OTG_ASYNCLISTADDR      (USB_OTG_BASE_ADDR+0x158)  // Next Asynchronous List Address
#define USB_OTG_BURSTSIZE          (USB_OTG_BASE_ADDR+0x160)  // Programmable Burst Size
#define USB_OTG_TXFILLTUNING       (USB_OTG_BASE_ADDR+0x164)  // Host Transmit Pre-Buffer Packet Tuning
#define USB_OTG_CONFIGFLAG         (USB_OTG_BASE_ADDR+0x180)  // Configured Flag Register
#define USB_OTG_PORTSC1            (USB_OTG_BASE_ADDR+0x184)  // Port Status/Control
#define USB_OTG_OTGSC              (USB_OTG_BASE_ADDR+0x1A4)  // On-The-Go (OTG) Status and Control
#define USB_OTG_USBMODE            (USB_OTG_BASE_ADDR+0x1A8)  // USB Device Mode
#define USB_OTG_ENPDTSETUPSTAT     (USB_OTG_BASE_ADDR+0x1AC)  // Endpoint Setup Status
#define USB_OTG_ENDPTPRIME         (USB_OTG_BASE_ADDR+0x1B0)  // Endpoint Initialization
#define USB_OTG_ENDPTFLUSH         (USB_OTG_BASE_ADDR+0x1B4)  // Endpoint De-Initialize
#define USB_OTG_ENDPTSTATUS        (USB_OTG_BASE_ADDR+0x1B8)  // Endpoint Status
#define USB_OTG_ENDPTCOMPLETE      (USB_OTG_BASE_ADDR+0x1BC)  // Endpoint Complete
#define USB_OTG_ENDPTCTRL0         (USB_OTG_BASE_ADDR+0x1C0)  // Endpoint Control 0
#define USB_OTG_ENDPTCTRL1         (USB_OTG_BASE_ADDR+0x1C4)  // Endpoint Control 1
#define USB_OTG_ENDPTCTRL2         (USB_OTG_BASE_ADDR+0x1C8)  // Endpoint Control 2
#define USB_OTG_ENDPTCTRL3         (USB_OTG_BASE_ADDR+0x1CC)  // Endpoint Control 3
#define USB_OTG_ENDPTCTRL4         (USB_OTG_BASE_ADDR+0x1D0)  // Endpoint Control 4
#define USB_OTG_ENDPTCTRL5         (USB_OTG_BASE_ADDR+0x1D4)  // Endpoint Control 5
#define USB_OTG_ENDPTCTRL6         (USB_OTG_BASE_ADDR+0x1D8)  // Endpoint Control 6
#define USB_OTG_ENDPTCTRL7         (USB_OTG_BASE_ADDR+0x1DC)  // Endpoint Control 7

// #########################################
// # CSI                                   #
// #########################################
#define CSI_BASE_ADDR              	0x53FF8000
#define CSI_CSICR1					(CSI_BASE_ADDR+0x00) // 32bit csi control 1 reg
#define CSI_CSICR2               	(CSI_BASE_ADDR+0x04) // 32bit csi control 2 reg
#define CSI_CSICR3                	(CSI_BASE_ADDR+0x08) // 32bit csi control 3 reg
#define CSI_CSISTATFIFO            	(CSI_BASE_ADDR+0x0C) // 32bit csi fifo statistics reg
#define CSI_CSIRFIFO              	(CSI_BASE_ADDR+0x10) // 32bit csi receive image reg
#define CSI_CSIRXCNT             	(CSI_BASE_ADDR+0x14) // 32bit csi receive count reg
#define CSI_CSISR                	(CSI_BASE_ADDR+0x18) // 32bit csi status reg
#define CSI_CSIDBG               	(CSI_BASE_ADDR+0x1C) // 32bit csi debug reg
#define CSI_CSIDMASA_STA           	(CSI_BASE_ADDR+0x20) // DMA start addr sff
#define CSI_CSIDMATS           		(CSI_BASE_ADDR+0x24) // DMA TSF size
#define CSI_CSIDMASA_FB1       		(CSI_BASE_ADDR+0x28) // DMA addr FB1
#define CSI_CSIDMASA_FB2       		(CSI_BASE_ADDR+0x2C) // DMA addr FB2
#define CSI_CSIBUF_PARA       		(CSI_BASE_ADDR+0x30) // FBUF_STRIDE
#define CSI_CSIIMAG_PARA			(CSI_BASE_ADDR+0x34) // Image Width


// #########################################
// # DRYICE                                   #
// #########################################
#define DRYICE_BASE_ADDR           0x53FFC000

// #########################################
// # ROMPATCH                              #
// #########################################
#define ROMPATCH_BASE_ADDR         0x60000000
#define ROMPATCH_D15               (ROMPATCH_BASE_ADDR+0x0B4) // 32bit rompatch data reg 15
#define ROMPATCH_D14               (ROMPATCH_BASE_ADDR+0x0B8) // 32bit rompatch data reg 14
#define ROMPATCH_D13               (ROMPATCH_BASE_ADDR+0x0BC) // 32bit rompatch data reg 13
#define ROMPATCH_D12               (ROMPATCH_BASE_ADDR+0x0C0) // 32bit rompatch data reg 12
#define ROMPATCH_D11               (ROMPATCH_BASE_ADDR+0x0C4) // 32bit rompatch data reg 11
#define ROMPATCH_D10               (ROMPATCH_BASE_ADDR+0x0C8) // 32bit rompatch data reg 10
#define ROMPATCH_D9                (ROMPATCH_BASE_ADDR+0x0CC) // 32bit rompatch data reg 9
#define ROMPATCH_D8                (ROMPATCH_BASE_ADDR+0x0D0) // 32bit rompatch data reg 8
#define ROMPATCH_D7                (ROMPATCH_BASE_ADDR+0x0D4) // 32bit rompatch data reg 7
#define ROMPATCH_D6                (ROMPATCH_BASE_ADDR+0x0D8) // 32bit rompatch data reg 6
#define ROMPATCH_D5                (ROMPATCH_BASE_ADDR+0x0DC) // 32bit rompatch data reg 5
#define ROMPATCH_D4                (ROMPATCH_BASE_ADDR+0x0E0) // 32bit rompatch data reg 4
#define ROMPATCH_D3                (ROMPATCH_BASE_ADDR+0x0E4) // 32bit rompatch data reg 3
#define ROMPATCH_D2                (ROMPATCH_BASE_ADDR+0x0E8) // 32bit rompatch data reg 2
#define ROMPATCH_D1                (ROMPATCH_BASE_ADDR+0x0EC) // 32bit rompatch data reg 1
#define ROMPATCH_D0                (ROMPATCH_BASE_ADDR+0x0F0) // 32bit rompatch data reg 0
#define ROMPATCH_CNTL              (ROMPATCH_BASE_ADDR+0x0F4) // 32bit rompatch control reg
#define ROMPATCH_ENH               (ROMPATCH_BASE_ADDR+0x0F8) // 32bit rompatch enable reg high
#define ROMPATCH_ENL               (ROMPATCH_BASE_ADDR+0x0FC) // 32bit rompatch enable reg low
#define ROMPATCH_A0                (ROMPATCH_BASE_ADDR+0x100) // 32bit rompatch addr reg 0
#define ROMPATCH_A1                (ROMPATCH_BASE_ADDR+0x104) // 32bit rompatch addr reg 1
#define ROMPATCH_A2                (ROMPATCH_BASE_ADDR+0x108) // 32bit rompatch addr reg 2
#define ROMPATCH_A3                (ROMPATCH_BASE_ADDR+0x10C) // 32bit rompatch addr reg 3
#define ROMPATCH_A4                (ROMPATCH_BASE_ADDR+0x110) // 32bit rompatch addr reg 4
#define ROMPATCH_A5                (ROMPATCH_BASE_ADDR+0x114) // 32bit rompatch addr reg 5
#define ROMPATCH_A6                (ROMPATCH_BASE_ADDR+0x118) // 32bit rompatch addr reg 6
#define ROMPATCH_A7                (ROMPATCH_BASE_ADDR+0x11C) // 32bit rompatch addr reg 7
#define ROMPATCH_A8                (ROMPATCH_BASE_ADDR+0x120) // 32bit rompatch addr reg 8
#define ROMPATCH_A9                (ROMPATCH_BASE_ADDR+0x124) // 32bit rompatch addr reg 9
#define ROMPATCH_A10               (ROMPATCH_BASE_ADDR+0x128) // 32bit rompatch addr reg 10
#define ROMPATCH_A11               (ROMPATCH_BASE_ADDR+0x12C) // 32bit rompatch addr reg 11
#define ROMPATCH_A12               (ROMPATCH_BASE_ADDR+0x130) // 32bit rompatch addr reg 12
#define ROMPATCH_A13               (ROMPATCH_BASE_ADDR+0x134) // 32bit rompatch addr reg 13
#define ROMPATCH_A14               (ROMPATCH_BASE_ADDR+0x138) // 32bit rompatch addr reg 14
#define ROMPATCH_A15               (ROMPATCH_BASE_ADDR+0x13C) // 32bit rompatch addr reg 15
#define ROMPATCH_A16               (ROMPATCH_BASE_ADDR+0x140) // 32bit rompatch addr reg 16
#define ROMPATCH_A17               (ROMPATCH_BASE_ADDR+0x144) // 32bit rompatch addr reg 17
#define ROMPATCH_A18               (ROMPATCH_BASE_ADDR+0x148) // 32bit rompatch addr reg 18
#define ROMPATCH_A19               (ROMPATCH_BASE_ADDR+0x14C) // 32bit rompatch addr reg 19
#define ROMPATCH_A20               (ROMPATCH_BASE_ADDR+0x150) // 32bit rompatch addr reg 20
#define ROMPATCH_A21               (ROMPATCH_BASE_ADDR+0x154) // 32bit rompatch addr reg 21
#define ROMPATCH_A22               (ROMPATCH_BASE_ADDR+0x158) // 32bit rompatch addr reg 22
#define ROMPATCH_A23               (ROMPATCH_BASE_ADDR+0x15C) // 32bit rompatch addr reg 23
#define ROMPATCH_A24               (ROMPATCH_BASE_ADDR+0x160) // 32bit rompatch addr reg 24
#define ROMPATCH_A25               (ROMPATCH_BASE_ADDR+0x164) // 32bit rompatch addr reg 25
#define ROMPATCH_A26               (ROMPATCH_BASE_ADDR+0x168) // 32bit rompatch addr reg 26
#define ROMPATCH_A27               (ROMPATCH_BASE_ADDR+0x16C) // 32bit rompatch addr reg 27
#define ROMPATCH_A28               (ROMPATCH_BASE_ADDR+0x170) // 32bit rompatch addr reg 28
#define ROMPATCH_A29               (ROMPATCH_BASE_ADDR+0x174) // 32bit rompatch addr reg 29
#define ROMPATCH_A30               (ROMPATCH_BASE_ADDR+0x178) // 32bit rompatch addr reg 30
#define ROMPATCH_A31               (ROMPATCH_BASE_ADDR+0x17C) // 32bit rompatch addr reg 31
#define ROMPATCH_BRPT              (ROMPATCH_BASE_ADDR+0x200) // 32bit rompatch
#define ROMPATCH_BASE              (ROMPATCH_BASE_ADDR+0x204) // 32bit rompatch base addr reg
#define ROMPATCH_SR                (ROMPATCH_BASE_ADDR+0x208) // 32bit rompatch status reg
#define ROMPATCH_ABSR              (ROMPATCH_BASE_ADDR+0x20C) // 32bit rompatch abort status reg
#define ROMPATCH_DADR              (ROMPATCH_BASE_ADDR+0x210) // 32bit rompatch d-ahb addr abort
#define ROMPATCH_IADR              (ROMPATCH_BASE_ADDR+0x214) // 32bit rompatch i-ahb addr abort

// #########################################
// # AVIC                                  #
// #########################################
#define AVIC_BASE_ADDR             0x68000000
#define AVIC_INTCNTL               (AVIC_BASE_ADDR+0x00)      // 32bit AVIC int control reg
#define AVIC_NIMASK                (AVIC_BASE_ADDR+0x04)      // 32bit AVIC int mask reg
#define AVIC_INTENNUM              (AVIC_BASE_ADDR+0x08)      // 32bit AVIC int enable number reg
#define AVIC_INTDISNUM             (AVIC_BASE_ADDR+0x0C)      // 32bit AVIC int disable number reg
#define AVIC_INTENABLEH            (AVIC_BASE_ADDR+0x10)      // 32bit AVIC int enable reg high
#define AVIC_INTENABLEL            (AVIC_BASE_ADDR+0x14)      // 32bit AVIC int enable reg low
#define AVIC_INTTYPEH              (AVIC_BASE_ADDR+0x18)      // 32bit AVIC int type reg high
#define AVIC_INTTYPEL              (AVIC_BASE_ADDR+0x1C)      // 32bit AVIC int type reg low
#define AVIC_NIPRIORITY7           (AVIC_BASE_ADDR+0x20)      // 32bit AVIC norm int priority lvl7
#define AVIC_NIPRIORITY6           (AVIC_BASE_ADDR+0x24)      // 32bit AVIC norm int priority lvl6
#define AVIC_NIPRIORITY5           (AVIC_BASE_ADDR+0x28)      // 32bit AVIC norm int priority lvl5
#define AVIC_NIPRIORITY4           (AVIC_BASE_ADDR+0x2C)      // 32bit AVIC norm int priority lvl4
#define AVIC_NIPRIORITY3           (AVIC_BASE_ADDR+0x30)      // 32bit AVIC norm int priority lvl3
#define AVIC_NIPRIORITY2           (AVIC_BASE_ADDR+0x34)      // 32bit AVIC norm int priority lvl2
#define AVIC_NIPRIORITY1           (AVIC_BASE_ADDR+0x38)      // 32bit AVIC norm int priority lvl1
#define AVIC_NIPRIORITY0           (AVIC_BASE_ADDR+0x3C)      // 32bit AVIC norm int priority lvl0
#define AVIC_NIVECSR               (AVIC_BASE_ADDR+0x40)      // 32bit AVIC norm int vector/status
#define AVIC_FIVECSR               (AVIC_BASE_ADDR+0x44)      // 32bit AVIC fast int vector/status
#define AVIC_INTSRCH               (AVIC_BASE_ADDR+0x48)      // 32bit AVIC int source reg high
#define AVIC_INTSRCL               (AVIC_BASE_ADDR+0x4C)      // 32bit AVIC int source reg low
#define AVIC_INTFRCH               (AVIC_BASE_ADDR+0x50)      // 32bit AVIC int force reg high
#define AVIC_INTFRCL               (AVIC_BASE_ADDR+0x54)      // 32bit AVIC int force reg low
#define AVIC_NIPNDH                (AVIC_BASE_ADDR+0x58)      // 32bit AVIC norm int pending high
#define AVIC_NIPNDL                (AVIC_BASE_ADDR+0x5C)      // 32bit AVIC norm int pending low
#define AVIC_FIPNDH                (AVIC_BASE_ADDR+0x60)      // 32bit AVIC fast int pending high
#define AVIC_FIPNDL                (AVIC_BASE_ADDR+0x64)      // 32bit AVIC fast int pending low

// #########################################
// # External Memory CSD0 CSD1             #
// #########################################
#define CSD0_BASE_ADDR             0x80000000
#define CSD0_END_ADDR              0x8FFFFFFF
#define CSD1_BASE_ADDR             0x90000000
#define CSD1_END_ADDR              0x9FFFFFFF

// #########################################
// # External Memory CS0 - CS5             #
// # $A000_0000 to $A7FF_FFFF (CS0)        #
// # $A800_0000 to $AFFF_FFFF (CS1)        #
// # $B000_0000 to $B1FF_FFFF (CS2)        #
// # $B200_0000 to $B3FF_FFFF (CS3)        #
// # $B400_0000 to $B5FF_FFFF (CS4)        #
// # $B600_0000 to $B7FF_FFFF (CS5)        #
// #########################################
#define CS0_BASE_ADDR              0xA0000000
#define CS0_END_ADDR               (CS0_BASE_ADDR+0x7FFFFFF) 
#define CS1_BASE_ADDR              0xA8000000
#define CS1_END_ADDR               (CS1_BASE_ADDR+0x7FFFFFF) 
#define CS2_BASE_ADDR              0xB0000000
#define CS2_END_ADDR               (CS2_BASE_ADDR+0x1FFFFFF) 
#define CS3_BASE_ADDR              0xB2000000
#define CS3_END_ADDR               (CS3_BASE_ADDR+0x1FFFFFF) 
#define CS4_BASE_ADDR              0xB4000000
#define CS4_END_ADDR               (CS4_BASE_ADDR+0x1FFFFFF) 
#define CS5_BASE_ADDR              0xB6000000
#define CS5_END_ADDR               (CS5_BASE_ADDR+0x1FFFFFF) 

// #########################################
// # NFC                                   #
// #########################################
#define NFC_BASE_ADDR              0xBB000000
#define NFC_REG_BASE_ADDR          (NFC_BASE_ADDR+0x1E00)    
#define NFC_RAM_BUF_ADDR           (NFC_REG_BASE_ADDR+0x04)  
#define NFC_NAND_FLASH_ADDR        (NFC_REG_BASE_ADDR+0x06)  
#define NFC_NAND_FLASH_CMD         (NFC_REG_BASE_ADDR+0x08)  
#define NFC_CONFIG                 (NFC_REG_BASE_ADDR+0x0A)  
#define NFC_ECC_STAT_RSLT1         (NFC_REG_BASE_ADDR+0x0C)  
#define NFC_ECC_STAT_RSLT2         (NFC_REG_BASE_ADDR+0x0E)  
#define NFC_ECC_SPAS               (NFC_REG_BASE_ADDR+0x10)  
#define NFC_NF_WR_PROT             (NFC_REG_BASE_ADDR+0x12)  
#define NFC_NF_WR_PROT_STAT        (NFC_REG_BASE_ADDR+0x18)  
#define NFC_NF_CONFIG1             (NFC_REG_BASE_ADDR+0x1A)  
#define NFC_NF_CONFIG2             (NFC_REG_BASE_ADDR+0x1C)  
#define NFC_ULOCK_START_BLK0       (NFC_REG_BASE_ADDR+0x20)  
#define NFC_ULOCK_END_BLK0         (NFC_REG_BASE_ADDR+0x22)  
#define NFC_ULOCK_START_BLK1       (NFC_REG_BASE_ADDR+0x24)  
#define NFC_ULOCK_END_BLK1         (NFC_REG_BASE_ADDR+0x26)  
#define NFC_ULOCK_START_BLK2       (NFC_REG_BASE_ADDR+0x28)  
#define NFC_ULOCK_END_BLK2         (NFC_REG_BASE_ADDR+0x2A)  
#define NFC_ULOCK_START_BLK3       (NFC_REG_BASE_ADDR+0x2C)  
#define NFC_ULOCK_END_BLK3         (NFC_REG_BASE_ADDR+0x2E)  

// #########################################
// # ESDCTL                                #
// #########################################
#define ESDCTL_BASE_ADDR           0xB8001000
#define ESD_ESDCTL0                (ESDCTL_BASE_ADDR+0x00)   
#define ESD_ESDCFG0                (ESDCTL_BASE_ADDR+0x04)   
#define ESD_ESDCTL1                (ESDCTL_BASE_ADDR+0x08)   
#define ESD_ESDCFG1                (ESDCTL_BASE_ADDR+0x0C)   
#define ESD_ESDMISC                (ESDCTL_BASE_ADDR+0x10)   
#define CONFIG_DATA_MDDR1          (ESDCTL_BASE_ADDR+0x20)   
#define CONFIG_DATA_MDDR2          (ESDCTL_BASE_ADDR+0x24)   
#define CONFIG_DATA_MDDR3          (ESDCTL_BASE_ADDR+0x28)   
#define CONFIG_DATA_MDDR4          (ESDCTL_BASE_ADDR+0x2C)   
#define CONFIG_DATA_MDDR5          (ESDCTL_BASE_ADDR+0x30)   
#define DEL_CYCL_LEN_MDDR          (ESDCTL_BASE_ADDR+0x34)   
#define CONFIG_DATA_MDDR6          (ESDCTL_BASE_ADDR+0x38)   

// #########################################
// # WEIM                                  #
// #########################################
#define WEIM_BASE_ADDR             0xB8002000
#define WEIM_CS0U                  (WEIM_BASE_ADDR+0x00)     
#define WEIM_CS0L                  (WEIM_BASE_ADDR+0x04)     
#define WEIM_CS0A                  (WEIM_BASE_ADDR+0x08)     
#define WEIM_CS1U                  (WEIM_BASE_ADDR+0x10)     
#define WEIM_CS1L                  (WEIM_BASE_ADDR+0x14)     
#define WEIM_CS1A                  (WEIM_BASE_ADDR+0x18)     
#define WEIM_CS2U                  (WEIM_BASE_ADDR+0x20)     
#define WEIM_CS2L                  (WEIM_BASE_ADDR+0x24)     
#define WEIM_CS2A                  (WEIM_BASE_ADDR+0x28)     
#define WEIM_CS3U                  (WEIM_BASE_ADDR+0x30)     
#define WEIM_CS3L                  (WEIM_BASE_ADDR+0x34)     
#define WEIM_CS3A                  (WEIM_BASE_ADDR+0x38)     
#define WEIM_CS4U                  (WEIM_BASE_ADDR+0x40)     
#define WEIM_CS4L                  (WEIM_BASE_ADDR+0x44)     
#define WEIM_CS4A                  (WEIM_BASE_ADDR+0x48)     
#define WEIM_CS5U                  (WEIM_BASE_ADDR+0x50)     
#define WEIM_CS5L                  (WEIM_BASE_ADDR+0x54)     
#define WEIM_CS5A                  (WEIM_BASE_ADDR+0x58)     
#define WEIM_EIM                   (WEIM_BASE_ADDR+0x60)     

// #########################################
// # M3IF                                  #
// #########################################
#define M3IF_BASE_ADDR             0xB8003000
#define M3IF_CTL                   (M3IF_BASE_ADDR+0x00)     
#define M3IF_WCFG0                 (M3IF_BASE_ADDR+0x04)     
#define M3IF_WCFG1                 (M3IF_BASE_ADDR+0x08)     
#define M3IF_WCFG2                 (M3IF_BASE_ADDR+0x0C)     
#define M3IF_WCFG3                 (M3IF_BASE_ADDR+0x10)     
#define M3IF_WCFG4                 (M3IF_BASE_ADDR+0x14)     
#define M3IF_WCFG5                 (M3IF_BASE_ADDR+0x18)     
#define M3IF_WCFG6                 (M3IF_BASE_ADDR+0x1C)     
#define M3IF_WCFG7                 (M3IF_BASE_ADDR+0x20)     
#define M3IF_WCSR                  (M3IF_BASE_ADDR+0x24)     
#define M3IF_SCFG0                 (M3IF_BASE_ADDR+0x28)     
#define M3IF_SCFG1                 (M3IF_BASE_ADDR+0x2C)     
#define M3IF_SCFG2                 (M3IF_BASE_ADDR+0x30)     
#define M3IF_SSR0                  (M3IF_BASE_ADDR+0x34)     
#define M3IF_SSR1                  (M3IF_BASE_ADDR+0x38)     

// #########################################
// # RAM (128KB)                              #
// # $7800_0000 to $7801_FFFF              #
// #########################################
#define RAM_BASE_ADDR              0x78000000

// Stack definitions

// ARM Program Status Register
// 31  30  29  28  27  .........  7   6   5  4  3  2  1  0
// ----------------------------------------------------------
// | N | Z | C | V | Q |         | I | F | T |   M4 - M0    |
// ----------------------------------------------------------

// #########################################
// # ARM MODES = {M4, M3, M2, M1, M0}      #
// #########################################
#define MODE_USR                   0x10
#define MODE_FIQ                   0x11
#define MODE_IRQ                   0x12
#define MODE_SVC                   0x13
#define MODE_ABT                   0x17
#define MODE_UND                   0x1B
#define MODE_SYS                   0x1F
#define MODE_BITS                  0x1F

// #########################################
// # ARM INTERRUPTS                        #
// #########################################
#define INTERRUPT_BITS             0xC0
#define ENABLE_IRQ                 0x0
#define ENABLE_FIQ                 0x0
#define DISABLE_FIQ                0x40
#define DISABLE_IRQ                0x80

// #########################################
// # ARM CONDITION CODE FLAG = {N,Z,C,V,Q} #
// #########################################
#define FLAG_BITS                  0xF8000000
#define NFLAG                      0x80000000
#define ZFLAG                      0x40000000
#define CFLAG                      0x20000000
#define VFLAG                      0x10000000
#define QFLAG                      0x08000000

#endif // SOC_MEMORY_MAP_H






