#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
double a,b,y1,y2,n,h,s,A;
int i;
clrscr();
printf("enter the limits and interval a,b,n resp.");
scanf("%lf%lf%lf",&a,&b,&n);
h=(b-a)/n;
y1=a*a-4*a+2;
y2=b*b-4*b+2;
s=y1+y2;
for(i=1;i<n;i++){
  s+=2*((a+(i*h))*(a+(i*h))-4*(a+(i*h))+2);
}
A=(h/2)*s;
printf("area under curve is: %lf",A);
getch();
}
