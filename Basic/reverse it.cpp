void printPatt(int n)
{
    //write your code here
    int num = 1;
    int k = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2 == 1){
                cout << num << " ";
                num++;
            }
            else{
                cout << num << " ";
                num--;
            }
        }
        num +=k;
        if(i%2 == 1){
            k=k+2;
        }
        cout << "\n";
    }
}


Pattern for N = 5
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15
