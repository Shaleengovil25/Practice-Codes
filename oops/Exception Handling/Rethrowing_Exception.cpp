#include<iostream>
using namespace std;

void divide(double x, double y){
    cout << "Inside Function" << endl;
    try{
        if(y == 0.0){
            throw y;
        }
        else{
            cout << "Division = " << x/y << endl;
        }
    }
    catch(double e){
        cout << "Exception Caught inside function!" << endl;
        throw;
    }
    cout << "End of function" << endl;
}

int main(){
    cout << "Inside Main" << endl;
    try{
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch(double e){
        cout << "Exception Caught inside Main!" << endl;
    }
    cout << "End of main" << endl;
    return 0;
}

Inside Main
Inside Function
Division = 5.25
End of function
Inside Function
Exception Caught inside function!
Exception Caught inside Main
End of main
