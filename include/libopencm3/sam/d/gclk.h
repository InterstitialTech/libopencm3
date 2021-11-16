#ifndef LIBOPENCM3_GCLK_H
#define LIBOPENCM3_GCLK_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

#define GCLK_CTRL               MMIO8(GCLK_BASE + 0x0000)
#define GCLK_STATUS             MMIO8(GCLK_BASE + 0x0001)
#define GCLK_CLKCTRL            MMIO16(GCLK_BASE + 0x0002)
#define GCLK_GENCTRL            MMIO32(GCLK_BASE + 0x0004)
#define GCLK_GENDIV             MMIO32(GCLK_BASE + 0x0008)

/* GCLK Control Register (GCLK_CTRL) */
#define GCLK_CTRL_SWRST         (0x01 << 0)

/* GCLK Status Register (GCLK_STATUS) */
#define GCLK_STATUS_SYNCBUSY    (0x01 << 7)

/* GCLK Generic Clock Control Register (GCLK_CLKCTRL) */
#define GCLK_CLKCTRL_WRTLOCK    (0x01 << 15)
#define GCLK_CLKCTRL_CLKEN      (0x01 << 14)
#define GCLK_CLKCTRL_GEN        (0x01 << 8)
#define GCLK_CLKCTRL_ID         (0x01 << 0)

/* GCLK Generic Clock Generator Control Register (GCLK_GENCTRL) */
#define GCLK_GENCTRL_RUNSTDBY   (0x01 << 21)
#define GCLK_GENCTRL_DIVSEL     (0x01 << 20)
#define GCLK_GENCTRL_OE         (0x01 << 19)
#define GCLK_GENCTRL_OOV        (0x01 << 18)
#define GCLK_GENCTRL_IDC        (0x01 << 17)
#define GCLK_GENCTRL_GENEN      (0x01 << 16)
#define GCLK_GENCTRL_SRC        (0x01 << 8)
#define GCLK_GENCTRL_ID         (0x01 << 0)

/* GCLK Generic Clock Generator Division Register (GCLK_GENDIV) */
#define GCLK_GENDIV_DIV         (0x01 << 8)
#define GCLK_GENDIV_ID          (0x01 << 0)

/* Constants for Generic Clock Module */
#define GCLK_SRC_XOSC           0x0
#define GCLK_SRC_CLKIN          0x1
#define GCLK_SRC_GCLKGEN1       0x2
#define GCLK_SRC_OSCULP32K      0x3
#define GCLK_SRC_OSC32K         0x4
#define GCLK_SRC_XOSC32K        0x5
#define GCLK_SRC_OSC8M          0x6
#define GCLK_SRC_DFLL48M        0x7
#define GCLK_SRC_FDPLL96M       0x8

#define GCLK_GCLK0              0x0
#define GCLK_GCLK1              0x1
#define GCLK_GCLK2              0x2
#define GCLK_GCLK3              0x3
#define GCLK_GCLK4              0x4
#define GCLK_GCLK5              0x5

#define GCLK_GCLKGEN0           0x0
#define GCLK_GCLKGEN1           0x1
#define GCLK_GCLKGEN2           0x2
#define GCLK_GCLKGEN3           0x3
#define GCLK_GCLKGEN4           0x4
#define GCLK_GCLKGEN5           0x5

#define GCLK_DFLL48M_REF        0x0
#define GCLK_DPLL               0x1
#define GCLK_DPLL32K            0x2
#define GCLK_WDT                0x3
#define GCLK_RTC                0x4
#define GCLK_EIC                0x5
#define GCLK_EVSYS_CHANNEL_0    0x7
#define GCLK_EVSYS_CHANNEL_1    0x8
#define GCLK_EVSYS_CHANNEL_2    0x9
#define GCLK_EVSYS_CHANNEL_3    0xa
#define GCLK_EVSYS_CHANNEL_4    0xb
#define GCLK_EVSYS_CHANNEL_5    0xc
#define GCLK_SERCOMx_SLOW       0xd
#define GCLK_SERCOM0_CORE       0xe
#define GCLK_SERCOM1_CORE       0xf
#define GCLK_TC2                0x12
#define GCLK_ADC                0x13

#endif
