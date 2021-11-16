#ifndef SAMD_SYSCTRL_H
#define SAMD_SYSCTRL_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* ----  System Controller (SYSCTRL) */
#define SYSCTRL_INTENCLR       MMIO32(SYSCTRL_BASE + 0x0000) 
#define SYSCTRL_INTENSET       MMIO32(SYSCTRL_BASE + 0x0004)
#define SYSCTRL_INTFLAG        MMIO32(SYSCTRL_BASE + 0x0008)
#define SYSCTRL_PCLKSR         MMIO32(SYSCTRL_BASE + 0x000C)
#define SYSCTRL_XOSC           MMIO16(SYSCTRL_BASE + 0x0010)
#define SYSCTRL_XOSC32K        MMIO16(SYSCTRL_BASE + 0x0014)
#define SYSCTRL_OSC32K         MMIO32(SYSCTRL_BASE + 0x0018)
#define SYSCTRL_OSCULP32K      MMIO8(SYSCTRL_BASE + 0x001C)
#define SYSCTRL_OSC8M          MMIO32(SYSCTRL_BASE + 0x0020)
#define SYSCTRL_DFLLCTRL       MMIO16(SYSCTRL_BASE + 0x0024) 
#define SYSCTRL_DFLLVAL        MMIO32(SYSCTRL_BASE + 0x0028) 
#define SYSCTRL_DFLLMUL        MMIO32(SYSCTRL_BASE + 0x002C)
#define SYSCTRL_DFLLSYNC       MMIO8(SYSCTRL_BASE + 0x0030)
#define SYSCTRL_BOD33          MMIO32(SYSCTRL_BASE + 0x0034)
#define SYSCTRL_VREF           MMIO32(SYSCTRL_BASE + 0x0040)
#define SYSCTRL_DPLLCTRLA      MMIO8(SYSCTRL_BASE + 0x0044) 
#define SYSCTRL_DPLLRATIO      MMIO32(SYSCTRL_BASE + 0x0048)
#define SYSCTRL_DPLLCTRLB      MMIO32(SYSCTRL_BASE + 0x004C) 
#define SYSCTRL_DPLLSTATUS     MMIO8(SYSCTRL_BASE + 0x0050) 



/* ========== Instance parameters for SYSCTRL peripheral ========== */
#define SYSCTRL_BGAP_CALIB_MSB      11      
#define SYSCTRL_BOD12_CALIB_MSB     4       
#define SYSCTRL_BOD33_CALIB_MSB     5       
#define SYSCTRL_DFLL48M_COARSE_MSB  5       
#define SYSCTRL_DFLL48M_FINE_MSB    9       
#define SYSCTRL_GCLK_ID_DFLL48      0        // Index of Generic Clock for DFLL48
#define SYSCTRL_GCLK_ID_FDPLL       1        // Index of Generic Clock for DPLL
#define SYSCTRL_GCLK_ID_FDPLL32K    2        // Index of Generic Clock for DPLL 32K
#define SYSCTRL_OSC32K_COARSE_CALIB_MSB 6       
#define SYSCTRL_POR33_ENTEST_MSB    1       
#define SYSCTRL_SYSTEM_CLOCK        1000000  // Initial system clock frequency
#define SYSCTRL_ULPVREF_DIVLEV_MSB  3       
#define SYSCTRL_ULPVREG_FORCEGAIN_MSB 1       
#define SYSCTRL_ULPVREG_RAMREFSEL_MSB 2       
#define SYSCTRL_VREF_CONTROL_MSB    48      
#define SYSCTRL_VREF_STATUS_MSB     7       
#define SYSCTRL_VREG_LEVEL_MSB      2       
#define SYSCTRL_BOD12_VERSION       0x111   
#define SYSCTRL_BOD33_VERSION       0x111   
#define SYSCTRL_DFLL48M_VERSION     0x300   
#define SYSCTRL_FDPLL_VERSION       0x110   
#define SYSCTRL_OSCULP32K_VERSION   0x111   
#define SYSCTRL_OSC8M_VERSION       0x120   
#define SYSCTRL_OSC32K_VERSION      0x110   
#define SYSCTRL_VREF_VERSION        0x201   
#define SYSCTRL_VREG_VERSION        0x201   
#define SYSCTRL_XOSC_VERSION        0x112   
#define SYSCTRL_XOSC32K_VERSION     0x111  

#endif
