// To find Eighenvalue and EighenVectors for a given Matrix By Power Method. 

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    int i,j;
    float a[3][3],x[3],z[3],e[3],zmax,emax;
    clrscr();
    printf("Enter elements in 3 by 3 Matrix:\n");
    for(i=0; i<3; i++) {
	for(j=0; j<3; j++) {
	    scanf("%f",&a[i][j]);
	}
    }
// It will be a 3 by 1 Column Matrix, You can fill it with any values you want except 0,0,0.
    printf("Enter the value of initial aproximated eighen vectors:\n");
    for(i=0; i<3; i++) {
	scanf("%f",&x[i]);
    }
// Multiplying above 2 matrix gives matrix z (3 by 1) that will be more near to our desired eighenvector matrix after an operation.
    do
    {
	for(i=0; i<3; i++)
	{
	    z[i]=0;
	    for(j=0; j<3; j++)
	    {
		z[i]=z[i]+a[i][j]*x[j];
	    }
	}
// fabs() is same as abs() for float type.	    
	zmax=fabs(z[0]);
	for(i=1; i<3; i++)
	{
	    if((fabs(z[i]))>zmax)
		zmax=fabs(z[i]);
	}
// The operation I talked earlier.	    
	for(i=0; i<3; i++)
	{
	    z[i]=z[i]/zmax;
	}
// Calculating error	    
	for(i=0; i<3; i++)
	{
	    e[i]=0;
	    e[i]=fabs((fabs(z[i]))-(fabs(x[i])));
	}
	emax=e[0];
	for(i=1; i<3; i++)
	{
	    if(e[i]>emax)
		emax=e[i];
	}
	for(i=0; i<3; i++)
	{
	    x[i]=z[i];
	}
    }
    while(emax>0.001);
    printf("\n The required eigen value is %f",zmax);
    printf("\n\nThe required eigen vector is :\n");
    for(i=0; i<3; i++)
    {
	printf("%f\t",z[i]);
    }
    getch();
}
