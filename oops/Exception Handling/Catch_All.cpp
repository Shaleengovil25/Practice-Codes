#include<iostream>
using namespace std;

void test(int x){
    try{
        if(x == -1){
            throw x;
        }
        if(x == 0){
            throw 'x';
        }
        if(x == 1){
            throw 1.1;
        }
        cout << "Out of Try block" << endl;
    }
    catch(...){
        cout << "Caught an Exception!" << endl;
    }
    cout << "END" << endl;

} 

int main(){
    test(-1);    
    test(0);    
    test(1);   
    test(2); 

    return 0;
}


Caught an Exception!
END
Caught an Exception!
END
Caught an Exception!
END
Out of Try block
END
