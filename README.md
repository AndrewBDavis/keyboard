Files for my Copam K-430 blue alps project with custom PCB and holtites

Disregard:

To disable the inverted lock led when computer is sleeping, my numlock led is on when num lock is off
Set SLEEP_LED_ENABLE = yes in makefile

Go to tmk_keyboard\tmk_core\common\avr\sleep_led.c

led_set(1<<USB_LED_NUM_LOCK);

    // LED off
    if (timer.pwm.count == pgm_read_byte(&breathing_table[timer.pwm.index])) {
        sleep_led_on();
