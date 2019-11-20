/*pre and post jump depth*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float ratio,Q,S,V,N,R,C,Qk,Vk,m,A,P,B,D;
clrscr();
printf("enter Q,S,N,m");
scanf("%f %f %f %f",&Q,&S,&N,&m);
D = 0;
do
{ D = D+0.1;
V=0.546*m*pow(D,0.64);
A=Q/V;
B=(A/D)-(D/2);
P=B+D*sqrt(5);
R=A/P;
C=46.8;
Vk=C*sqrt(R*S);
Qk=A*Vk;
ratio= Qk/Q;
} while(ratio < 1);
printf(" depth = %f", D);
getch();
}