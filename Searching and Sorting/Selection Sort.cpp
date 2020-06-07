//Time O(n^2) [always]
//Space O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	
	for(int i=0;i<n-1;i++){ // sort pass
	    int min = i;
	    for(int j=i+1;j<n;j++){ // looks for mininum element in un-sorted sub-array.
	        if(arr[j] < arr[min]){
	            min = j;
	        }
	    }
	    if(min !=i){
	        swap(arr[i],arr[min]); // mininum element is placed in sorted sub-array.
	    }
	}
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	

    delete [] arr;
	return 0;
}

// Here after first pass, the mininum element comes at front while
// in bubble sort the maximum element goes to end.
// selection => reverse bubble.
