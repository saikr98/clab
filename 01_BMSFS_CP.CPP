
// Computation of SF & BM in a simply supported beam with no overhangs
//  Due to part UDL
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{ clrscr();
  float span,w,a,b,sf,bm,x,ra,rb;
  printf("\n input span, udl,start-distance & end-distance in kN & m units: ");
  scanf("%f %f %f %f", &span, &w, &a, &b);
  printf("\n input distance where sf & bm are required in m units : ");
  scanf("%f", &x);
  if(b>span)
    {printf("\n end distance is taken as span \n");
     b=span;
    };
  if(a>span)
    {printf("start distance is taken as 0 \n");
     a=0;
    };
  rb = w*(b-a)*(a+b)/(2*span);
  ra = w*(b-a) - rb;
   if(x<a)
    { sf = ra;
      bm = ra*x;}
  else if(x<b)
    { sf = ra-w*(x-a);
      bm = ra*x - w*(x-a)*(x-a)/2 ;}
 else
   { sf = -rb ;
     bm = rb*(span-x);}
;

printf("\n\n SF = %7.2fkN    BM = %7.2f kN-m  at distance of %5.2fm \n ",sf,bm,x);
getch();
}

