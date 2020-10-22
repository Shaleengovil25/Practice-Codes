#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << "Value";
    cout.setf(ios::right, ios::adjustfield);
    cout.width(15);
    cout << "Sqrt of value" << endl;

    cout.fill('.');
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);

    for(int i=1;i<=10;i++){
        cout.setf(ios::internal, ios::adjustfield);
        cout.width(15);
        cout << i;
        cout.setf(ios::right, ios::adjustfield);
        cout.width(20);
        cout << sqrt(i) << endl;
    }

    cout.setf(ios::scientific, ios::floatfield);
    cout << endl << "Sqrt(100) = " << sqrt(100) << endl;
    return 0;
}




Value*******Sqrt of value
+.............1.............+1.0000
+.............2.............+1.4142
+.............3.............+1.7321
+.............4.............+2.0000
+.............5.............+2.2361
+.............6.............+2.4495
+.............7.............+2.6458
+.............8.............+2.8284
+.............9.............+3.0000
+............10.............+3.1623

Sqrt(100) = +1.0000e+001

for more info: https://user-images.githubusercontent.com/47412487/96895579-2dc7d980-14aa-11eb-9dcd-87d353dadbfb.jpeg
