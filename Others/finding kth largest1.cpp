#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int *harr;
    int heap_size;
    int capacity;
    public:
        MinHeap(int a[], int size);
        void minHeapify(int i);
        int parent(int i){
            return (i-1)/2;
        }
        int left(int i){return 2*i+1;}
        int right(int i){return 2*i+2;}
        int getMin(){return harr[0];}
        void replaceMin(int x){
            harr[0] = x;
            minHeapify(0);
        }
};
MinHeap::MinHeap(int a[], int size){
    heap_size = size;
    harr = a;
    int i = (heap_size-1)/2;
    while(i>=0){
        minHeapify(i);
        i--;
    }
}
void MinHeap::minHeapify(int i){
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(l<heap_size && harr[l] < harr[i]){
        smallest = l;
    }
    if(r<heap_size && harr[r] < harr[smallest]){
        smallest = r;
    }
    if(smallest !=i){
        swap(harr[i],harr[smallest]);
        minHeapify(smallest);
    }
}

int KthLargest(int arr[], int n, int k){
    MinHeap mh(arr,k);

    for(int i=k;i<n;i++){
        if(arr[i]>mh.getMin()){
            mh.replaceMin(arr[i]);
        }
    }
    return mh.getMin();
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
