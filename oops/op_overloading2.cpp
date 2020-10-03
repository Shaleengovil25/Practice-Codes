// overloading of overloaded operator.
#include <iostream>
using namespace std;
const int size = 3;

class vector{
    int v[size];
    public:
    vector();
    vector(int *x);
    friend vector operator*(int, vector);
    friend vector operator*(vector, int);
    friend istream& operator>>(istream&,vector&);
    friend ostream& operator<<(ostream&,vector&);
};
vector::vector(){
    for(int i=0;i<size;i++){
        v[i] = 0;
    }
}
vector::vector(int *a){
    for(int i=0;i<size;i++){
        v[i] = a[i];
    }
}
vector operator*(int a, vector v1){
    vector c;
    for(int i=0;i<size;i++){
        c.v[i] = a*v1.v[i];
    }
    return c;
}
vector operator*(vector v2, int a){
    vector c;
    for(int i=0;i<size;i++){
        c.v[i] = a*v2.v[i];
    }
    return c;
}
istream& operator>>(istream& din,vector& v1){
    for(int i=0;i<size;i++){
        din >> v1.v[i];
    }
    return din;
}
ostream& operator<<(ostream& dout,vector& v2){
    for(int i=0;i<size;i++){
        dout << v2.v[i] << " ";
    }
    return dout;
}
int x[size] = {2,4,6};
int main() {
	// your code goes here
	vector m;
	vector n = x;
	cin >> m;
	cout << endl << "m= "<< m << endl;
	vector p,q;
	p = 2*m;
	q = n*3;
	cout << "p= " << p << endl;
	cout << "q= " << q << endl;
	return 0;
}

input:
 5 10 15
output:
m= 5 10 15 
p= 10 20 30 
q= 6 12 18 
