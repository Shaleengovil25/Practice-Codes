#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the values of a & b: " << endl;
    cin >> a >> b;
    int x = a-b;
    try{
        if(x!=0){
            cout << "Result (a/x) = " << a/x << endl;
        }
        else{
            throw(x);                 //throw int instance
        }
    }
    catch(int i){                     // catch int instance
            cout << "Exception Caught: Divide by "<< i << "!" << endl;
    }
    cout << "--END OF PROGRAM--";
}




Enter the values of a & b:
20 10
Result (a/x) = 2
--END OF PROGRAM--


Enter the values of a & b:
10 10
Exception Caught: Divide by 0!
--END OF PROGRAM--
