/*
 * B.4.c
 *
 * Created: 7-2-2018 09:50:12
 * Author : larsv
 */ 

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

void wait(int ms) {
	for(int i = 0; i < ms; i++) {
		_delay_ms(1);
	}
}

int main(void)
{
	/* Replace with your application code */
	DDRD = 0xFF;
	while (1)
	{
		PORTD = 0x01;
		while(PORTD != 0) {
			wait(50);
			PORTD <<= 1;
		}
	}
}


