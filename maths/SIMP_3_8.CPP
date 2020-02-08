#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
double a,b,n,h,s,area;
double v[10],f[10];
int i;
clrscr();
printf("enter lower limit,upper limit and number of intervals");
scanf("%lf%lf%lf",&a,&b,&n);
h=(b-a)/n;
v[0]=a;
for(i=0;i<=n;i++){
v[i+1]=v[i]+h;
//printf("%lf\n",v[i]);
}
for(i=0;i<=n;i++){
f[i]=1/(1+v[i]*v[i]);
printf("f(%lf)=>%lf\n",v[i],f[i]);
}
s=f[0]+f[n];
for(i=1;i<=n-1;i++){
if(i%3==0){
s=s+2*f[i];
}
else{
s=s+3*f[i];
}
}
area=(3*h/8)*s;
printf("area under curve is:%lf",area);

getch();
}
