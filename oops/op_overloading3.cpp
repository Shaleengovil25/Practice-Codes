// overloading subscript [] operator.
#include <iostream>
using namespace std;
class arr{
    int a[5];
    public:
    arr(int *s){
        for(int i=0;i<5;i++){
            a[i] = 2*s[i];
        }
    }
    int operator[](int k){
        return a[k];
    }
};
int main() {
	// your code goes here
	int x[5] = {1,2,3,4,5};
	arr A = x;
	for(int i=0;i<5;i++){
	    cout << A[i] << " ";
	}
	return 0;
}

output:
2 4 6 8 10
