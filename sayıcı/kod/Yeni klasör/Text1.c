#include<reg51cc01.h>
#define sayýcý P1

void main()
{
int a=0;
int b=0;
TL0=0;
TMOD=0x05;
TR0=1;
sayýcý=0;
while(1)
{
if(TL0==10){TL0=0; b+=16;}
a=TL0;
if((a+b)>0x99) {a=0;b=0;}
sayýcý=a+b;
}
}