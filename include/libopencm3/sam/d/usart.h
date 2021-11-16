#ifndef SAMD_USART_H
#define SAMD_USART_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/* ---- Universal Synchronous Asynchronous Receiver Transmitter (USART) */
#define USART_CTRLA(x)              MMIO32((x) + 0x0000)
#define USART_CTRLB(x)              MMIO32((x) + 0x0004)
#define USART_BAUD(x)               MMIO16((x) + 0x000C)
#define USART_RXPL(x)               MMIO8((x) + 0x000E)
#define USART_INTENCLR(x)           MMIO8((x) + 0x0014)
#define USART_INTENSET(x)           MMIO8((x) + 0x0016)
#define USART_INTFLAG(x)            MMIO8((x) + 0x0018)
#define USART_STATUS(x)             MMIO16((x) + 0x001A)
#define USART_SYNCBUSY(x)           MMIO32((x) + 0x001C)
#define USART_DATA(x)               MMIO16((x) + 0x0028)
#define USART_DBGCTRL(x)            MMIO8((x) + 0x0030)

/* USART Control Register A (USART_CTRLA) */
#define USART_CTRLA_DORD            (0x01 << 30)
#define USART_CTRLA_CPOL            (0x01 << 29)
#define USART_CTRLA_CMODE           (0x01 << 28)
#define USART_CTRLA_FORM            (0x01 << 24)
#define USART_CTRLA_SAMPA           (0x01 << 22)
#define USART_CTRLA_RXPO            (0x01 << 20)
#define USART_CTRLA_TXPO            (0x01 << 16)
#define USART_CTRLA_SAMPR           (0x01 << 13)
#define USART_CTRLA_IBON            (0x01 << 8)
#define USART_CTRLA_RUNSTDBY        (0x01 << 7)
#define USART_CTRLA_MODE            (0x01 << 2)
#define USART_CTRLA_ENABLE          (0x01 << 1)
#define USART_CTRLA_SWRST           (0x01 << 0)

/* USART Control Register B (USART_CTRLB) */

#define USART_CTRLB_RXEN            (0x01 << 17)
#define USART_CTRLB_TXEN            (0x01 << 16)
#define USART_CTRLB_PMODE           (0x01 << 13)
#define USART_CTRLB_ENC             (0x01 << 10)
#define USART_CTRLB_SFDE            (0x01 << 9)
#define USART_CTRLB_COLDEN          (0x01 << 8)
#define USART_CTRLB_SBMODE          (0x01 << 6)
#define USART_CTRLB_CHSIZE          (0x01 << 0)

/* USART Baud Register (USART_BAUD) */

#define USART_BAUD_FP               (0x01 << 13)
#define USART_BAUD_BAUD             (0x01 << 0)

/* USART Receive Pulse Length Register (USART_RXPL) */

#define USART_RXPL_RXPL             (0x01 << 0)

/* USART Interupt Enable Clear Register (USART_INTENCLR) */

#define USART_INTENCLR_ERROR        (0x01 << 7)
#define USART_INTENCLR_RXBRK        (0x01 << 5)
#define USART_INTENCLR_CTSIC        (0x01 << 4)
#define USART_INTENCLR_RXS          (0x01 << 3)
#define USART_INTENCLR_RXC          (0x01 << 2)
#define USART_INTENCLR_TXC          (0x01 << 1)
#define USART_INTENCLR_DRE          (0x01 << 0)

/* USART Interupt Enable Set Register (USART_INTENSET) */

#define USART_INTENSET_ERROR        (0x01 << 7)
#define USART_INTENSET_RXBRK        (0x01 << 5)
#define USART_INTENSET_CTSIC        (0x01 << 4)
#define USART_INTENSET_RXS          (0x01 << 3)
#define USART_INTENSET_RXC          (0x01 << 2)
#define USART_INTENSET_TXC          (0x01 << 1)
#define USART_INTENSET_DRE          (0x01 << 0)

/* USART Interupt Enable Flag Status and Clear Register (USART_INTFLAG) */

#define USART_INTFLAG_ERROR         (0x01 << 7)
#define USART_INTFLAG_RXBRK         (0x01 << 5)
#define USART_INTFLAG_CTSIC         (0x01 << 4)
#define USART_INTFLAG_RXS           (0x01 << 3)
#define USART_INTFLAG_RXC           (0x01 << 2)
#define USART_INTFLAG_TXC           (0x01 << 1)
#define USART_INTFLAG_DRE           (0x01 << 0)

/* USART Status Register (USART_STATUS) */

#define USART_STATUS_COLL           (0x01 << 5)
#define USART_STATUS_ISF            (0x01 << 4)
#define USART_STATUS_CTS            (0x01 << 3)
#define USART_STATUS_BUFOVF         (0x01 << 2)
#define USART_STATUS_FERR           (0x01 << 1)
#define USART_STATUS_PERR           (0x01 << 0)

/* USART Synchronization Busy Register (USART_SYNCBUSY) */

#define USART_SYNCBUSY_CTRLB        (0x01 << 2)
#define USART_SYNCBUSY_ENABLE       (0x01 << 1)
#define USART_SYNCBUSY_SWRST        (0x01 << 0)

/* USART Data Register (USART_DATA) */

#define USART_DATA_DATA             (0x01 << 0)

/* USART Debug Control Register (USART_DBGCTRL) */

#define USART_DBGCTRL_DBGSTOP       (0x01 << 0)

#endif
