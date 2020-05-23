#include<iostream>
using namespace std;

void printPatt(int n)
{
    //write your code here
    for(int i=1;i<=n;i++){
        cout << " ";
    }
    cout << "0" << "\n";
    
    for(int i=1;i<=n;i++){
        
        for(int j=n;j>i;j--){
            cout << " ";
        }
        
        for(int j=i;j>=1;j--){
            cout << j;
        }
        
        cout << "0";
        
        for(int j=1;j<=i;j++){
            cout << j;
        }
        
        cout << "\n";
        
    }
}

int main(){
int n;
cin >> n;
printPatt(n);

return 0;
}

Pattern for N = 2
  0
 101
21012
