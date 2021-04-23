/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB=00000001;
    DDRD |= 0 << PIND0;
    DDRD |= 0 << PIND1;
    PORTD |= 1 << PIND1;
    PORTD |= 1 << PIND0;
    // Insert code

    while(1)
    {
       // if(!(PIND0&(1<<PD0)))
       if(bit_is_clear(PIND, 0))
        {

            if(bit_is_clear(PIND, 1))
            {
              PORTB=0b00000001;
              _delay_ms(20);
            }
            else
            {
            PORTB=0b00000000;
             _delay_ms(2000);

            }
        }
        else
        {
            PORTB=0b00000000;
             _delay_ms(2000);

        }

    }
    return 0;
}
