// To find lcm & hcf of 2 numbers:

#include<stdio.h>

int gcd (int a, int b){
    if (a == 0){
       return b;
    }
    return gcd(b % a, a);
}

int lcm (int a, int b){
    int c = ((a*b)/gcd(a,b));
    return c;
}

void main() {
    int a,b;
printf("Enter 2 numbers\n");
scanf("%d%d",&a,&b);
printf("LCM:%d\n",lcm(a, b));
printf("HCF:%d",gcd(a, b));
}
