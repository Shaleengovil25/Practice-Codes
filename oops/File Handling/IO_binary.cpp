// read() and write()

#include<iostream>
#include<fstream>
#include <iomanip>                                 // for setw() like manipulators

using namespace std;
const char*filename = "BINARY";

int main(){
    float hieght[] = {175.5,153.0,167.25,160.70};
    ofstream outfile;
    outfile.open(filename);
    outfile.write((char*)&hieght, sizeof(hieght));
    outfile.close();
    
     for(int i=0;i<4;i++){
        hieght[i] = 0;
    }
    
    ifstream infile;
    infile.open(filename);
    infile.read((char*)hieght, sizeof(hieght));

    for(int i=0;i<4;i++){
        cout.setf(ios::showpoint);
        cout << setw(10) << setprecision(2) << hieght[i];
    }

    return 0;
}

1.8e+002  1.5e+002  1.7e+002  1.6e+002
