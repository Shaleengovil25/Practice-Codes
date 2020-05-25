void printPatt(int n)
{
    //write your code here
    int d = n;
    for(int i=1;i<n;i++){
        for(int j=n;j>=n-i+1;j--){
            cout << j;
        }
        for(int j=1;j<2*(n-i);j++){
            cout << d;
        }
        d--;
        
        for(int j=n-i+1;j<=n;j++){
            cout << j;
        }
        cout << "\n";
    }
    
    for(int i=n;i>=1;i--){
        cout << i;
    }
    for(int i=2;i<=n;i++){
        cout << i;
    }
    cout << "\n";
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            cout << j;
        }
        for(int j=1;j<=2*i-1;j++){
            cout << i+1;
        }
        for(int j=i+1;j<=n;j++){
            cout << j;
            
        }
        cout << "\n";
    }
    
    
}
