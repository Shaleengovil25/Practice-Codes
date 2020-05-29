#include <iostream>
using namespace std;
int binarySearch(int arr[],int first,int last,int key){
    if(last >=1){
        int mid = (first + last)/2;
        
        if(arr[mid] == key){
            return mid;
        }
    
        if(arr[mid] > key){
            return binarySearch(arr,0,mid-1,key);
        }
        else{
            return binarySearch(arr,mid+1,last,key);
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
	cout << binarySearch(arr,0,size-1,key);	
	delete [] arr;

	return 0;
}
