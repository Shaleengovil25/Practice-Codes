#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    int number[9] = {11,22,33,44,55,66,77,88,99};

    if(argc!=3){
        cout << "Error in arguments: " << argc;
        exit(1);
    }
    ofstream fout1, fout2;
    fout1.open(argv[1]);
    if(fout1.fail()){
        cout << "failed to open the file " << argv[1];
        exit(1);
    }
    fout2.open(argv[2]);
    if(fout2.fail()){
        cout << "failed to open the file " << argv[2];
        exit(1);
    }
    for(int i=0;i<9;i++){
        if(number[i]%2==0){
            fout2 << number[i] << " ";
        }
        else{
            fout1 << number[i] << " ";
        }
    }
    fout1.close();
    fout2.close();

    ifstream fin;
    char c;
    for(int i=1;i<argc;i++){
        fin.open(argv[i]);
        cout << "Content of " << argv[i] << endl;
        do{
            fin.get(c);
            cout << c;
        }
        while(fin);
        cout << endl;
        fin.close();
    }
    
    return 0;
}



Content of ODD
11 33 55 77 99
Content of EVEN
22 44 66 88
