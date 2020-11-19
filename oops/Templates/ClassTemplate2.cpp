#include<iostream>
using namespace std;
template<class T1, class T2 = int>
class Test{
    T1 a;
    T2 b;
    public:
        Test(T1 x, T2 y){
            a = x;
            b = y;
        }
        void show(){
            cout << a << " and " << b << endl;
        }
};

int main(){
    Test <int ,float> test1(12,12.34);
    Test <char> test2('e',2.4);
    Test <char,float> test3('e',2.4);
    test1.show(); test2.show();test3.show();
    return 0;
}


12 and 12.34
e and 2
e and 2.4
