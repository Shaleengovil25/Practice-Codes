#include<iostream>
using namespace std;

void divide(int x, int y, int z){
        cout << "We are Inside the Function!" << endl;
        if((x-y)!=0){
            int r = z/(x-y);
            cout << "Result = " << r << endl;
        }
        else{
            throw(x-y);
        }
    }

int main(){
    try{
        cout << "We are inside Try Block!" << endl;
        divide(30,20,10);
        divide(10,10,20);
    }
    catch(int e){
        cout << "Exception Caught!" << endl;
    }
    cout << "~END~";
    return 0;
}


We are inside Try Block!
We are Inside the Function!
Result = 1
We are Inside the Function!
Exception Caught!
~END~
