#include <stdio.h>
#include <conio.h>
#include <math.h>
double f(double x, double y);
void main(){
    double x0,xn,y,h,temp;
    clrscr();
    printf("enter X0,Y0,h,Xn ");
    scanf("%lf%lf%lf%lf",&x0,&y,&h,&xn);
    while(x0<xn){
	temp=y;
	y=y+h*f(x0,y);
	x0=x0+h;
	printf("f(%lf)=>%lf\n",x0,y);
    }
    printf("solution at %lf is %lf",x0,y);
    getch();
}
double f(double x,double y){
    double c;
    c=x+y+x*y;
    return c;

}
