/*
 * B2.c
 *
 * Created: 21-2-2018 12:50:12
 * Author : larsv
 */ 

#include <avr/io.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>


ISR(INT1_vect) {
	PORTC <<= 1;
	if(PORTC <= 0x00) {
		PORTC = 0x01;
	}
}

ISR(INT2_vect) {
	PORTC >>= 1;
	if(PORTC <= 0x00) {
		PORTC = 0x80;
	}
}


int main(void)
{
	/* zet de pin (0-3) naar input en pin(4-7) naar output*/
	DDRD  = 0b11110000;
	PORTD = 0b00001111;
	
	/* Zet alle pins van PORTC naar output*/
	DDRC = 0xFF;
	PORTC = 0x01;
	
	//activeert interrupt
	EICRA |= 0b00111100;
	EIMSK |= 0x06;
	
	sei();
	while (1)
	{
		/* schakeld over naar laag energie niveua*/
		sleep_mode();
	}
}

