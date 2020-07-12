#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int n=4;
	char arr[]={'a','b','c'};
	for(int i=0;i<(1<<n);i++){
	    for(int j=0;j<n;j++){
	        int y = 1<<j;
	        if((i & y)!=0){
	            cout << arr[j];
	        }
	    }
	    cout << endl;
	}

	return 0;
}

OUTPUT:

a
b
ab
c
ac
bc
abc
