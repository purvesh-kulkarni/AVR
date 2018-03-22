#define F_CPU 16000000L

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	
	//DDRB=0x20;
	DDRB=0b00100000;
	PORTB=0;
    /* Replace with your application code */
    while (1) 
    {
		//PORTB=0x20;
		PORTB=0b00100000;
		_delay_ms(1000);
		PORTB=0;
		_delay_ms(1000);
    }
}

