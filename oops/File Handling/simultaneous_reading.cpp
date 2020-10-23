#include<iostream>
#include<fstream>
#include<cstdlib>                 //for exit() fun

using namespace std;

int main(){
    char line[100];
    ifstream fin1, fin2;          // two input streams
    fin1.open("country");
    fin2.open("capital");

    for(int i=0;i<3;i++){
        if(fin1.eof()!=0){             // check EOF
            cout << "exit from country\n";
            
        }

        fin1.getline(line, 100);                    // read line
        cout << "Capital of " << line << " is ";     // print line

        if(fin2.eof()!=0){
            cout << "exit from capital\n";
            
        }

        fin2.getline(line,100);
        cout << line << endl;
    }

    return 0;
}


Capital of India is New Delhi
Capital of United States of America is Washington
Capital of South Korea is Seoul
