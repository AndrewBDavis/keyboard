/*
Copyright 2011 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stdint.h"
#include "ps2.h"
#include "led.h"
#include "hook.h"
#include "action.h"
#include "actionmap.h"

void led_set(uint8_t usb_led)
{
    uint8_t ps2_led = 0;
/*	if (ps2_led |= (1<<PS2_LED_NUM_LOCK))
		usb_led &  (1<<USB_LED_NUM_LOCK);
*/	
	if (usb_led &  (1<<USB_LED_SCROLL_LOCK))
		ps2_led |= (1<<PS2_LED_SCROLL_LOCK);

	if (usb_led &  (1<<USB_LED_CAPS_LOCK))
		ps2_led |= (1<<PS2_LED_CAPS_LOCK);
	
    ps2_host_set_led(ps2_led);
}
#define AC_L0       ACTION_LAYER_MOMENTARY(0)
#define AC_L1       ACTION_LAYER_MOMENTARY(1)
#define AC_L2       ACTION_LAYER_TOGGLE(2)

void hook_layer_change(uint32_t layer_state)
{
	uint32_t ps2_led = 0;
	
	if (layer_state & (1L<<2))
		ps2_led |= (1<<PS2_LED_NUM_LOCK);
	else 
		ps2_led &= ~(1<<PS2_LED_NUM_LOCK);	
	ps2_host_set_led(ps2_led);
}