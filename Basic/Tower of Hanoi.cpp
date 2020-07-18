//Time O(2^n) Space O(n)
#include <iostream>
using namespace std;

void toh(int n, char from, char to, char via){
    if(n>0){
        toh(n-1,from,via,to);
        cout << "move disk no. " << n <<" from "<< from << " to "<< to << endl;
        toh(n-1,via,to,from);
    }
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	toh(n,'A','C','B');
	return 0;
}

Input:
3
Output:
move disk no. 1 from A to C
move disk no. 2 from A to B
move disk no. 1 from C to B
move disk no. 3 from A to C
move disk no. 1 from B to A
move disk no. 2 from B to C
move disk no. 1 from A to C


for n > 20 => Runtime error.
