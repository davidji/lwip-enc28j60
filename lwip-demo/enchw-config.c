/* SD hardware configuration for the Olimex MOD-ENC28J60 as wired through the
 * custom cable to a EFM32STK board */

#include "board.h"

#define SS_PORT EXT7_PORT
#define SS_PIN EXT7_PIN
#define MOSI_PORT EXT4_PORT
#define MOSI_PIN EXT4_PIN
#define MISO_PORT EXT6_PORT
#define MISO_PIN EXT6_PIN
#define SCK_PORT EXT8_PORT
#define SCK_PIN EXT8_PIN

#define USART EXT_USART
#define USART_CLOCK EXT_USART_CLOCK
#define USART_LOCATION EXT_USART_LOCATION
