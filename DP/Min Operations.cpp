AIM is to convert 1 to number N using minimum no. of operations.
operation allowed: *2, *3 , +1.

include <vector>
#include<cstring>
using namespace std;

int countWays(int n, int cache[]){
    if(cache[n]>=0){
        return cache[n];
    }
    if(n==1){
        return 0;
    }
    if(n%3 == 0){
        cache[n] =  1 + min(countWays(n/3,cache),countWays(n-1,cache));
        return cache[n];
        
    }
    if(n%2 == 0){
        cache[n] =  1 + min(countWays(n/2,cache),countWays(n-1,cache));
        return cache[n];
        
    }
    else{
        cache[n] =  1 + countWays(n-1,cache);
        return cache[n];
        
    }
    
}
int countWays(int n){
    int cache[n+1];
    memset(cache,-1,sizeof(cache));
    return countWays(n,cache);
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int ans =  countWays(n);
	cout << ans << endl;}
	return 0;
}

INPUT:
82

OUTPUT:
5

Explanation:
82-1 = 81
81/3 = 27
27/3 = 9
9/3 = 3
3/3 = 1
