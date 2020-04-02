#include <stdio.h>
#include <string.h>
#include <conio.h>

int func(char c[],int size){
    char state = '0';
    int count = 0;
    for (int i=0;i<size;i++){
	char digit = c[i];
	switch(state){
	    case '0': if (digit == '0'){
		      state = '1';
		      count++;
		     }
		      else
		      state = '0';
		      break;

	    case '1': if (digit == '0'){
		     state = '0';
		     count++;
		    }
		     else
		     state = '1';
		     break;
	}
    }
    if (state == '0'){
    printf("output: yes\n");
    printf("explanation: (%s) contains even(%d) number of 0",c,count);

    }
    else{
    printf("output: no\n");
    printf("explanation: (%s) contains odd(%d) number of 0",c,count);

    }
    return 0;
}
void main()
{
 int size;
 char c[25];
 clrscr();
 printf("Input :");
 scanf("%s",c);
 size = strlen(c);
 func(c,size);
 getch();

}
