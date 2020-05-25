#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin >> n;
    int d=n/2;
    for(int i=1;i<=d+1;i++){
        for(int j=1;j<i;j++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
    
    for(int i=d;i>=1;i--){
        for(int j=i-1;j>0;j--){
            cout << " ";
        }
        for(int j=i;j>=1;j--){
            cout << "* ";
        }
        cout << "\n";
    }
  
}


