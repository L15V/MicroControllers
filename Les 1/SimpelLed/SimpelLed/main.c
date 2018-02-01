/*
 * SimpelLed.c
 *
 * Created: 1-2-2018 15:36:46
 * Author : larsv
 */ 

#define F_CPU 8000000

#include <avr/io.h>
#include <util/delay.h>

void wait( int ms )

{
	for (int i=0; i<ms; i++)
	{
		_delay_ms( 1 );		// library function (max 30 ms at 8MHz)
	}
}

int main(void)
{
    DDRD = 0b11111111;
    while (1) 
    {
		PORTD = 0xAA;
		wait(250);
		PORTD = 0x55;
		wait(250);
    }
	
	return 1;
}

