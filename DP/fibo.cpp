Aim is to Cache the result of subproblems.

TOP DOWN APPROACH: T[O(n)] , S[O(n)]
#include <iostream>
#include<cstring>
using namespace std;
static int count = 0;

int fibo(int n, int cache[]){
    count++;
    if(cache[n] >=0){
        return cache[n];
    }
    cache[n] = fibo(n-1,cache) + fibo(n-2,cache);
    return cache[n];
}

int fibo(int n){
    int cache[n+1];
    memset(cache,-1,sizeof(cache));
    cache[0]=0;
    cache[1]=1;
    return fibo(n,cache);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << fibo(n);
	cout << endl << count;
	return 0;
}

Input
40

Output
102334155

Number of Recursive calls made while calculating 40th fibonacci number using DP:  79
Number of Recursive calls made while calculating 40th fibonacci number WITHOUT using DP: 33,11,60,281 (Insanely High)

BOTTOM UP APPROACH: T[O(n)] , S[O(n)]
#include <iostream>
using namespace std;

int fibo(int n){
    int cache[n+1];
    cache[0]=0;
    cache[1]=1;
    for(int i=2;i<=n;i++){
        cache[i] = cache[i-1] + cache[i-2];
    }
    return cache[n];
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << fibo(n);
	return 0;
}





