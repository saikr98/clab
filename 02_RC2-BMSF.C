#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{  int stirrupdia, maindia, fy, fck, cc, nb   ;
float Ast,b,d,Beta,D,Deff,Mu,SF,k,Q,Tc,Tv,Tcmax,Pt,Sv,Sv2,p,B,Vc,Vu,As,Asv,Vus;
clrscr();
printf("enter the values of \n  factored Mu,SF in kN-m and kN : ");
scanf("%f %f",&Mu,&SF);
Mu = Mu*1e6;
SF = SF*1e3;
printf("enter values in N &mm for \n fck, fy, clear cover and dia of main reinf : ");
scanf("%d %d %d %d", &fck,&fy,&cc,&maindia);

getfy:
if(fy==250) k=0.53;
else  if(fy==415) k=0.48;
else if(fy==500) k=0.45;
else { printf("revise fy values 250, 415 or 500 only : ");
       scanf("%d  ", &fy);
       goto getfy;
     };

printf("enter bredth of beam : ");
scanf("%f",&b);
Q= 0.36*fck*k*(1-0.42*k);
printf("\n Q = %f \n ", Q);
d=sqrt(Mu/(Q*b));
D=(d+cc+(maindia)/2);
printf("min reqd. overall depth of beam is %f\n",D);
printf(" enter appropriate value of D : ");
scanf("%f",&D);

switch (fck)
{
 case 20: Tcmax=2.8; break;
 case 25: Tcmax=3.1; break;
 case 30: Tcmax=3.5; break;
 case 35: Tcmax=3.7; break;
 default: { if(fck > 35) Tcmax=4.0;}
}

revD:
Deff=D-cc-maindia/2;
Tv=SF/(b*Deff);
if(Tv>Tcmax)
  { printf(" D provided(%f) is inadequate for Shear.\n Enter Increased D: ", D);
    scanf("%f", &D);
    Deff = D-cc-maindia/2;
    goto revD;
  };


Ast= 0.5*fck*b*Deff*(1-sqrt(1 - 4.6*Mu/(fck*b*Deff*Deff)))/fy;
nb = Ast* 4/(3.14*maindia*maindia)+0.99 ;


Ast = nb*3.14*maindia*maindia/4;

Sv = 300;
if(Sv > (0.75*Deff)) Sv=0.75*Deff;

printf("\n enter the dia of reinforcement for stirrups : ");
scanf("%d", &stirrupdia);
Asv = 2*3.14*stirrupdia*stirrupdia/4;
Sv2=((Asv*fy)/(0.4*b));
if(Sv > Sv2) Sv = Sv2;


p= 100*Ast / (b*Deff);
Beta= 0.8*fck / (6.89*p);
if(Beta<1) Beta=1;
Tc=(0.85*sqrt(0.8*fck)*(sqrt(1+5*Beta)-1)/(6*Beta));

if(Tc<Tv)
  {
   Vc=Tc*b*Deff;
   Vus=SF-Vc;
   Sv2= 0.87*fy*Asv*Deff/Vus;
  };
if(Sv > Sv2) Sv=Sv2;

printf(" \n\n  dim of beam   B = %6.1f mm     D = %6.1f mm", b, D);
printf("\n  Ast,reqd = %8.1f mm2 \n  provide %3d number of %2d mm dia bars.\n",
	 Ast, nb, maindia);
printf("as flexural reinforcement\n");
printf("\n Provide 2-legged %3d mm  dia stirrups at %5.1f mm spacing",
	     stirrupdia,Sv);
getch();
}




