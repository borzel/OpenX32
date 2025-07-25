.set  UND_STACK_SIZE, 0x00000004		/* stack for "undefined instruction" interrupts is 4 bytes  */
.set  ABT_STACK_SIZE, 0x00000004		/* stack for "abort" interrupts is 4 bytes                  */
.set  FIQ_STACK_SIZE, 0x00000004		/* stack for "FIQ" interrupts  is 4 bytes         		*/
.set  IRQ_STACK_SIZE, 0X00000004		/* stack for "IRQ" normal interrupts is 4 bytes    	*/
.set  SVC_STACK_SIZE, 0x00000004		/* stack for "SVC" supervisor mode is 4 bytes  	*/

.set  MODE_USR, 0x10            		/* Normal User Mode 					*/
.set  MODE_FIQ, 0x11            		/* FIQ Processing Fast Interrupts Mode 	*/
.set  MODE_IRQ, 0x12            		/* IRQ Processing Standard Interrupts Mode 	*/
.set  MODE_SVC, 0x13            		/* Supervisor Processing Software Interrupts Mode */
.set  MODE_ABT, 0x17            		/* Abort Processing memory Faults Mode 		*/
.set  MODE_UND, 0x1B            		/* Undefined Processing Undefined Instructions Mode */
.set  MODE_SYS, 0x1F            		/* System Running Priviledged Operating System Tasks  Mode	*/

.set  I_BIT, 0x80               		/* when I bit is set, IRQ is disabled (program status registers) */
.set  F_BIT, 0x40               		/* when F bit is set, FIQ is disabled (program status registers) */

   .section .vectors,"ax"
   .code 32

/* flash header  - should be placed before main image */   
app_code_jump_vector : 	.word ResetHandler
app_code_barker : 		.word 0
app_code_csf : 			.word 0
dcd_ptr_ptr :			.word app_code_csf
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
   .global ExitFunction
   .extern main

/****************************************************************************/
/*                           Reset handler                                  */
/****************************************************************************/
ResetHandler:
/*
       Setup a stack for each mode - note that this only sets up a usable stack
       for User mode.   Also each mode is setup with interrupts initially disabled. 
*/

    			ldr   r0, =STACK_ADR
    			msr   CPSR_c, #MODE_UND|I_BIT|F_BIT 	/* Undefined Instruction Mode  */
    			mov   sp, r0
    			sub   r0, r0, #UND_STACK_SIZE
    			msr   CPSR_c, #MODE_ABT|I_BIT|F_BIT		/* Abort Mode */
    			mov   sp, r0
    			sub   r0, r0, #ABT_STACK_SIZE
    			msr   CPSR_c, #MODE_FIQ|I_BIT|F_BIT 		/* FIQ Mode */
    			mov   sp, r0
   			sub   r0, r0, #FIQ_STACK_SIZE
    			msr   CPSR_c, #MODE_IRQ|I_BIT|F_BIT 		/* IRQ Mode */
    			mov   sp, r0
    			sub   r0, r0, #IRQ_STACK_SIZE
    			msr   CPSR_c, #MODE_SVC|I_BIT|F_BIT 		/* Supervisor Mode */
    			mov   sp, r0
    			sub   r0, r0, #SVC_STACK_SIZE
    			msr   CPSR_c, #MODE_SYS|I_BIT|F_BIT 		/* User Mode */
    			mov   sp, r0
   
/*  Clear .bss section    */

		  	ldr   r1, =__bss_start
   			ldr   r2, =__bss_end
			ldr   r3, =0
bss_clear_loop:
			cmp   r1, r2
			strne r3, [r1], #+4
			bne   bss_clear_loop
   
   
/*   Jump to main    */

			mrs   r0, cpsr
			bic   r0, r0, #I_BIT | F_BIT     /* Enable FIQ and IRQ interrupt */
			msr   cpsr, r0
   
			mov   r0, #0 /* No arguments */
			mov   r1, #0 /* No arguments */
/*			ldr   r2, =main */
			ldr   r2, =ExitFunction
			mov   lr, pc
			bx    r2     /* And jump... */

ExitFunction:


        /* turn on MCU_BUSY at GPIO4-24 */
        ldr r0, =0x43FAC178
        mov r1, #0x00000065
        str r1, [r0]

        ldr r0, =0x43FAC370
        mov r1, #0x00000000
        str r1, [r0]

        ldr r0, =0x53F9C004
        mov r1, #0x01000000
        str r1, [r0]

        ldr r0, =0x53F9C000
        mov r1, #0x01000000
        str r1, [r0]


       /* turn on LED_PWM at GPIO1-26 */
        ldr r0, =0x43FAC11C
        mov r1, #0x00000005
        str r1, [r0]

        ldr r0, =0x43FAC314
        mov r1, #0x00000000
        str r1, [r0]

        ldr r0, =0x53FCC004
        mov r1, #0x04000000
        str r1, [r0]

        ldr r0, =0x53FCC000
        mov r1, #0x04000000
        str r1, [r0]



			nop
			nop
			nop
			b ExitFunction   
   


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

/*** EOF ***/   
   

