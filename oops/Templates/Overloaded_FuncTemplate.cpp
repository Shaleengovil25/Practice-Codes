#include<iostream>
using namespace std;

template <class T>
void display(T x){
    cout << "Overloaded Display 1: " << x << endl;
}

template<class T1, class T2>
void display(T1 x, T2 y){
    cout << "Overloaded Display 2: " << x << ", " << y << endl;
}

void display(int x){
    cout << "Ordinary Display: " << x << endl;
}

int main(){
    display(200);
    display(3.34);
    display("shaleen",28);
    return 0;
}

Ordinary Display: 200
Overloaded Display 1: 3.34
Overloaded Display 2: shaleen, 28

NOTE:
Priority 1: Call an ordinary func of exact match.
Priority 2: Call an template func of exact argument match.
