//Time O(n^2) omega(nlogn) Space O(1)
#include <iostream>
#include <utility>
using namespace std;

int partition(int a[],int lb,int ub){
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start < end){
        while(a[start] <= pivot && start <ub){ // Increment start till element greater than pivot is found.
            start++;
        }
        while(a[end] > pivot){ // Decrement start till element lesser than pivot is found.
            end--;
        }
        if(start < end){
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]); // By now pivot element is at its correct position, elements lesser than it are towards left of it while greater one are towards right of it.
    return end;
}

void quicksort(int arr[],int lb,int ub){
    if(lb<ub){
        int location = partition(arr,lb,ub);
        quicksort(arr,lb,location-1); //now apply quicksort on elements towards left of pivot.
        quicksort(arr,location+1,ub); // then quicksort right side elements.
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
	int lb = 0;
	int ub = n-1;
	quicksort(arr,lb,ub);
	
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	
	delete [] arr;
	return 0;
}

INPUT:
5 4 3 2 1

OUTPUT:
1 2 3 4 5

Performance Analysis:
Depends upon partitioning of array, if after first partition, the pivot element goes to n/2th or n/4th index, it will work like mergesort
in O(nlogn) time, however in case of completely sorted or completely unsorted (sorted in non-decreasing order) array, only one recursive call will be there at a time,
so it will run in O(n^2) time.
Worst case recurrence relation: T(n) = T(n-1) + n.
