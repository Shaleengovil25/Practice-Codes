//Time O(n^3) Space O(n)

#include<iostream>
#include<climits>
using namespace std;

// Utility O(1) func to calc sum of freq, it make use of prefix sumarray.
int sum(int i, int j, int sum_arr[] ){
    int s = 0;
    if(i>=1){
        s = sum_arr[j] - sum_arr[i-1];
    }
    else{
        s = sum_arr[j];
    }
    return s;
}

int OptimalBST(int freq[], int n, int sum_arr[]){
    int cost[n][n];
    for(int i=0;i<n;i++){
        cost[i][i] = freq[i];  
    }

    for(int l=2;l<=n;l++){
        for(int i=0;i<n-l+1;i++){
            int j = i+l-1;
            cost[i][j] = INT_MAX;

            for(int r=i;r<=j;r++){
                int c = cost[i][r-1] + cost[r+1][j] +sum(i,j,sum_arr);
                if(c < cost[i][j]){
                    cost[i][j] = c;
                }
            }
            
        }
    }
    return cost[0][n-1];
}

int main(){
    cout << "Enter number of keys:" <<endl;
    int n;
    cin >> n;
    cout << "Enter frequency of keys:" <<endl;
    int freq[n];
    int sum_arr[n];
    for(int i=0;i<n;i++){
        cin >> freq[i]; 
    }
    sum_arr[0] = freq[0];
    for(int i=1;i<n;i++){
        sum_arr[i] = sum_arr[i-1] + freq[i];
    }
    int ans =  OptimalBST(freq,n,sum_arr);
    cout << "Optimal BST cost: " << ans; 
    return 0;
}




Enter number of keys:
4
Enter frequency of keys:
5 3 6 2
Optimal BST cost: 29
