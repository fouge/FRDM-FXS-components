/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LP1.c
**     Project     : FRDM_FXS_Components
**     Processor   : MKL26Z128VMC4
**     Component   : LowPower
**     Version     : Component 01.016, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-09-25, 20:35, # CodeGen: 0
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         IsRecoveryThroughReset  - bool LP1_IsRecoveryThroughReset(void);
**         SetRecoveryThroughReset - void LP1_SetRecoveryThroughReset(bool value);
**         InitializeRAMinInit     - bool LP1_InitializeRAMinInit(void);
**         EntryPoint              - void LP1_EntryPoint(void);
**
**     (c) Copyright Erich Styger, 2009
**     http      : www.freescale.com
** ###################################################################*/
/*!
** @file LP1.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup LP1_module LP1 module documentation
**  @{
*/         

/* MODULE LP1. */

#include "LP1.h"

bool LP1_RecoveryThroughReset;         /* if we went through reset because of low power recovery */
/*
** ===================================================================
**     Method      :  LP1_IsRecoveryThroughReset (component LowPower)
**     Description :
**         Returns true if we went through reset because of recovery
**         from a low power mode.
**     Parameters  : None
**     Returns     :
**         ---             - if we went through reset sequence because
**                           of recovery
** ===================================================================
*/
#if 0
bool LP1_IsRecoveryThroughReset(void)
{
  /* this method is implemented as macro in the header file LP1.h */
  return LP1_RecoveryThroughReset;
}
#endif

/*
** ===================================================================
**     Method      :  LP1_SetRecoveryThroughReset (component LowPower)
**     Description :
**         Called in case we were going through reset because of low
**         power recovery.
**     Parameters  :
**         NAME            - DESCRIPTION
**         value           - the value to be set
**     Returns     : Nothing
** ===================================================================
*/
#if 0
void LP1_SetRecoveryThroughReset(bool value)
{
  /* this method is implemented as macro in the header file LP1.h */
  LP1_RecoveryThroughReset = TRUE;
}
#endif

/*
** ===================================================================
**     Method      :  LP1_InitializeRAMinInit (component LowPower)
**     Description :
**         
**     Parameters  : None
**     Returns     :
**         ---             - if we need to initialize the RAM in Init
** ===================================================================
*/
#if 0
bool LP1_InitializeRAMinInit(void)
{
  /* method is implemented as macro in the header file LP1.h */
  return TRUE; /* for no special Init, we always need to initialize the RAM */
}
#endif

/*
** ===================================================================
**     Method      :  LP1_EntryPoint (component LowPower)
**     Description :
**         
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void LP1_EntryPoint(void)
{
  /* Below is code which should be executed at the beginning of _EntryPoint().
     The code has been written for STOP2 mode on the S08 (GB60/GT60) and will
     need modification for other derivatives/cores.
     In Processor Expert you may need to copy this code into the CPU component >
     Build Options > User Initialization > User code before PE initialization.
     Please note the copy of source may be necessary as the stack is not set up
     at _EntryPoint() time and as such you cannot do a call to a subroutine.
     Additionally you need to include some files in the CPU component >
     Build Options > User Initialization > User Data Declarations:
#include "platform.h"       // this defines macros like PL_HAS_LOW_POWER_STOP, ...
#include "LP1.h"  // we need our own header file
#include "LED1.h"           // if we want to toggle a LED...
   */
#if 0 /* example code */
  /* Common initialization of the write once registers */
  #if PL_HAS_LOW_POWER_STOP
    #if PL_HAS_WATCHDOG
      /* SOPT: COPE=1,COPT=1,STOPE=1,??=0,??=0,??=0,BKGDPE=1,??=1 */
      setReg8(SOPT, (SOPT_COPT_MASK|SOPT_STOPE_MASK|SOPT_BKGDPE_MASK|0x11) |SOPT_COPE_MASK); /* long COP timeout, disable watchdog and enable stop mode */
    #else
      /* SOPT: COPE=0,COPT=1,STOPE=1,??=0,??=0,??=0,BKGDPE=1,??=1 */
      setReg8(SOPT, (SOPT_COPT_MASK|SOPT_STOPE_MASK|SOPT_BKGDPE_MASK|0x11)); /* long COP timeout, disable watchdog and enable stop mode */
    #endif
  #else
    /* SOPT: COPE=0,COPT=1,STOPE=0,??=1,??=0,??=0,BKGDPE=1,??=1 */
    setReg8(SOPT, /*0x53*/(SOPT_COPT_MASK|SOPT_BKGDPE_MASK|0x11)); /* long COP timeout, disable watchdog */
  #endif
    //setReg8Bits(PTDDD, PTDDD_PTDDD4_MASK); /* set as output */
    //LED1_On();
    /* PM Status and control registers */
  #if PL_HAS_LOW_POWER_STOP2
    /* disable LVDE in STOP mode */
    /* SPMSC1: LVDF=0,LVDACK=0,LVDIE=0,LVDRE=1,LVDSE=0,LVDE=1,??=0,??=0 */
    setReg8(SPMSC1, 0x14);
  #else
    /* SPMSC1: LVDF=0,LVDACK=0,LVDIE=0,LVDRE=1,LVDSE=1,LVDE=1,??=0,??=0 */
    setReg8(SPMSC1, 0x1C);
  #endif
  #if PL_HAS_LOW_POWER_STOP2
    LP1_SetRecoveryThroughReset(SPMSC2_PPDF); /* 0: is normal POR reset, 1 is from STOP2: recovery needed. */
    if(!LP1_IsRecoveryThroughReset()) { /* 0: is normal POR reset, 1 is from STOP2: recovery needed. */
      /* normal reset: set up SPMSC2 for STOP2 mode */
      /* SPMSC2: LVWF=0,LVWACK=0,LVDV=0,LVWV=0,PPDF=0,PPDACK=0,PDC=1,PPDC=1 */
      setReg8(SPMSC2, 0x03);
    }
    /* set up RTI for wake up every 1 second */
    setReg8(SRTISC, 0x17); /* Run RTI (select clock source, set frequency and enable interrupt ) */
    setReg8(IRQSC, 0x10); /* need to init IRQ pin, otherwise we will directly get an IRQ (see AN2493.pdf) */

    if(LP1_IsRecoveryThroughReset()) { /* how did we get here? */
      /* recovery from STOP2: acknowledge STOP2 recovery */
      setReg8Bits(SPMSC2, SPMSC2_PPDACK_MASK|SPMSC2_PDC_MASK|SPMSC2_PPDC_MASK);
      asm {
        L:
          bil L ; wait while IRQ is low (debounce)
      }
      /* now do the recovery from stop2 mode */
      INIT_SP_FROM_STARTUP_DESC(); /* need to set stack pointer again, but we do not do the whole ANSI startup code */
      asm jmp main;
    }
  #endif
#endif /* if 0 */
}

/* END LP1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
