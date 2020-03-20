// given:                        TO find:
// dy/dx=x+y+x*y                  y(0.1)     
// y(0)=1
// h=0.025

#include <stdio.h>
#include <conio.h>
#include <math.h>
double f(double x, double y);
void main(){
    double x0,xn,y,h,temp,k1,k2,k3,k4;
    clrscr();

    printf("enter X0,Y0,h,Xn ");
    scanf("%lf%lf%lf%lf",&x0,&y,&h,&xn);
    while(x0<xn){
	temp=y;
	    k1 = h*f(x0, y);
	k2 = h*f(x0 + 0.5*h, y + 0.5*k1);
	k3 = h*f(x0 + 0.5*h, y + 0.5*k2);
	k4 = h*f(x0 + h, y + k3);

	y = y + (k1 + 2*k2 + 2*k3 + k4)/6.0;
	x0 = x0 + h;

	printf("f(%lf)=>%lf\n",x0,y);
    }
    printf("solution at x = %lf is %lf",x0,y);
    getch();
}
double f(double x,double y){
    double c;
    c=(x+y+x*y);
    return c;

}
