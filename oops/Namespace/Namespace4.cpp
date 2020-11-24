// Program to show use of classes in a namespace.

#include<iostream>
using namespace std;

namespace Classes{
    class test{
        int m;
        public:
        test(int a):m(a){}
        void display(){
            cout << "m = " << m << endl;
        }
    };
}

int main(){
    // by namespace resolution
    Classes::test T1(200);
    T1.display();

    // by using directive
    using namespace Classes;
    test T2(100);
    T2.display();
    return 0;
}


m = 200
m = 100
