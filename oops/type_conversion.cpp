// One class type to another class type via casting operator:-
#include <iostream>
using namespace std;

class invent2{
    int code;
    float value;
    public:
   
    invent2(){code = 0; value = 0;}
    invent2(int a, float b){
        code = a;
        value = b;
    }
    void putdata(){
        cout << "code = " << code << endl;
        cout << "value = " << value << endl;
    }
    void setcode(int a){
        code = a;
    }
    void setvalue(float b){
        value = b;
    }
};

class invent1{
    int code,items;
    float price;
    public:
    invent1(int a,int b,float c){
        code = a;
        items = b;
        price = c;
    }
    void putdata(){
        cout << "code = " << code << endl;
        cout << "items = " << items << endl;
        cout << "price = " << price << endl;
    }
    int getcode(){return code;}
    int getitems(){return items;}
    float getprice(){return price;}
    operator float(){return (items*price);}
    operator invent2(){
        invent2 temp;
        temp.setcode(code);
        temp.setvalue(items*price);
        return temp;
    }
};

int main() {
	// your code goes here
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_val = s1;
	d1 = s1;
	cout << "invent1 type:" << endl;
	s1.putdata();
	cout << "invent2 type:" << endl;
	d1.putdata();
	cout << "stock value: " << total_val;
	return 0;
}





// One class type to another class type via  single argument constructor:-

#include <iostream>
using namespace std;

class invent1{
    int code,items;
    float price;
    public:
    invent1(int a,int b,float c){
        code = a;
        items = b;
        price = c;
    }
    void putdata(){
        cout << "code = " << code << endl;
        cout << "items = " << items << endl;
        cout << "price = " << price << endl;
    }
    int getcode(){return code;}
    int getitems(){return items;}
    float getprice(){return price;}
    operator float(){return (items*price);}
};

class invent2{
     int code;
    float value;
    public:
   
    invent2(){code = 0; value = 0;}
    invent2(int a, float b){
        code = a;
        value = b;
    }
    invent2(invent1 p){
        code = p.getcode();
        value = p.getprice()*p.getitems();
    }
    void putdata(){
        cout << "code = " << code << endl;
        cout << "value = " << value << endl;
    }
};

int main() {
	// your code goes here
	invent1 s1(100,5,140.0);
	invent2 d1;
	float total_val = s1;                          // class to basic.
	d1 = s1;                                       // one class to another.
	cout << "invent1 type:" << endl;
	s1.putdata();
	cout << "invent2 type:" << endl;
	d1.putdata();
	cout << "stock value: " << total_val;
	return 0;
}


OUTPUT:(common for both methods)
invent1 type:
code = 100
items = 5
price = 140
invent2 type:
code = 100
value = 700
stock value: 700


Note:
the order of class from top to bottom matters as forward declaration does not work bcoz size of data-members is not known before hence we get incomplete type error.







