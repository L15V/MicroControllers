/*
 * B2.c
 *
 * Created: 29-3-2018 11:40:53
 * Author : larsv
 */ 

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRF = 0x00;
	DDRA = 0xFF;
	DDRB = 0xFF;

	ADMUX	= 0b01100000;
	ADCSRA	= 0b10000110;
	
	while (1)
	{
		ADCSRA |= (1<<6);
		while ( ADCSRA & (1<<6)) ;
		PORTA = ADCH;
		PORTB = ADCL;
	}
}

