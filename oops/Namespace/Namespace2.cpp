// Program to show application of using namespace and using directive.

#include<iostream>
using namespace std;

// Defining a namespace
namespace Name1{
    double x = 4.56;
    int m = 100;
    namespace Name2{                 // nesting namespace
        double y = 1.24;
    }
}                                    
namespace Name3{                          
    int m = 200; 
}
int main(){
    using namespace Name1;
    cout << "x = " << x << endl;
    cout << "m = " << m << endl;
    cout << "y = " << Name2::y << endl;
    using  Name3::m;
    cout << "m = " << m << endl;   
    return 0;
}

x = 4.56
m = 100
y = 1.24
m = 200
