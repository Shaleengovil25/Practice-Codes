////To find root of given algebraic/transcedental equation in the given/user-input interval using Newton Raphson method. 


#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
 double x0,y1,y2,h;
 int i;
 clrscr();
 printf("enter value of x0\n");
 scanf("%lf",&x0);

 for (i=0;i<10;i++){
  y1=x0*x0-4*x0+2;
 y2=2*x0-4;
 h=(y1/y2);
 x0=x0-h;
  if(y2==0){
   printf("method fails");
   break;
  }
  else{
  printf("x%d= %lf\n",i+1,x0);
 }
 }
 getch();

}
