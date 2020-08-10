#include<reg51cc01.h>
#define display P2
void artir()
{
 	if(display==9){display=0;}
	else{ display++;}
}
void main()
{
	TMOD=0x06;
	display=0;
	ET0=0;
	TR0=1;
	while(1)
	{	
		TL0=246;
		while(TF0==0);
		TF0=0;
		artir();
	}  
}
