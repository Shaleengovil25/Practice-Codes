#include<iostream>
using namespace std;

const int size = 3;

template<class T>
class vector{
    T* v;
    public:
        vector(){
            v = new T[size];
            for(int i=0;i<size;i++){
                v[i] = 0;
            }
        }
        vector(T* a){
            v = new T[size];
            for(int i=0;i<size;i++){
                v[i] = a[i];
            }
        }
        T operator*(vector &y){
            T sum = 0;
            for(int i=0;i<size;i++){
                sum+= this->v[i]*y.v[i];
            }
            return sum;
        }
        void display(){
            for(int i=0;i<size;i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    int x[] = {1,2,3};
    int y[] = {4,5,6};
    float a[] = {1.1,2.2,3.3};
    float b[] = {4.4,5.5,6.6};
    
    vector <int> v1 = x;
    vector <int> v2 = y;
    vector <float> v3 = a;
    vector <float> v4 = b;

    int res1= v1*v2;
    float res2 = v3*v4;
    
    cout << "Integer Vectors:" << endl << "Vector v1: " ;
    v1.display();
    cout << "Vector v2: " ;
    v2.display();
    cout << "Scalar multiplication = " << res1 << endl;

    cout << "Floating Vectors: " << endl << "Vector v3: ";
    v3.display();
    cout << "Vector v2: ";
    v4.display();
    cout << "Scalar multiplication = " << res2;
    return 0;
}



Integer Vectors:
Vector v1: 1 2 3
Vector v2: 4 5 6
Scalar multiplication = 32
Floating Vectors:
Vector v3: 1.1 2.2 3.3
Vector v2: 4.4 5.5 6.6
Scalar multiplication = 38.72
