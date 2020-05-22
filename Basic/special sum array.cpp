// To find Single Digit Sum of elements from a given array.

#include <bits/stdc++.h>
using namespace std;

int sum(int *arr,int size)
{
//Write code here 
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    if(sum <=9){
        return sum;
    }
    else{
        int temp = 0;
        while(sum > 0 || temp > 9){
            if(sum == 0){
                sum = temp;
                temp = 0;
            }
            temp += sum%10;
            sum = sum/10;
        }
        return temp;
    }
            
    
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i<n;i++){
	    cin >> arr[i];
	}
	int single_digit_sum = sum(arr,n);
	cout << single_digit_sum;

	return 0;
}
