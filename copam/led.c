#include <avr/io.h>
#include "stdint.h"
#include "led.h"

void led_set(uint8_t usb_led) {
//    led_set_user(usb_led);
	if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        // Turn num lock on
	    PORTB &= ~(1<<5);
    } else {
        // Turn numlock off
		PORTB |= (1<<5);
    }
	 if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
        // Turn scroll lock on
	    PORTB |= (1<<6);
    } else {
        // Turn scroll lock off
		PORTB &= ~(1<<6);
    }
	if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // Turn caps lock on
		PORTB |= (1<<7);
    } else {
        // Turn caps lock off
		PORTB &= ~(1<<7);
    }
}

/* To disable the lit numlock led when computer is sleeping:
Set SLEEP_LED_ENABLE = yes in makefile

Go to tmk_keyboard\tmk_core\common\avr\sleep_led.c

led_set(1<<USB_LED_NUM_LOCK);

static const uint8_t breathing_table[64] PROGMEM = {
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,};
*/
