//creating files with open() function

#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fout;
    fout.open("country");           // connect country file to output stream
    
    fout << "India" << endl << "United States of America" << endl << "South Korea" << endl;
    fout.close();                   // discoonect

    fout.open("capital");           // connect
    
    fout << "New Delhi" << endl << "Washington" << endl << "Seoul" <<endl;
    fout.close();                   // disconnect

    char line[100];
    
    ifstream fin;                 //connect country to input stream
    fin.open("country");
    
    cout << "Content of country file:"<< endl;

    while(fin){                    // check EOF
        fin.getline(line,100);
        cout << line << endl;
    }
    
    fin.close();                  // disconnect
    
    fin.open("capital");          // connect 
    cout<< "content of capital file:" << endl;
    
    while(fin){                    // check EOF
        fin.getline(line,100);
        cout << line << endl;
    }
    
    fin.close();                 // disconnect
    
    return 0;    
}



Content of country file:
India
United States of America
South Korea

content of capital file:
New Delhi
Washington
Seoul
