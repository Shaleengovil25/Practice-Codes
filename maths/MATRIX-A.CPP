// Menu-driven programm to perform matrix algebra.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void display (int arr1[3][3], int arr2[3][3]);
int add      (int arr1[3][3], int arr2[3][3]);
int subtract (int arr1[3][3], int arr2[3][3]);
int transpose(int arr1[3][3], int arr2[3][3]);
int multiply (int arr1[3][3], int arr2[3][3]);

// Global Declaration
int i,j;
int arr1[3][3], arr2[3][3], arr3[3][3] ;
void main() {
    int x;
    clrscr();
    printf("enter elements of matrix-1\n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    scanf("%d",&arr1[i][j]);
	}
    }
    printf("enter elements of matrix-2\n");
    for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	    scanf("%d",&arr2[i][j]);
	}
    }

do
   {
       printf("Enter choice:\n 1)Addition\n 2)Subtraction\n 3)Transpose\n 4)Multiplication\n 5)Display\n defaultexit\n");
       scanf("%d",&x);
 	switch(x)
	{
	case 1: add (arr1,arr2);
		break;
	case 2: subtract(arr1,arr2);
		break;
	case 3: transpose(arr1,arr2);
		break;
	case 4: multiply(arr1,arr2);
		break;
	case 5: display(arr1,arr2);
		break;
	default:exit(0);
	}
   }
while(x<6) ;

    getch();
}

                                                   //   --Function definition-->
// DISPLAY
void display (int arr1[3][3], int arr2[3][3]) {
    printf("Entered matrix-1 is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Entered matrix-2 is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}

// ADDITION
int add (int arr1[3][3], int arr2[3][3]) {
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        	arr3[i][j] = arr1[i][j] + arr2[i][j];
            	printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}

// SUBTRACTION
int subtract (int arr1[3][3], int arr2[3][3]) {
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        
             arr3[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
}

// MULTIPLICATION
int multiply (int arr1[3][3], int arr2[3][3]) {
    int k,sum;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum += arr1[i][k] * arr2[k][j];
            }
        arr3[i][j]=sum;
        sum=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            
            printf("%d\t",arr3[i][j]);
        }
    printf("\n");
    }
}

// TRANSPOSE
int transpose (int arr1[3][3], int arr2[3][3]) {
    printf("Matrix-1 transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr1[j][i]);
        }
        printf("\n");
    }
    printf("Matrix-2 transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[j][i]);
        }
        printf("\n");
    }
}
