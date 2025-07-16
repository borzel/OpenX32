.set  UND_STACK_SIZE, 0x00000004                /* stack for "undefined instruction" interrupts is 4 bytes  */
.set  ABT_STACK_SIZE, 0x00000004                /* stack for "abort" interrupts is 4 bytes                  */
.set  FIQ_STACK_SIZE, 0x00000004                /* stack for "FIQ" interrupts  is 4 bytes                       */
.set  IRQ_STACK_SIZE, 0X00000004                /* stack for "IRQ" normal interrupts is 4 bytes         */
.set  SVC_STACK_SIZE, 0x00000004                /* stack for "SVC" supervisor mode is 4 bytes   */

.set  MODE_USR, 0x10                            /* Normal User Mode                                     */
.set  MODE_FIQ, 0x11                            /* FIQ Processing Fast Interrupts Mode  */
.set  MODE_IRQ, 0x12                            /* IRQ Processing Standard Interrupts Mode      */
.set  MODE_SVC, 0x13                            /* Supervisor Processing Software Interrupts Mode */
.set  MODE_ABT, 0x17                            /* Abort Processing memory Faults Mode          */
.set  MODE_UND, 0x1B                            /* Undefined Processing Undefined Instructions Mode */
.set  MODE_SYS, 0x1F                            /* System Running Priviledged Operating System Tasks  Mode      */

.set  I_BIT, 0x80                               /* when I bit is set, IRQ is disabled (program status registers) */
.set  F_BIT, 0x40                               /* when F bit is set, FIQ is disabled (program status registers) */


   .section .vectors,"ax"
   .code 32

/* flash header  - should be placed before main image */
app_code_jump_vector :  .word ResetHandler
app_code_barker :       .word 0
app_code_csf :          .word 0
dcd_ptr_ptr :           .word app_code_csf
			.word 0
			.word 0
			.word 0
			.word 0

/****************************************************************************/
/*               Vector table and reset entry                               */
/****************************************************************************/
_vectors:
   ldr pc, ResetAddr    /* Reset                 */
   ldr pc, UndefAddr    /* Undefined instruction */
   ldr pc, SWIAddr      /* Software interrupt    */
   ldr pc, PAbortAddr   /* Prefetch abort        */
   ldr pc, DAbortAddr   /* Data abort            */
   ldr pc, ReservedAddr /* Reserved              */
   ldr pc, IRQAddr      /* IRQ interrupt         */
   ldr pc, FIQAddr      /* FIQ interrupt         */

ResetAddr:     .word ResetHandler
UndefAddr:     .word UndefHandler
SWIAddr:       .word SWIHandler
PAbortAddr:    .word PAbortHandler
DAbortAddr:    .word DAbortHandler
ReservedAddr:  .word 0
IRQAddr:       .word IRQHandler
FIQAddr:       .word FIQHandler

   .ltorg

   .section .init, "ax"
   .code 32

   .global ResetHandler

ResetHandler:
	/*
	/* turn on MCU_BUSY_LED at GPIO4-24 */
	ldr r0, =0x43FAC178
	ldr r1, =0x00000065
	str r1, [r0]

	ldr r0, =0x43FAC370
	ldr r1, =0x00000000
	str r1, [r0]

	ldr r0, =0x53F9C004
	ldr r1, =0x01000000
	str r1, [r0]

	ldr r0, =0x53F9C000
	ldr r1, =0x01000000
	str r1, [r0]
	*/

	/* jump program-counter to u-Boot */
	LDR PC, =0x800000C0

	/* we do jump over the reallocation-part directly into the reset-vector at address 0x300 of u-Boot */
	/*LDR PC, =0x800003C0*/

/****************************************************************************/
/*                     Default interrupt handler                            */
/****************************************************************************/

UndefHandler:
        b UndefHandler

SWIHandler:
        b SWIHandler

PAbortHandler:
        b PAbortHandler

DAbortHandler:
        b DAbortHandler

IRQHandler:
        b IRQHandler

FIQHandler:
        b FIQHandler

   .weak ExitFunction
   .weak UndefHandler, PAbortHandler, DAbortHandler
   .weak IRQHandler, FIQHandler

   .ltorg
