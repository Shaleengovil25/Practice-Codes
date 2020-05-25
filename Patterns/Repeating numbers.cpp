
void printPatt(int n)
{
    //write your code here
    int k = 1;
    int x = 0;
    for(int i=0;i<n;i++){
        for(int j=pow(2,i);j>=1;j--){
            if(k>9*x && k<=9*x+9){
                cout << k-9*x;
                k++;
            }
            else{
                x++;
                cout << "1";
                k++;
            }
            
            
        }
        cout << "\n";
    }
}


Sample Input :
5
Sample Output :
1
23 
4567
89123456
7891234567891234
