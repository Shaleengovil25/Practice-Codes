#include <iostream>
using namespace std;

// n - number of rows given
void printPattern(int n){
	// Write your code here
    int k = 1;
    for(int i=0;i<n;i=i+2){
        for(int j = (n*i +k); j<=(n*i+n); j++){
            cout << j << " ";
        }
        cout << "\n";
    } 
    if(n % 2 == 1){
        for(int i=n-2;i>=1;i=i-2){
        	for(int j=(n*i +k);j<=(n*i+n);j++){
                cout << j << " ";
            
        	}
            cout << "\n";
    	}

        
    }
    else{
        
        for(int i=n-1;i>=1;i=i-2){
        	for(int j=(n*i +k);j<=(n*i+n);j++){
                cout << j << " ";
            
        	}
            cout << "\n";
    	}

        
    }
    
}
int main(){
int n;
cin >> n;
printPattern(n);
return 0;
}


Pattern for N = 5
 1    2   3    4   5
 11   12  13   14  15
 21   22  23   24  25
 16   17  18   19  20
 6    7    8   9   10
