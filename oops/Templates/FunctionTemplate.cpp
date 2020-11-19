#include<iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n){
    T min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int Imin; float Fmin; char Cmin;
    int I[] = {20, 4, 2, 18};
    float F[] = {1.4, 3.4, 3.1, 4.3};
    char C[] = {'a', '~', '/', 'A'};

    Imin = findMin(I,sizeof(I)/sizeof(I[0]));
    Fmin = findMin(F,sizeof(F)/sizeof(F[0]));
    Cmin = findMin(C,sizeof(C)/sizeof(C[0]));

    cout <<"Minimum val is Integer array: " << Imin << endl;
    cout <<"Minimum val is FLoat array: " << Fmin << endl;
    cout <<"Minimum val is Character array(as per ascii): " << Cmin << endl;
    return 0;
}


Minimum val is Integer array: 2
Minimum val is FLoat array: 1.4
Minimum val is Character array(as per ascii): /
