#include <xc.h>
#include<pic.h>
#define _XTAL_FREQ 20000000
int main()
{
 TRISB=0x00;
 PORTB=0x00;
 while(1)
 {
 RB0=1;RB1=0;RB2=0;RB5=0;RB6=0;RB7=1;
 __delay_ms(1000);
 RB0=0;RB1=1;RB2=0;RB5=0;RB6=0;RB7=1;
 __delay_ms(1000);
 RB0=0;RB1=0;RB2=1;RB5=1;RB6=0;RB7=0;
 __delay_ms(1000);
 RB0=0;RB1=0;RB2=1;RB5=0;RB6=1;RB7=0;
 __delay_ms(1000);
 RB0=1;RB1=0;RB2=0;RB5=0;RB6=0;RB7=1;
 __delay_ms(1000);
 
 }
}
