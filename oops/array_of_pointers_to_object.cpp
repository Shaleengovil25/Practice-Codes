#include<iostream>
#include<cstring>
using namespace std;

class city{
    protected:
    char *name;
    int len;
    public:
    city(){
        int len = 0;
        name = new char[len+1];
    }
    void getname(){
        char *s;
        s = new char[30];
        cout << "Enter a String: " << endl;
        cin >> s;
        len = strlen(s);
        name = new char[len+1];
        strcpy(name,s);
    }
    void printname(){
        cout << name << endl;
    }
};

int main(){
    city *cptr[10];
    int n = 1, option = 0;
    do{
        cptr[n] = new city;
        cptr[n]->getname();
        n++;
        cout << "Do you want to enter one more name?" << endl;
        cout << "enter 1 for yes and 0 for no" << endl;
        cin >> option;
    }
    while(option);

    cout << endl;
    for(int i=1;i<=n;i++){
        cptr[i]->printname();
    }
    return 0;
}






Enter a String: 
red
Do you want to enter one more name?
enter 1 for yes and 0 for no       
1
Enter a String:
yellow
Do you want to enter one more name?
enter 1 for yes and 0 for no
1
Enter a String:
green
Do you want to enter one more name?
enter 1 for yes and 0 for no
1
Enter a String:
black
Do you want to enter one more name?
enter 1 for yes and 0 for no
0

red
yellow
green
black
