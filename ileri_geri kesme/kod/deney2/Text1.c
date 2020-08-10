#include<reg51cc01.h>
int x;
void ileri() interrupt 0
{
x++;
}
void geri() interrupt 2
{
x=P1;
x--;
}
 
void main()
{  

	P1=0;
	x=P1;
	EX0=1;
	EX1=1;
	EA=1;
	IT0=1;
	IT1=1;
	while(1)
	{
	P1=x;
	
	}
}