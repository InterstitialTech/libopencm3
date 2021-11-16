#ifndef SAMD_SPI_H
#define SAMD_SPI_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* ---- Universal Synchronous Asynchronous Receiver Transmitter (SPI) */
#define SPI_CTRLA(x)              MMIO32((x) + 0x0000)
#define SPI_CTRLB(x)              MMIO32((x) + 0x0004)
#define SPI_BAUD(x)               MMIO8((x) + 0x000C)
#define SPI_INTENCLR(x)           MMIO8((x) + 0x0014)
#define SPI_INTENSET(x)           MMIO8((x) + 0x0016)
#define SPI_INTFLAG(x)            MMIO8((x) + 0x0018)
#define SPI_STATUS(x)             MMIO16((x) + 0x001A)
#define SPI_SYNCBUSY(x)           MMIO32((x) + 0x001C)
#define SPI_ADDR(x)               MMIO32((x) + 0x0024)
#define SPI_DATA(x)               MMIO16((x) + 0x0028)
#define SPI_DBGCTRL(x)            MMIO8((x) + 0x0030)

/* SPI Control Register A (SPI_CTRLA) */
#define SPI_CTRLA_DORD            (0x01 << 30)
#define SPI_CTRLA_CPOL            (0x01 << 29)
#define SPI_CTRLA_CPHA            (0x01 << 28)
#define SPI_CTRLA_FORM            (0x01 << 24)
#define SPI_CTRLA_DIPO            (0x01 << 20)
#define SPI_CTRLA_DOPO            (0x01 << 16)
#define SPI_CTRLA_IBON            (0x01 << 8)
#define SPI_CTRLA_RUNSTDBY        (0x01 << 7)
#define SPI_CTRLA_MODE            (0x01 << 2)
#define SPI_CTRLA_ENABLE          (0x01 << 1)
#define SPI_CTRLA_SWRST           (0x01 << 0)

/* SPI Control Register B (SPI_CTRLB) */

#define SPI_CTRLB_RXEN            (0x01 << 17)
#define SPI_CTRLB_AMODE           (0x01 << 14)
#define SPI_CTRLB_MSSEN           (0x01 << 13)
#define SPI_CTRLB_SSDE            (0x01 << 9)
#define SPI_CTRLB_PLOADEN         (0x01 << 6)
#define SPI_CTRLB_CHSIZE          (0x01 << 0)

/* SPI Baud Register (SPI_BAUD) */

#define SPI_BAUD_BAUD             (0x01 << 0)

/* SPI Interupt Enable Clear Register (SPI_INTENCLR) */

#define SPI_INTENCLR_ERROR        (0x01 << 7)
#define SPI_INTENCLR_SSL          (0x01 << 3)
#define SPI_INTENCLR_RXC          (0x01 << 2)
#define SPI_INTENCLR_TXC          (0x01 << 1)
#define SPI_INTENCLR_DRE          (0x01 << 0)

/* SPI Interupt Enable Set Register (SPI_INTENSET) */

#define SPI_INTENSET_ERROR        (0x01 << 7)
#define SPI_INTENSET_SSL          (0x01 << 3)
#define SPI_INTENSET_RXC          (0x01 << 2)
#define SPI_INTENSET_TXC          (0x01 << 1)
#define SPI_INTENSET_DRE          (0x01 << 0)

/* SPI Interupt Enable Flag Status and Clear Register (SPI_INTFLAG) */

#define SPI_INTFLAG_ERROR         (0x01 << 7)
#define SPI_INTFLAG_SSL           (0x01 << 3)
#define SPI_INTFLAG_RXC           (0x01 << 2)
#define SPI_INTFLAG_TXC           (0x01 << 1)
#define SPI_INTFLAG_DRE           (0x01 << 0)

/* SPI Status Register (SPI_STATUS) */

#define SPI_STATUS_BUFOVF         (0x01 << 2)

/* SPI Synchronization Busy Register (SPI_SYNCBUSY) */

#define SPI_SYNCBUSY_CTRLB        (0x01 << 2)
#define SPI_SYNCBUSY_ENABLE       (0x01 << 1)
#define SPI_SYNCBUSY_SWRST        (0x01 << 0)

/* SPI Address Register (SPI_ADDR) */

#define SPI_ADDR_ADDRMASK         (0x01 << 16)
#define SPI_ADDR_ADDR             (0x01 << 0)

/* SPI Data Register (SPI_DATA) */

#define SPI_DATA_DATA             (0x01 << 0)

/* SPI Debug Control Register (SPI_DBGCTRL) */

#define SPI_DBGCTRL_DBGSTOP       (0x01 << 0)

#endif
