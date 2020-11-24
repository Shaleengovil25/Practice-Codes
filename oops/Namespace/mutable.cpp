#include<iostream>
using namespace std;

class ABC{
    mutable int m;
    public:
    explicit ABC(int x) : m(x){}
    void change() const{
        m = m+10;
    }
    void display() const{
        cout <<  m << endl;
    }
};

int main(){
    ABC abc(100);
    abc.display();
    abc.change();
    abc.display();
    return 0;
}

// change is a const function, then also it changed the value of m.
// had m been not mutable const change function could'nt have changed it.

100
110
