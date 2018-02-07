/*
 * B.2.c
 *
 * Created: 1-2-2018 16:33:24
 * Author : larsv
 */ 
#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

void wait( int ms ){
	for (int i=0; i<ms; i++)
	{
		_delay_ms( 1 );
	}
}

int main(void)
{
    /* Replace with your application code */
	DDRD = 0b11111111;
    while (1) 
    {
		PORTD = 0b10000000;
		wait(500);
		PORTD = 0b01000000;
		wait(500);
    }
	return 1;
}

