//Worst Case Time O(n^2) [complete unsorted array] 
//Best Case Time O(n) [complete sorted array]
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
	// first element is considered sorted.
	for(int i=1;i<n;i++){  //iterate over un-sorted sub-list.
	    int temp = arr[i]; 
	    int j = i-1;       
	    while(j >= 0 && arr[j] > temp){ //iterate over sorted sub-list.
	        arr[j+1] = arr[j];
	        j--;
	    }
	    arr[j+1] = temp;  //*insert* element to sorted sub-list.
	}
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}

    delete [] arr;
	return 0;
}
