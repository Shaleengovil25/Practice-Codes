#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int x[] = {10,50,30,40,20};
    int y[] = {70,90,60,80};
    sort(x,x+5,greater<int>()); // greater is a function in disguise of class that overloads () operator.
    sort(y,y+4);

    for(int i=0;i<5;i++){
        cout << x[i] << " ";
    }
    cout << endl;
    for(int i=0;i<4;i++){
        cout << y[i] << " ";
    }
    cout << endl;
    int z[9];
    merge(x,x+5,y,y+4,z); // append y to x and save in z.
    for(int i=0;i<9;i++){
        cout << z[i] << " ";
    }    
    return 0;
}


50 40 30 20 10
60 70 80 90
50 40 30 20 10 60 70 80 90
