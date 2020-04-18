// To find whether a given number is strong or not.
// The number whose sum of the factorial of its digits is equal to number itself is called a strong number.
// Eg: 145, 1!+4!+5! = 145 

#include <stdio.h>
int fact(int r){
    int x = 1;
    for(int i =1; i<=r; i++){
        x *= i;
    }
    return x;
}
int main(){
    
    int k,sum,r,n,f;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    sum = 0;
    k = n;
    while(k!=0){
        r = k%10;
        f =  fact(r);
        sum += f;
        k = k/10;
    }
    
    if (n == sum){
        printf("yes, %d is a Strong Number",n);
    }
    else{
        printf("No, %d is not a Strong Number",n);
    }
    
    
    return 0;
}


// To find strong number below n.

#include<stdio.h>

int fact(int r){
int x = 1;
for(int k=1; k<=r; k++){
x*=k;
}
return x;
}

void main() {
int n,i,r,f,j ;
int sum = 0;

scanf("%d",&n);
printf("Strong number below %d are\n",n);
for(i=1;i<n;i++){
j = i;
while(j!=0){
r = j%10;
f = fact(r);
sum +=f;
j = j/10;
}
if(i == sum){
printf("%d\n",i);
}
sum = 0;
}

}
