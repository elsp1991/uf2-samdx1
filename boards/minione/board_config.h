#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Adafruit Industries"
#define PRODUCT_NAME "Minione UART SERCOM1 ALT"
#define VOLUME_LABEL "MINIONEBOOT"
#define INDEX_URL "http://adafru.it/3727"
#define BOARD_ID "SAMD21E18A-MINIONE-v0"

#define USB_VID 0x239A
#define USB_PID 0x000F

#define LED_PIN PIN_PA05

#define BOOT_USART_MODULE                 SERCOM1
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM1
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD3_TX_PAD2
#define BOOT_USART_PAD3                   PINMUX_PA31D_SERCOM1_PAD3 
#define BOOT_USART_PAD2                   PINMUX_PA30D_SERCOM1_PAD2 
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM1_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM1_GCLK_ID_SLOW

#endif
