#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    int number;
    string name;
    map<string, int> Phone;
    cout << "Enter 3 name and numbers: " << endl;
    for(int i=0;i<3;i++){
        cin >> name;
        cin >> number;
        Phone[name] = number; // put in map
    }
    Phone["Shaleen"] = 28; // insert 
    Phone.insert(pair<string,int> ("Rachit",26)); // insert OP
    cout << "Size of map" << Phone.size() << endl;
    cout << "List of Roll numbers:" << endl;
    map<string, int> :: iterator it = Phone.begin();
    for(;it!=Phone.end();it++){
        cout << it->first << " " << (*it).second << endl;
    }
    cout << "Find roll of: (enter name)" << endl;
    cin >> name;
    number = Phone[name];
    cout << name << " roll is:" << number;
    return 0;
}


Enter 3 name and numbers: 
Ajit 03
Aranaya 08
Arunish 10
Size of map5
List of Roll numbers:
Ajit 3
Aranaya 8
Arunish 10
Rachit 26
Shaleen 28
Find roll of: (enter name)
Aranaya
Aranaya roll is:8
