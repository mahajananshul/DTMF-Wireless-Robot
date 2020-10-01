#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

int main()
{
DDRA=0X00;
DDRB=0XFF;
 
while(1)
{
if((PINA&0X0F)==0X02)
{
PORTB=0X05;//forward 


}
if((PINA&0X0F)==0X04)
{
PORTB=0X06;//left 

}
if((PINA&0X0F)==0X06)
{
PORTB=0X09;//right 

}
if((PINA&0X0F)==0X08)
{
PORTB=0X0A;//backward 
}

if((PINA&0X0F)==0X05)
{
PORTB=0X00;//stop
}

}
}
