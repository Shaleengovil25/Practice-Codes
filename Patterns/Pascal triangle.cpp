#include <iostream>
using namespace std;

void printpascal(int n){
    for(int i=1;i<=n;i++){
        int c = 1;
        for(int j=1;j<=i;j++){
            cout << c << " ";
            c = c* (i-j)/j;
        }
        cout << endl;
    }
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	printpascal(n);
	return 0;
}

for n = 5
1                                 0c0 
1 1                            1c0   1c1
1 2 1                        2c0  2c1  2c2
1 3 3 1                   3c0  3c1   3c2  3c3
1 4 6 4 1              4c0  4c1   4c2  4c3  4c4

getting nth row of pascal triangle can be done by calculating binomial coeff of that row.
c(n,k) = >
res = res*(n-i)/(i+1); i goes from 0 to k.

