#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float L, H, Cd, A, g,Va, ha, d1, d2, P, M;
clrscr();
printf("enter length of weir, Head, Wetted c/s area, Cd");
scanf("%f %f %f %f %f", &L, &H, &A, &Cd);
g=9.81;
d1=1.705*Cd*L*M*1.5;
get d2:
Va = d1/A;
ha = V*a*a/2*g;
d2=1.705*Cd*L*[(H+ha)*1.5-ha*1.5];
P=d2-d1/d1*100;
if(P>1)
{
d1=d2;
goto d2
}
printf("max discharge considering velocity approach is %f", &d2);
getch();
}
}

