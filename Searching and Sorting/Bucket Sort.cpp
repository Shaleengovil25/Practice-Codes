// Time O(n^2) omega(n), Space O(n)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketsort(float arr[],int n){
    // array of vectors
    vector<float> v[n];                    // step 1: make n buckets.   O(n) space is required.
    for(int i=0;i<n;i++){           
        int vi = n*arr[i];
        v[vi].push_back(arr[i]);            // step 2: insert elements in bucket, note that bucket index depends on distribution of elements.
    }                                                  // this step takes O(n) time.
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());      // step 3: sort individual buckets.
    }                                                  // surprisingly, this step also takes O(n) time, it means sort is running in O(1) !?
    int index = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){    // step 4: concatenate buckets.
            arr[index++] = v[i][j];                    // n buckets needs to be concatenate so O(n) time is required.
        }
    }
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	float arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	bucketsort(arr,n);            // 4 Step process.
  
	for(int i=0;i<n;i++){
	    cout << arr[i] << " ";
	}
	return 0;
}

Input:
6
0.897 0.565 0.656 0.1234 0.665 0.3434

Output:
0.1234 0.3434 0.565 0.656 0.665 0.897

NOTE: This algorithm works iff array elements are uniformly distributed over a range like in above example.
Worst case occurs when all elements goes to single bucket.

To handle negative floating point:
1. we can make 2 parts of array, negative array, positive array.
2. make negative array positive and apply bucketsort.
3. apply bucket sort on positive array.
4. now both negative array and positive array are sorted.
5. store elements of negative array while making them negative into original array.
6. store positive array to original array.
7. orginal array is sorted.
