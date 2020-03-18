// Take account of all possible corner cases.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int f= 1.0;
    int i;
    char term;
    printf("Enter number to calculate factorial");
    if(scanf("%d%c", &n, &term) != 2 || term != '\n'){
         printf("error- enter integer\n");
         exit(0);
    }
    
    if(n<0){
        printf(" error- enter positive integer");
    }
    else {
    for(i=1;i<=n;i++){
        f=f*i;
    }
         
    printf("%d!= %d",n,f);
        }
    return 0;
}
