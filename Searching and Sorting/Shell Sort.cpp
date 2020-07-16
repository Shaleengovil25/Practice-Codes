//TIme O(n^2) Space O(1)
#include <iostream>
#include <utility>
using namespace std;

void shellsort(int a[], int n){
    for(int gap = n/2;gap>=1;gap/=2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-=gap){
                if(a[i+gap] > a[i]){
                    break;
                }
                else{
                    swap(a[i+gap],a[i]);
                }
            }
        }
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
	shellsort(arr,n);
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}

Input:
10
10 9 8 7 2 3 4 5 4 1

Output:
1 2 3 4 4 5 7 8 9 10 
(unstable)

-also called h-sorting, since we are sorting at a gap of h.
-variation of insertion sort.
-less number of shift operations required as compared to insertion sort. 
