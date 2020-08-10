#include <reg51cc01.h>
#define Led P2
  char a;
 
void bekle()
{	 
 	for(a=0;a<20;a++)
	{
	TH0=-50000/256;
	TL0=-50000%255;
	TR0=1;
	while(TF0==0);
	TF0=0;
	}
}
void binary()
{	
	 Led=Led+1;
	 
}
void yuruyen()
{
     if(Led==128){Led=1;}
	 Led=Led*2;
	 
	 
}
char x;
void main()
{
	TMOD=0x01;
	x=0;
	while(1)
	{	if(P1_0==0){ x=~x; }
	if(x==0){binary();}
	else{ yuruyen();}
	bekle();
 	}
}