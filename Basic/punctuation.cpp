#include <iostream>
#include <string>
using namespace std;

string changed(string s){
    string str = s;
    for(int i=0;i<str.length();i++){
        int k = i;
        while(i<str.length() && str[i]!=' '){
            i++;
        }
        str[k] = (str[k]&32)?str[k]&~32:str[k]|32;
    }
    return str;
}
int main() {
	// your code goes here
	string s;
	getline(cin,s);
    // char str[100];
    // cin.getline(str,100);
    // cout << s <<s.length()<<endl;
	cout << changed(s);
	return 0;
}

Input:
hello uncle namaste chalo kaam ki baat pe aate hain

Output:
Hello Uncle Namaste Chalo Kaam Ki Baat Pe Aate Hain
