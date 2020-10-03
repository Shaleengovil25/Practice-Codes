#include <iostream>
using namespace std;

class complex{
    float real,imag;
    public:
    complex(){}
    complex(float a){real = imag = a;}
    complex(float a, float b){real= a; imag = b;}
    void display();
    complex operator+(complex);
};
void complex::display(){
    cout << real <<" + i" << imag << endl;
}
complex complex::operator+(complex c){
    complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}

int main() {
	// one way of initializing.
// 	complex c1 = 2.5;
// 	complex c2(2.5,4.5);
// 	complex c3 = c1+c2;

// another way of initializing.
    complex c1,c2,c3;
    c1 = complex(3.3);
    c2 = complex(4.3,6.3);
    c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}


OUTPUT:
3.3 + i3.3
4.3 + i6.3
7.6 + i9.6
