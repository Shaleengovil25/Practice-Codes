#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,k,j;
clrscr();
printf("Enter 5 elements\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
printf("%d\t\t",a[i]);
printf("enter position of element to be deleted");
scanf("%d",&k);
for(i=k-1;i<4;i++)
a[i]=a[i+1];
printf("After Deletion\n");
for(i=0;i<4;i++)
printf("%d\t\t",a[i]);
getch();
}