#include <stdio.h>

int main()
{
    int k,r,n,rev;
    printf("Enter a number:\n");
    scanf("%d",&k);
    rev = 0;
    n = k;
    while(n!=0){
        r = n%10;
        rev = rev *10 + r;
        n = n/10;
    }
    
    if(k == rev){
        printf("yes,%d is a pallindrome",rev );    
    }
    else{
        printf("no,%d is not a pallindrome",k);
    }

    return 0;
}
