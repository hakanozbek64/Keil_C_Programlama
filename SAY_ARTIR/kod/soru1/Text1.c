#include<reg51cc01.h>
#define display P2
#define Say P3_2
char k,l,m,f;
void gecikme()
{
for(k=0;k<20;k++)
{
TH1=-50000/256;
TL1=-50000%255;
TR1=1;
while(TF1==0);
TF1=0;
}
TR1=0;
}
void geri()
{
m=TL0;

for(f=0;f<m+1;f++)
{
if(TL0>9){TL0=9;}
display=TL0;
gecikme();
TL0--;
}
}
void main()
{
display=0;
TMOD=0x15;
TR0=1;
while(1)
{
if(Say==0){ geri(); }

}

}