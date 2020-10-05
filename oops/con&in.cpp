#include <iostream>
using namespace std;

class parent{
    int a;
    public:
    parent(int x){
        a = x;
        cout << "parent called " << a << endl;
    }
};
class child : public parent{
    int b;
    public:
    child(int x, int y):parent(x){
        b = y;
        cout << "child called " << b << endl;
    }
};
int main() {
	// your code goes here
	child obj(3,5);
	return 0;
}

parent called 3
child called 5
