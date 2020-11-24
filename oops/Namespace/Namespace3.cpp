// Program to show use of functions in namespace.

#include<iostream>
using namespace std;

namespace Functions{
    int divide(int x, int y){       //defined
        return x/y;
    }
    int product(int x, int y);      // declared
}

int Functions::product(int x, int y){       // defined outside namespace    
    return x*y;
}
int main(){
    using namespace Functions;
    cout << "Division: " << divide(30,10) << endl;
    cout << "Multiplication: " << product(30,10);
    return 0;
}

Division: 3
Multiplication: 300
