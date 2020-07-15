// Time O(digits*(n+k)) Space O(n+k)
#include <iostream>
using namespace std;

int getmax(int arr[], int n){                   // utility function
    int m = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }
    return m;
}

void counting_sort(int arr[],int n, int pos){    // counting sort algo
    int count[10] = {0};                         // here, k is fixed as 10, since a digit can be 0 to 9 only.
    for(int i=0;i<n;i++){                        // make frequency array on the basis of LSB to MSB
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){                       // modify frequency array
        count[i]+=count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){                     // build sorted array
        b[--count[(arr[i]/pos)%10]] = arr[i];
    }
    for(int i=0;i<n;i++){                        // copy to original array
        arr[i] = b[i];
    }
}

void radixsort(int arr[], int n){
    int max = getmax(arr,n);
    for(int pos = 1;max/pos > 0;pos*=10){     // counting sort called = no. of digits in max element of array 
        counting_sort(arr,n,pos);
    }
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	radixsort(arr,n);
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}
