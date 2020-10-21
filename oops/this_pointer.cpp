#include<iostream>
#include<cstring>
using namespace std;

class person{
    float age;
    char name[20];
    public:
    person(char *s, float a){
        strcpy(name,s);
        age = a;
    }
    person& greater(person&);
    void display(){
        cout << "Name: " << name << endl << "Age: " << age << endl; 
    }

};
person& person:: greater(person& x){
    if(x.age > age){
        return x;
    }
    else{
        return *this;
    }
}

int main(){
    person P1("shaleen",21.6), P2("nandini",18.5), P3("bharat",19.8);
    person p = P1.greater(P3);
    cout << "elder is: " << endl;
    p.display();
    p = P2.greater(P3);
    cout << "elder is: " << endl;
    p.display();
    return 0;
}


elder is:
Name: shaleen
Age: 21.6
elder is:
Name: bharat
Age: 19.8
