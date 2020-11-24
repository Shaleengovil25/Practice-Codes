// Program to show how namespaces are defined, unnanmed namespace, nesting of namespace and accessing members.

#include<iostream>
using namespace std;

// Defining a namespace
namespace Name1{
    double x = 4.56;
    int m = 100;
    namespace Name2{                 // nesting namespace
        double y = 1.24;
    }
}                                    //note that unlike class they don't require a semicolon
namespace{                          // unnamed namespace => for global variables.
    int m = 200; 
}
int main(){
    cout << "x = " << Name1::x << endl;
    cout << "m = " << Name1::m << endl;
    cout << "y = " << Name1::Name2::y << endl;
    cout << "m = " << m << endl;   // global m will be called.
    return 0;
}


x = 4.56
m = 100
y = 1.24
m = 200
