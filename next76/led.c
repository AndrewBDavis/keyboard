#include <avr/io.h>
#include "stdint.h"
#include "led.h"

void led_set(uint8_t usb_led) {
/*
	if (usb_led & (1<<USB_LED_NUM_LOCK)) {
		PORTB |= (1<<5);	// Turn num lock on
    } else {
		PORTB &= ~(1<<5);	// Turn numlock off
    }
*/
	if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
		PORTB |= (1<<6);	// Turn caps lock on
    } else {
		PORTB &= ~(1<<6);	// Turn caps lock off
    }
    
	if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
		PORTB |= (1<<7);	// Turn num lock on
    } else {
		PORTB &= ~(1<<7);	// Turn num lock off
    }
}

void hook_layer_change(uint32_t layer_state) //num lock layer turns on when layer 2 is active
{
	if (layer_state & (1L<<2))
		PORTB |= (1<<5);
	else 
		PORTB &= ~(1<<5);

}
