#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    
    int first = 0;
	int last = size - 1;
	
    while(first <= last){
        
	    int mid = (first + last)/2;
	    
	    if(arr[mid] == key){
	        return mid;
	    }
	    else if(arr[mid]>key){
	        last = mid-1;
	    }
	    else{
	        first = mid+1;
	    }
	}
	
	return -1;
}

int main() {
	// your code goes here
	int size;
	cin >> size;
	int *arr = new int[size];
	for(int i=0;i<size;i++){
	    cin >> arr[i];  //In Sorted Fashion.
	}
	int key;
	cin >> key;
	cout << binarySearch(arr,size,key);	
	delete [] arr;
	return 0;
}
