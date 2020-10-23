// Creating files with constructor function.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("ITEM");      // connect ITEM to fout
    
    cout << "Enter name:";
    char name[30];
    cin >> name;                // get from keyboard

    fout << name << endl;       // write to file ITEM

    cout << "Enter cost:";
    float cost;
    cin >> cost;                // get from keyboard 

    fout << cost << endl;       // write to file ITEM
    fout.close();               // disconnect ITEM from fout

    ifstream fin("ITEM");       // connect ITEM to fin 
    fin >> name;                // read name from ITEM
    fin >> cost;                // read cost from ITEM

    cout << endl << "Item Name: " << name << endl << "Ttem Cost: " << cost << endl;
    fin.close();                // disconnect ITEM from fin
    return 0;
}

/* Above Program uses a single file for both writing and readin the data. First, it takes data 
from keyboard and writes it to the file. After the writing is completed, the file is closed. The program agains
opens the file, reads the information already written and displays on screen */

NOTE: ITEM file will be created in the directory of .cpp file and everytime the program runs contents are overwritten.


Enter name:CD-rom
Enter cost:20

Item Name: CD-rom
Ttem Cost: 20
