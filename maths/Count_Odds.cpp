#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

 int countOdds(int low, int high) {
        int x=low;
        int y = high;
        int n= high - low;
        
        if(x%2!=0){
            n=(n/2)+1;
        }
        
        if(x==0 && y%2!=0){
            n=n-2;
        }
        
        else if(x%2==0 && y%2==0){
            n=n/2;
        }
        
        else if(x%2==0 && y%2!=0){
            if(n==1){
                n=1;
            }
            else{
                 n=n/2+1;
            }
           
        }
        
        
        
        
        return n;
    }
int main(){
    int high,low;
    cin>>low>>high;

    cout<<countOdds(low,high);
    


    

}

