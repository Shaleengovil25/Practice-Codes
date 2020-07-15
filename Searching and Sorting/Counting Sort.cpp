// Time O(n+k) Space O(n+k)
#include <iostream>
using namespace std;

int getmax(int arr[], int n){ // utility function
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void counting_sort(int arr[], int n){
    int k = getmax(arr,n);
    int count[k+1] = {0};
    for(int i=0;i<n;i++){ // make frequency array.
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){ // modify frequency array so that it contains actual position of elements.
        count[i] = count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--){ // build sorted array using modified frequency array from end in order to maintain sort stability.
        b[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){ // copy array b to original array.
        arr[i] = b[i];
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
	counting_sort(arr,n);
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}

INPUT
5
5 4 3 3 2

OUTPUT
2 3 3 4 5
(stable)

✓ It's a non-comparison based sorting algo, it sorts according to keys or frequency of element.
✓ k value should be of O(n), otherwise counting sort is not feasible.
✓ This algorithm won't work on floating values(so we use bucket sort) and negative values(so we normalize** -ve values) of array elements.
✓ If array elements are of varied range, counting sort is not feasible(so we use radix sort).

**
eg: A = {-5,1,0,9,-6}
take abs of most -ve value and add to A, 
A normalised = {1,7,6,15,0}
now we can do Counting Sort on A normalised and subtract back from the output array to get ans.
