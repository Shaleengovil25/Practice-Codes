#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[] = "C++ is better than C";
    int len = strlen(str);
    char *substr = new char[len];
    cout << "The main String is: " << str << endl;
    cout << "Enter the substring to be searched: " << endl;
    cin >> substr;
    int len2 = strlen(substr);
    int i;
    for( i=0;i<len;i++){
        int k = i;
        for(int j=0;j<len2;j++){
            if(str[k] == substr[j]){
                if(j == len2-1){
                    cout << "substring present" << endl;
                    exit(0);
                }
                k++;
            }
            else{
                break;
            }
        }
    }
    if(i == len){
        cout << "substring not present";
    }
    return 0;
}






The main String is: C++ is better than C
Enter the substring to be searched:
is better
substring present
