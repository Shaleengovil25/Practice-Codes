#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *harr;
    int heap_size;
    int capacity;
    public:
        MaxHeap(int a[], int size);
        void maxHeapify(int i);
        int parent(int i){
            return (i-1)/2;
        }
        int left(int i){return 2*i+1;}
        int right(int i){return 2*i+2;}
        int extract_max();
        int getMax(){return harr[0];}
        
};
MaxHeap::MaxHeap(int a[], int size){
    heap_size = size;
    harr = a;
    int i = (heap_size-1)/2;
    while(i>=0){
        maxHeapify(i);
        i--;
    }
}
void MaxHeap::maxHeapify(int i){
    int l = left(i);
    int r = right(i);
    int largest = i;
    if(l<heap_size && harr[l] > harr[i]){
        largest = l;
    }
    if(r<heap_size && harr[r] > harr[largest]){
        largest = r;
    }
    if(largest !=i){
        swap(harr[i],harr[largest]);
        maxHeapify(largest);
    }
}
int MaxHeap::extract_max(){
    if(heap_size == 0){
        return INT_MAX;
    }
    int root = harr[0];
    if(heap_size > 1){
        harr[0] = harr[heap_size-1];
        maxHeapify(0);
    }
    heap_size--;
    return root;
}
int KthLargest(int arr[], int n, int k){
    MaxHeap mh(arr, n);

    for(int i=0;i<k-1;i++){
        mh.extract_max();
    }

    return mh.getMax();

}

int main(){
    cout << "Enter no. of array elements:" << endl;
    int n;
    cin >> n;
    cout << "Enter elements:" << endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter k to find the kth largest element:" << endl;
    cin >> k;
    int ans = KthLargest(arr,n,k);
    cout << "Kth Largest element is array is: " << ans;
    return 0;
}
