// Time O(n) Space O(1)
#include <iostream>
using namespace std;

int LinearSearch(int *arr,int low,int high,int key){
    if(high<low){
        return -1;
    }
    if(arr[low]==key){
        return low;
    }
    return LinearSearch(arr,low+1,high,key);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int key;
	cin >> key;
	int low = 0;
	int high = n-1;
	cout << LinearSearch(arr,low,high,key);
	return 0;
}

Input:
5
1 2 3 4 5
4

Output:
3

// Recurrence Relation: T(n) = T(n-1) + k
