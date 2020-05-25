void printPatt(int n)
{
    //write your code here
    int k = n -2;
    for(int i=1;i<n;i++){
        for(int j=1;j<i;j++){
            cout << " ";
        }
        cout << i;
        
        for(int j=2*k+1;j>=1;j--){
            cout << " ";
        }
         k--;
        cout << i << "\n";
        
    }
    for(int i=1;i<n;i++){
        cout << " ";
    }
    cout << n << "\n";
    
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout << " ";
        }
        cout << n-i;
        
        for(int j=2*i-1;j>=1;j--){
            cout << " ";
        }
        
        cout << n-i << "\n";
    }
    
    
    
    
    
}



Sample Input :
5
Sample Output :
No. of rows = 9, No. of columns = 9
1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1
