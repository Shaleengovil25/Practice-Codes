//Time O(nlogn) Space O(logn)

#include <bits/stdc++.h>
using namespace std;

void Merge(int a[],int lb,int mid,int ub){
    int i = lb;
    int j = mid+1;
    int k = 0;
    int b[ub-lb+1];
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
    
    for(int i=lb,k=0;i<=ub;i++,k++){
        a[i] = b[k];
    }
    
}

void MergeSort(int arr[],int lb,int ub){
    if(lb < ub){
        int mid = lb+ ((ub-lb)/2);
        MergeSort(arr,lb,mid);
        MergeSort(arr,mid+1,ub);
        Merge(arr,lb,mid,ub);
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
	MergeSort(arr,lower_bound,upper_bound);
	Print(arr,n);
	delete[] arr;
	return 0;
}
