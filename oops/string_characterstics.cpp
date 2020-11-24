#include<iostream>
#include<string>
using namespace std;

void display(string &s){
    cout << "Size: " << s.size() << endl;
    cout << "Length: " << s.length() << endl;
    cout << "Capacity: " << s.capacity() << endl;
    cout << "Maximum Capacity: " << s.max_size() << endl;
    cout << "Empty? " << (s.empty()?"Yes":"No") << endl;       // .empty() => returns true if string is empty, false otherwise.
}

int main(){
    string s1;
    cout << "Initial Status:" << endl;
    display(s1);

    cout << "Enter a string" << endl;
    cin >> s1;
    display(s1);

    s1.resize(20);
    cout << "After resizing" << endl;
    display(s1);
    return 0;
}

Initial Status:
Size: 0
Length: 0
Capacity: 15
Maximum Capacity: 1073741823
Empty? Yes
Enter a string
shaleen
Size: 7
Length: 7
Capacity: 15
Maximum Capacity: 1073741823
Empty? No
After resizing
Size: 20
Length: 20
Capacity: 30
Maximum Capacity: 1073741823
Empty? No

NOTE:
The size and length are same always.
s1 has a capacity of 0 initially but it increased to 15 when string is assigned, it again increased to 30 when string is resized to 20.
The max size of string is system dependent.
