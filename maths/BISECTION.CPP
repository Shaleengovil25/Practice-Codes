//To find root of given algebraic/transcendental equation in the given/user-input interval using bisection method. 

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
double a,b,c,y1,y2,y3;
int i;
printf("enter the interval: a and b\n");
scanf("%lf%lf",&a,&b);
y1=a*a-4*a+2;
y2=b*b-4*b+2;

if(y1*y2>0){
printf("no root or more than 1 root lies, try another interval");
}
else{
for(i=0;i<10;i++){
c=(a+b)/2;
y3=c*c-4*c+2;
if(y3==0.0){
break;
}
else if(y1*y3<0){
b=c;
}
else{
 a=c;
 }
 printf("iteration %d :%lf\n",i+1,c);
  }
  printf("\n");
  printf("root of x*x-4*x+2 in interval a and b is: %lf",c);
 }
 getch();
 }


