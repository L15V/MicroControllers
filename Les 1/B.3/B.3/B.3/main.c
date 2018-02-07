/*
 * B.3.c
 *
 * Created: 1-2-2018 16:46:33
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
    DDRD = 0b11111111;
	DDRC = 0b00000000;
    while (1) 
    {
		if((PINC & 0b00000001) == 1){
			PORTD = 0b10000000;
			wait(250);
			PORTD = 0b00000000;
			wait(250);
		}
		else {
			PORTD = 0b00000000;
			wait(500);
		}
    }
	return 1;
}

