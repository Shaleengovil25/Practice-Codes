// union of two unsorted arrays
#include <iostream>
#include <iterator>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int m,n;
	    cin >> m >> n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++){
	        cin >> arr1[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> arr2[i];
	    }
	    unordered_map<int,int> map;
	    for(int i=0;i<m;i++){
	        map[arr1[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        map[arr2[i]]++;
	    }
	    cout << map.size() << endl;
	    unordered_map<int,int> :: iterator it;
	    for(it=map.begin();it!=map.end();it++){
	        cout << it->first << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// can also be done by unordered_set as it only contains unique elements.
Input:
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2

Output:
5
5 1 2 3 4 
7
2 6 85 25 1 54 32

// intersection of 2 unsorted arrays
#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int m,n;
	    cin >> m >> n;
	    int arr1[m],arr2[n];
	    for(int i=0;i<m;i++){
	        cin >> arr1[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> arr2[i];
	    }
	    unordered_map<int,int> map;
	    for(int i=0;i<m;i++){
	        map[arr1[i]]++;
	    }
	    int count = 0;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        if(map[arr2[i]]!=0){
	            count++;
	            v.push_back(arr2[i]);
	            map.erase(arr2[i]);
	        }
	    }
	   // for(int i=0;i<n;i++){  To calculate A-B.
	   //     map.erase(arr2[i]);
	   // }
	    cout << count << endl;
	    for(int i=0;i<v.size();i++){
	        cout << v[i] << " ";
	    }
	    cout << endl;
	    
	}
	return 0;
}

input:
4
5 3
89 24 75 11 23
89 2 4
6 5
1 2 3 4 5 6
3 4 5 6 7
4 4
10 10 10 10
20 20 20 20
3 3
10 10 10
10 10 10

output:
1
89 
4
3 4 5 6 
0

1
10 
