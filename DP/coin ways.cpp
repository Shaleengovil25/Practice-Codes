Aim is to find the number of ways we can sum the given denominations (coins) to make money.
T[O(n*m)] , S[O(m)] , where n is number of denominations and m is money to change.

#include <iostream>
#include<cstring>
using namespace std;

int numberOfWays(int money, int coin_arr[]){
    int ways[money+1];
    memset(ways,0,sizeof(ways));
    ways[0] = 1;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<money+1;j++){
            if(j>=coin_arr[i]){
                ways[j]+=ways[j-coin_arr[i]];
            }
        }
    }
    return ways[money];
}

int main() {
	// your code goes here
	int coin_arr[4];
	for(int i=0;i<4;i++){
	    cin >> coin_arr[i];
	}
	int money;
	cin >> money;
	cout << numberOfWays(money,coin_arr);
	
	return 0;
}

INPUT:
2 3 5 7
12

OUTPUT:
7

EXPLANATION:
Way 1: 2+2+2+2+2+2
Way 2: 2+2+2+3+3
Way 3: 2+2+3+5
Way 4: 2+3+7
Way 5: 2+5+5
Way 6: 3+3+3+3
Way 7: 5+7

