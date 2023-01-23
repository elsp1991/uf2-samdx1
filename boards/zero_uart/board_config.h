#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "Arduino LLC"
#define PRODUCT_NAME "Arduino Zero"
#define VOLUME_LABEL "ZEROBOOT"

#define BOARD_ID "SAMD21G18A-Zero-v0"

//#define USB_VID 0x2341
//#define USB_PID 0x024D

#define LED_PIN PIN_PA17
#define LED_TX_PIN PIN_PA27
#define LED_RX_PIN PIN_PB03


#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD2
#define BOOT_USART_PAD3                   PINMUX_PA11C_SERCOM0_PAD3 
#define BOOT_USART_PAD2                   PINMUX_PA10C_SERCOM0_PAD2 
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
