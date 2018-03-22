#define F_CPU 16000000L // set the clock at 16MHz

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{	
	DDRB=0b00100000; // Set Direction as output using DDRB register (Pin 5)
	PORTB=0; // Set all pins of PORTB as low.
	
    while (1) 
    {
		PORTB=0b00100000; // Set pin 5 of PORTB as HIGH
		_delay_ms(1000); // delay 1 sec
		PORTB=0;	// Set pin 5 of PortB as low	
		_delay_ms(1000); // Delay 1 sec
    }
}

