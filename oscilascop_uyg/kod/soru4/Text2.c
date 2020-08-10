#include<reg51cc01.h>

void main()
{

	TMOD=0x22;
	ET0=0; ET1=0;
	TH0=236;TH1=156;
	TR0=1;TR1=1;
	while(1)
	{
 		if(TF0==0){}
		else{ 
				TF0=0;
				P1_0=~P1_0;
			}
		if(TF1==0){}
		else{ TF1=0;P1_6=~P1_6;}
	}
}