// get() and put()

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){
    string str;
    cout << "Enter a String: " << endl;
    cin >> str;
    int len = str.length();
    
    cout << "Storing in file..." << endl;
    fstream file;
    file.open("TEXT", ios::in | ios::out);
    for(int i=0;i<=len;i++){
        file.put(str[i]);
    }
    
    file.seekg(0);
    
    cout << "Reading File content: ";
    char c;
    while(file){
        file.get(c);
        cout << c;
    }

    return 0;
}

/*
fstream can handle both input output simultaneously.
after writing the file pointer reached to EOF so we need to bring it back to start of file,
we do it so by .seekg(0)
*/
