#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

typedef struct {

    uint8_t BIT0 : 1;
    uint8_t BIT1 : 1;
    uint8_t BIT2 : 1;
    uint8_t BIT3 : 1;
    uint8_t BIT4 : 1;
    uint8_t BIT5 : 1;
    uint8_t BIT6 : 1;
    uint8_t BIT7 : 1;

} bits_t;


#define DDRA_BITS   (*(volatile bits_t *)&DDRA)
#define PORTA_BITS  (*(volatile bits_t *)&PORTA)
#define PINA_BITS   (*(volatile bits_t *)&PINA)

#define DDRB_BITS   (*(volatile bits_t *)&DDRB)
#define PORTB_BITS  (*(volatile bits_t *)&PORTB)
#define PINB_BITS   (*(volatile bits_t *)&PINB)

#define DDRC_BITS   (*(volatile bits_t *)&DDRC)
#define PORTC_BITS  (*(volatile bits_t *)&PORTC)
#define PINC_BITS   (*(volatile bits_t *)&PINC)

#define DDRD_BITS   (*(volatile bits_t *)&DDRD)
#define PORTD_BITS  (*(volatile bits_t *)&PORTD)
#define PIND_BITS   (*(volatile bits_t *)&PIND)





int main()
{
    DDRD_BITS.BIT0 = 1;

    while (1)
    {
        PORTD_BITS.BIT0 = 1;
        _delay_ms(1000);
        PORTD_BITS.BIT0 = 0;
        _delay_ms(1000);
    }
    return 0;
}
