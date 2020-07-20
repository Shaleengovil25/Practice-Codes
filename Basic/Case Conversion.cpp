#include <iostream>
using namespace std;

char* case_reverse(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        arr[i] = arr[i]^ 32;
    }
    return arr;
}

char* tolowercase(char a[]){
    for(int i=0;a[i]!='\0';i++){
        a[i] |= 32;
    }
    return a;
}

char* touppercase(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        arr[i] &= ~32;
        
    }
    return arr;
}

int main() {
	// your code goes here
	char str[100];
	cin.getline(str,100);
	cout << case_reverse(str) << endl;
	cout << tolowercase(str) << endl;
	cout << touppercase(str) << endl;
	return 0;
}

Input:
ShAlEEngOvIl

Output:
sHaLeeNGoViL
shaleengovil
SHALEENGOVIL

