//DECIMAL TO BINARY

#include<iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    long digit=0;
    long pv = 1;
    
    while(n>=1){
        int r = n%2;
        n = n/2;
        digit += r * pv;
        pv*=10;
    }
    
    cout << digit;
    
    
    return 0;
    
}

//BINARY TO DECIMAL

#include<iostream>
using namespace std;

int main() {
	
	int n;
    cin >> n;
    
    int ans = 0;
    int pv = 1;
    
    while(n>=1){
        int r = n%10;
        n=n/10;
        ans += r*pv;
        pv*=2;
    }
    
    cout << ans;
    
    
    return 0;
}
