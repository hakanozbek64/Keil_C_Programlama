		 #include<reg51cc01.h>
char x;
void bekle()
{
char i;
for(i=0;i<10;i++)
{
TMOD=0x01;
TH0=0x3C;
TL0=0xB0;
TR0=1;
while(TF0==0);
TF0=0;
}
}

void ileri() interrupt 0
{
x=~x;
}
 char a;
void main()
{  
a=0;
   	x=0;
	P1=0;
	EX0=1;
	EX1=1;
	EA=1;
	IT0=1;
	IT1=1;
	while(1)
	{
		
		if(x==0)
		{
		bekle();
		a++;
		P1=a;			 
		if (a==10) a=0;P1=a;
		}
		else
		{
		bekle();
		a--;
		P1=a;
		if (a==0){ bekle();a=9;P1=a;  }
		}
	
	}
}