/*
 * LedBlink.c
 *
 * Created: 8/29/2023 10:04:35 PM
 * Author : Ritesh
 */ 

#include <avr/io.h>  /* standard libray for avr controller */
#include <util/delay.h> /* standard library for dealy */
#define LED DDRB
#define PORT_PIN_5 PORTB	

int main(void)
{
	LED |= (1 < PD5);	/* DDRD (LED) SETTING AS A OUTPUT */
	
    /* Replace with your application code */
    while (1) 
    {
		PORT_PIN_5 |= (1 << PB5);   /* setting portb 0th pin to 1 (ON) */ 

		_delay_ms(1000);	  /* 1 sec Delay */ 	
		
		PORT_PIN_5 &= (~(1<<PB5)); /* setting portb 0th pin to 0 (OFF) */ 
		
		_delay_ms(1000);
    }
}

