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
    catch(int e1){
        cout << "Caught Int exception" << endl;
    }
    catch(char e2){
        cout << "Caught Char exception" << endl;
    }
    catch(double e3){
        cout << "Caught Double exception" << endl;
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


Caught Int exception
END
Caught Char exception
END
Caught Double exception
END
Out of Try block
END
