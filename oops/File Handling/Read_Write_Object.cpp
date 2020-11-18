#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class INVENTORY{
    char name[30];
    int code;
    float cost;

    public:
        void readdata();
        void writedata();
};

void INVENTORY::readdata(){
    cout << "Enter Name: " ; cin >> name;
    cout << "Enter Code: " ; cin >> code;
    cout << "Enter Cost: " ; cin >> cost;
}

void INVENTORY::writedata(){
    cout << setiosflags(ios::left) << setw(10) << name;
    cout << setiosflags(ios::right) << setw(10) << code;
    cout << setiosflags(ios::showpoint) << setprecision(2) << setw(10) << cost << endl;
}

int main(){
    INVENTORY item[3];
    fstream file;
    file.open("STOCK.DAt");
    cout << "Enter Details of 3 Items:" << endl;
    for(int i=0;i<3;i++){
        item[i].readdata();
        file.write((char*)&item[i], sizeof(item[i]));
    }

    file.seekg(0);
    cout << endl << "OUTPUT:" << endl;
    for(int i=0;i<3;i++){
        file.read((char*)&item[i], sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}



CPP              101       1.2
    Python       102       3.4
      Java       103       5.4
