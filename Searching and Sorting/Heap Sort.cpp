//Time O(nlogn) Space O(1)**
#include <iostream>
#include <utility>
using namespace std;

void heapify(int arr[],int n,int i){             // heapify method.
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right<n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapsort(int a[],int n){
    for(int i=(n/2 - 1); i>=0;i--){      //step 1: Build Max heap using heapify method.
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--){             //step 2: Delete elements from max heap while heapifying the heap after every deletion.
        swap(a[0],a[i]);
        heapify(a,i,0);
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
	heapsort(arr,n);                         // 2 step process.
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}

Input:
5
5 4 3 3 2

Output:
2 3 3 4 5
(unstable)

- Time complexity of heapify function is O(n)
- Time complexity of Building heap (using heapify)is O(n)
- Time complexity of Deleting heap is O(nlogn)
- So overall time complexity is O(nlogn)
	
- It's main competitors are merge and quick sort algorithms, in-practice order of preference: quick > merge > heap.  Why?***
- Heap sort is used in Priority Queues and Order Statistics. (https://www.geeksforgeeks.org/applications-of-heap-data-structure/)

** 
Argument: heapify is a recursive function and in worst case there will be log n recursive calls waiting in the call stack, so auxilliary space should be O(logn).
Answer: so we say this heapify function is tail-call recursive or tail call optimized(TCO), it means there will be no call stack at all and it becomes equivalent to
a itereative function, this way Space complexity of heap sort is O(1).

How does TCO work? : https://stackoverflow.com/questions/310974/what-is-tail-call-optimization

***
Quick Vs Merge Vs Heap
All have same average running time, while heap bieng the most and merge bieng the least efficient in terms of space complexity. But it's not a good idea to see this way.
- Merge sort has good locality reference.
- heapsort is not stable.
- heapsort fails in parallel algorithms.
- quicksort is really quick as it perfeorms way less comparisons and exchanges.(https://web.archive.org/web/20130801175915/http://www.cs.auckland.ac.nz/~jmor159/PLDS210/qsort3.html)
- regarding worst case of quick , it should be tolerable, if not, go with merge.
- To overcome this we have introspective sort , which is quick for lower n and heap for larger n so as to avoid the blast of n^2 for larger n.
- This introspective sort is what built in STL sort function.
