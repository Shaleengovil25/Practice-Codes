//Time O(nlogn) Space O(logn)

#include <bits/stdc++.h>
using namespace std;

void Merge(int a[],int lb,int mid,int ub,int n){
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[n];
    while(i<=mid && j<=ub){
        if(a[i] <= a[j]){
            b[k] = a[i];
            i++;
        }
        else{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k] = a[i];
            i++;
            k++;
        }
    }
    
    for(int i=lb;i<=ub;i++){
        a[i] = b[i];
    }
    
}

void MergeSort(int arr[],int lb,int ub,int n){
    if(lb < ub){
        int mid = lb+ ((ub-lb)/2);
        MergeSort(arr,lb,mid,n);
        MergeSort(arr,mid+1,ub,n);
        Merge(arr,lb,mid,ub,n);
    }
}

void Print(int arr[],int n){
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
	int lower_bound = 0;
	int upper_bound = n-1;
	MergeSort(arr,lower_bound,upper_bound,n);
	Print(arr,n);
	delete[] arr;
	return 0;
}
