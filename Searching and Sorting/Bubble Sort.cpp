//Time O(n^2) Space O(1)
#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){   // for n elements in array, n-1 sort pass are required.
        int flag = 0;
        for(int j=0;j<n-i-1;j++){  // after each pass the greatest element reaches/bubbles to the end of array.
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;  // To avoid unnecessary passes
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	bubblesort(arr,n);
	delete [] arr;
	return 0;
}
