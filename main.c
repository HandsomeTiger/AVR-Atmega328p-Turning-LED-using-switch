// Atmega328p  
// This program is for turning LED using switch for input.
// In order to use switch you need to design the circuit with pull up resistance to avoid any noise.

#include <avr/io.h>
#include <util/delay.h>

void INIT_PORT(void) {
	PORTB = 0x20;
	DDRB = 0x20;
	PORTD = 0x00;
	DDRD = 0x00;
}

int main(void)
{
    /* Replace with your application code */
	INIT_PORT();
	while(1){
		if(PIND & 0X04){
			PORTB = 0x00;
		}
		else 
			PORTB = 0x20;
	}
}

