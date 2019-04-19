#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "ItsyBitsy M0 Express UART SERCOM0"
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
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA09C_SERCOM0_PAD1 //Pin D3 on ItsyBitsy M0 -> HOST TXO
#define BOOT_USART_PAD0                   PINMUX_PA08C_SERCOM0_PAD0 //Pin D4 on ItsyBitsy M0 -> HOST RXI
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
