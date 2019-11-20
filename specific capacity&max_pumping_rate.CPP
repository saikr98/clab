#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float q,ho,h,hw,sc;
printf("enter the discharge,max height of well,initial height of water,final height");
scanf("%f %f %f %f",&q,&ho,&h,&hw);
sc=(q)/(ho-h);
printf("specific capacity of well %f",sc);
getch();
}

