#include <iostream>
using namespace std;

class student{
    protected:
        int roll;
    public:
        void get_roll(int a){
            roll = a;
        }
        void put_roll(){
            cout << "Roll no. " << roll << endl;
        }
};
class test : public student{
    protected:
        float sub1,sub2;
    public:
        void get_marks(float,float);
        void put_marks();
};
void test::get_marks(float a, float b){
    sub1 = a;
    sub2 = b;
}
void test::put_marks(){
    cout << "marks in sub1 = " << sub1 << endl;
    cout << "marks in sub2 = " << sub2 << endl;
}
class sports{
    protected:
        float score;
    public:
    void get_score(float a){
        score = a;
    }
    void put_score(){
        cout << "sports = " << score << endl;
    }
};
class result : public test, public sports{
    float total;
    public:
    void display();
};
void result::display(){
    total = sub1 + sub2 + score;
    put_roll();
    put_marks();
    put_score();
    cout << "total = " << total << endl;
}

int main() {
	// your code goes here
	result r;
	r.get_roll(28);
	r.get_marks(93.5,89);
	r.get_score(9.6);
	r.display();
	return 0;
}


Roll no. 28
marks in sub1 = 93.5
marks in sub2 = 89
sports = 9.6
total = 192.1
