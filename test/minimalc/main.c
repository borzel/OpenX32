/****************************************************************************/
/* Testprogram for the Freescale/NXP i.MX253 within the Behringer X32       */
/* (c) 2025 Chris Noeding, christian@noeding-online.de                      */
/* More information at https://github.com/xn--nding-jua/OpenX32             */
/****************************************************************************/

#include <stdint.h>
#include "functions.h"
#include "mx25_memory_map.h"
#include "iomux_define.h"
#include "iomux_register.h"

/****************************************************************************/
/*                           Helper-Functions                               */
/****************************************************************************/

void wait(long time) 
{
  while (time--);
}

void Configure_mode(uint32_t Reg_Addr, uint32_t Alt_mode)
{
  *(uint32_t*)Reg_Addr=Alt_mode;
}

void low_level_init(void)
{
  // configure peripheral enables for CGCR0
  *(uint32_t*)CCM_CGR0 = 0x1FFFFFFF;
  // configure peripheral enables for CGCR1
  *(uint32_t*)CCM_CGR1 = 0xFFFFFFFF;
  // configure peripheral enables for CGCR2
  *(uint32_t*)CCM_CGR2 = 0x000FDFFF;
  // Set Peripheral Clock Divider Registers
  *(uint32_t*)CCM_PDR0 = 0x23C83403;
  *(uint32_t*)CCM_PDR1 = 0x03030303;
  *(uint32_t*)CCM_PDR2 = 0x01010103;
  *(uint32_t*)CCM_PDR3 = 0x01010101;
}

void serv_WDOG()
{
  *(unsigned short *)(WDOG_WSR) = 0x5555;
  *(unsigned short *)(WDOG_WSR) = 0xAAAA;
}

/****************************************************************************/
/*                             Mainfunction                                 */
/****************************************************************************/

int main()
{
  low_level_init() ;

  // initialize and turn-on LED MCU_BUSY on GPIO4-24
  Configure_mode(IOMUXC_SW_MUX_CTL_PAD_UART1_RTS, ALT5); // configure IOMUXC for GPIO4-24
  reg32clrbit(IOMUXC_SW_PAD_CTL_PAD_UART1_RTS, 24); // disable pullups
  reg32clrbit(GPIO4_GDIR0, 24); // set desired GPIOs to output
  reg32setbit(GPIO4_DR0, 24); // set desired GPIOs to HIGH

  // initialize and turn-on LAMP_PWM on GPIO1-26
  Configure_mode(IOMUXC_SW_MUX_CTL_PAD_PWM, ALT5); // configure IOMUXC for GPIO1-26
  reg32clrbit(IOMUXC_SW_PAD_CTL_PAD_PWM, 26); // disable pullups 
  reg32clrbit(GPIO1_GDIR0, 26); // set desired GPIOs to output
  reg32setbit(GPIO1_DR0, 26); // set desired GPIOs to HIGH

  while (1) {
    wait(2000000) ;
    serv_WDOG() ;
  }

  return 0;
}
