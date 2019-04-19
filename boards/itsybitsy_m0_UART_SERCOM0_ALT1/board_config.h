#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "ItsyBitsy M0 Express UART SERCOM0 ALT"
#define VOLUME_LABEL "ITSYUART"
#define INDEX_URL "http://adafru.it/3727"
#define BOARD_ID "SAMD21G18A-ItsyBitsy-v0"

#define USB_VID 0x239A
#define USB_PID 0x000F

#define LED_PIN PIN_PA17

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA00
#define BOARD_RGBLED_DATA_PIN             PIN_PA01

#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD2
#define BOOT_USART_PAD3                   PINMUX_PA11C_SERCOM0_PAD3 //Pin D0/RX on ItsyBitsy M0 -> HOST TXO
#define BOOT_USART_PAD2                   PINMUX_PA10C_SERCOM0_PAD2 //Pin D1/TX on ItsyBitsy M0 -> HOST RXI
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
