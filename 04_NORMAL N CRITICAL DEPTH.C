#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float b,yn,p,Q,z,k,yc,g,H,I,s,n,j;
clrscr();
printf("enter the values of b,Q,z,s,n :  ");
scanf("%f %f %f %f %f",&b,&Q,&z,&s,&n);
for(yn=0.1;yn<=100;yn+=0.2)
{
j=(pow(s,0.5))/n;
k=j*pow((yn*(b+(z*yn))),1.66)/pow((b+2*yn*(sqrt(1+(z*z)))),0.66);
p=100*(Q-k)/Q;
if(p>=99.5)
printf("normal depth is %f",yn);
}
for(yn=0.1;yc<=100;yc+=0.2)
{
I=(sqrt(pow(yc*(b+z*yc),3)/(b+2*z*yc)));
H=100*(Q-I)/Q;
if(H>=99.5)
printf("critical depth is %f",yc);
}
getch();
}




