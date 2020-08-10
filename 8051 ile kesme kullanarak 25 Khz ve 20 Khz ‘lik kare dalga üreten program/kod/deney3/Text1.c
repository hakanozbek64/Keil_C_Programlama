		   #include <reg51.h>
sbit P1_0 = P1^0;
sbit P1_7 = P1^7;
void x(void) interrupt 1 /* timer 0 interrupt */
{ P1_0 =~P1_0;
}
void y(void) interrupt 3 /* timer 0 interrupt */
{ P1_7 =~P1_7;
}
void main (void)
{
TMOD = 0x22; /* 8 bit oto. Yük. mod seç */
TH0 = 231;
TH1 = 236; /* Oto. Yük. deðeri 50 mikrosaniye*/
TR0 = 1;
TR1 = 1; /* T0’ý baþlat */
EA = 1; /* global interrupt enable */
ET0 = 1;
ET1 = 1; /* zamanlayýcý kesmesi devrede */
while(1); /* Sonsuz döngü */
}