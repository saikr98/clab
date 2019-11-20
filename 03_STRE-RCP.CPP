 // stress at a point in rectugular section subjected to eccentic load
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
void main()
{ char ans;
  float load, ex, ey, b, d, x, y, stress;
 clrscr();
 printf("\n  input load, eccentricities about x & y axes in kN & mm units : ");
 scanf("%f %f %f", &load, &ex, &ey);
 printf("\n  input breadth and depth of rectangle : ");
 scanf("%f %f", &b, &d);
 printf("\n Center of Rectangul is Origin(ie., (0,0) point" );
 REP:
 printf("\n input the coordinates of point where stress is reqd.: ");
 scanf("%f %f", &x, &y);

 if((x<(-b/2)) || (x>(b/2)))
  {printf( "\n  x error  : ");  goto REP;} ;
 stress =1000*load/(b*d) * (1 + 12*ex*y/(b*b) + 12*ey*x/(d*d) );
 printf("\n Stress at the point = %9.4f N/mm2 ", stress);
 printf("\n  want at another point? ( y or n) :   ");
 scanf("%s", &ans);
 if(ans=='y') goto REP;
}