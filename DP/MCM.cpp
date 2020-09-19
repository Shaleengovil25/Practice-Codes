//Time O(n^3) Space O(n^2)
#include <iostream>
#include <climits>
using namespace std;

int cache[100][100];


int matrixMultiplication(int p[],int i,int j){
    if(j<=i+1){
        return 0;
    }
    if(cache[i][j] > 0){
        return cache[i][j];
    }
    int min = INT_MAX;
    for(int k=i+1;k<j;k++){
        int cost = matrixMultiplication(p,i,k)+matrixMultiplication(p,k,j);
        cost += p[i]*p[k]*p[j];
        
        if(cost < min){
            min = cost;
        }
    }
    cache[i][j] = min;
    return cache[i][j];
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	cout << "Minimum number of Scalar matrix Multiplication:";
	cout << matrixMultiplication(arr,0,n-1) << endl;
	
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cout << cache[i][j] << "\t";
	    }
	    cout << endl;
	}
	
	return 0;
}

INPUT:
5
2 5 4 3 6

OUTPUT:
Minimum number of Scalar matrix Multiplication:102
0	0	 30  	54	102	
0	0	 0	  60	162	
0	0	 0	  0	  72	
0	0	 0 	  0	   0	
0	0	 0	  0	   0	

EXPLANATION:
Dimensions of 4 matrix:
M1 = 2x5
M2 = 5x4
M3 = 4x3
M4 = 3x6

m(1,2) = p0.p1.p2 = M1xM2
m(1,3) = min ( m(1,2)+m(3,3)+p0.p2.p3 , m(1,1)+m(2,3)+p0.p1.p3 ) = min ( (M1xM2)M3 , M1(M2xM3))
and so on..
