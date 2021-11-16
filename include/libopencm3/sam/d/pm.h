#ifndef LIBOPENCM3_PM_H
#define LIBOPENCM3_PM_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* ---- Power Manager (PM) */
#define PM_CTRL          MMIO8(PM_BASE + 0x0000)
#define PM_SLEEP         MMIO8(PM_BASE + 0x0001)
#define PM_EXTCTRL       MMIO8(PM_BASE + 0x0002)
#define PM_CPUSEL        MMIO8(PM_BASE + 0x0008)
#define PM_APBASEL       MMIO8(PM_BASE + 0x0009)
#define PM_APBBSEL       MMIO8(PM_BASE + 0x000A)
#define PM_APBCSEL       MMIO8(PM_BASE + 0x000B)
#define PM_AHBMASK       MMIO32(PM_BASE + 0x0014)
#define PM_APBAMASK      MMIO32(PM_BASE + 0x0018)
#define PM_APBBMASK      MMIO32(PM_BASE + 0x001C)
#define PM_APBCMASK      MMIO32(PM_BASE + 0x0020)
#define PM_INTENCLR      MMIO8(PM_BASE + 0x0034)
#define PM_INTENSET      MMIO8(PM_BASE + 0x0035)
#define PM_INTFLAG       MMIO8(PM_BASE + 0x0036)
#define PM_RCAUSE        MMIO8(PM_BASE + 0x0038)

/* PM Control (PM_CTRL) */
#define PM_CTRL_BKUPCLK     (0x01 << 4)
#define PM_CTRL_CFDEN       (0x01 << 2)

/* PM Sleep Mode (PM_SLEEP) */
#define PM_SLEEP_IDLE       (0x01 << 0)

/* PM External Reset Controller (PM_EXTCTRL) */
#define PM_EXTCTRL_SETDIS   (0x01 << 0)

/* PM CPU Clock Select (PM_CPUSEL) */
#define PM_CPUSEL_CPUDIV    (0x01 << 0)
#define PM_CPUSEL_DIV1      (0x00 << 0)
#define PM_CPUSEL_DIV2      (0x01 << 0)
#define PM_CPUSEL_DIV4      (0x02 << 0)
#define PM_CPUSEL_DIV8      (0x03 << 0)
#define PM_CPUSEL_DIV16     (0x04 << 0)
#define PM_CPUSEL_DIV32     (0x05 << 0)
#define PM_CPUSEL_DIV64     (0x06 << 0)
#define PM_CPUSEL_DIV128    (0x07 << 0)

/* PM APBA Clock Select (PM_APBASEL) */
#define PM_APBASEL_APBADIV  (0x01 << 0)
#define PM_APBASEL_DIV1     (0x00 << 0)
#define PM_APBASEL_DIV2     (0x01 << 0)
#define PM_APBASEL_DIV4     (0x02 << 0)
#define PM_APBASEL_DIV8     (0x03 << 0)
#define PM_APBASEL_DIV16    (0x04 << 0)
#define PM_APBASEL_DIV32    (0x05 << 0)
#define PM_APBASEL_DIV64    (0x06 << 0)
#define PM_APBASEL_DIV128   (0x07 << 0)

/* PM APBB Clock Select (PM_APBBSEL) */
#define PM_APBBSEL_APBBDIV  (0x01 << 0)
#define PM_APBBSEL_DIV1     (0x00 << 0)
#define PM_APBBSEL_DIV2     (0x01 << 0)
#define PM_APBBSEL_DIV4     (0x02 << 0)
#define PM_APBBSEL_DIV8     (0x03 << 0)
#define PM_APBBSEL_DIV16    (0x04 << 0)
#define PM_APBBSEL_DIV32    (0x05 << 0)
#define PM_APBBSEL_DIV64    (0x06 << 0)
#define PM_APBBSEL_DIV128   (0x07 << 0)

/* PM APBC Clock Select (PM_APBCSEL) */
#define PM_APCASEL_APBCDIV  (0x01 << 0)
#define PM_APBCSEL_DIV1     (0x00 << 0)
#define PM_APBCSEL_DIV2     (0x01 << 0)
#define PM_APBCSEL_DIV4     (0x02 << 0)
#define PM_APBCSEL_DIV8     (0x03 << 0)
#define PM_APBCSEL_DIV16    (0x04 << 0)
#define PM_APBCSEL_DIV32    (0x05 << 0)
#define PM_APBCSEL_DIV64    (0x06 << 0)
#define PM_APBCSEL_DIV128   (0x07 << 0)

/* PM AHB Mask (PM_AHBMASK) */
#define PM_AHBMASK_DMAC     (0x01 << 5)
#define PM_AHBMASK_NVMCTRL  (0x01 << 4)
#define PM_AHBMASK_DSU      (0x01 << 3)
#define PM_AHBMASK_HPB2     (0x01 << 2)
#define PM_AHBMASK_HPB1     (0x01 << 1)
#define PM_AHBMASK_HPB0     (0x01 << 0)

/* PM APBA Mask (PM_APBAMASK) */
#define PM_APBAMASK_EIC     (0x01 << 6)
#define PM_APBAMASK_RTC     (0x01 << 5)
#define PM_APBAMASK_WDT     (0x01 << 4)
#define PM_APBAMASK_GCLK    (0x01 << 3)
#define PM_APBAMASK_SYSCTRL (0x01 << 2)
#define PM_APBAMASK_PM      (0x01 << 1)
#define PM_APBAMASK_PAC0    (0x01 << 0)

/* PM APBB Mask (PM_APBBMASK) */
#define PM_APBBMASK_DMAC    (0x01 << 4)
#define PM_APBBMASK_PORT    (0x01 << 3)
#define PM_APBBMASK_NVMCTRL (0x01 << 2)
#define PM_APBBMASK_DSU     (0x01 << 1)
#define PM_APBBMASK_PAC1    (0x01 << 0)

/* PM APBC Mask (PM_APBCMASK) */
#define PM_APBCMASK_ADC     (0x01 << 8)
#define PM_APBCMASK_TC2     (0x01 << 7)
#define PM_APBCMASK_TC1     (0x01 << 6)
#define PM_APBCMASK_SERCOM1 (0x01 << 3)
#define PM_APBCMASK_SERCOM0 (0x01 << 2)
#define PM_APBCMASK_EVSYS   (0x01 << 1)
#define PM_APBCMASK_PAC2    (0x01 << 0)

/* PM Interrupt Enable Clear (PM_INTENCLR) */
#define PM_INTENCLR_CFD     (0x01 << 1)
#define PM_INTENCLR_CKRDY   (0x01 << 0)

/* PM Interrupt Enable Set (PM_INTENSET) */
#define PM_INTENSET_CFD     (0x01 << 1)
#define PM_INTENSET_CKRDY   (0x01 << 0)

/* PM Interrupt Flag Status and Clear (PM_INTFLAG) */
#define PM_INTFLAG_CFD      (0x01 << 1)
#define PM_INTFLAG_CKRDY    (0x01 << 0)

/* PM Reset Cause (PM_RCAUSE) */
#define PM_RCAUSE_SYST      (0x01 << 6)
#define PM_RCAUSE_WDT       (0x01 << 5)
#define PM_RCAUSE_EXT       (0x01 << 4)
#define PM_RCAUSE_BOD33     (0x01 << 2)
#define PM_RCAUSE_BOD12     (0x01 << 1)
#define PM_RCAUSE_POR       (0x01 << 0)

#endif

