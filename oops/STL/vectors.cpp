#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> v;
    cout << "Size of empty vector: " << v.size() << endl;
    for(int i=0;i<5;i++){
        v.push_back(i+1);
    }
    cout << "Size of vector: " << v.size() << endl;
    display(v);
    // adding to last
    cout << "adding float => convert to int" << endl;
    v.push_back(6.7);
    cout << "Size now: " << v.size() << endl;
    display(v);
    // inserting elements
    vector<int> :: iterator it = v.begin();
    it+=3;
    v.insert(it,9);
    cout << "Inserting at random position: " << endl;
    cout << "Size now: " << v.size() << endl;
    display(v);
    // remove from last
    cout << "Removing from last: " << endl;
    v.pop_back();
    cout << "Size now: " << v.size() << endl;
    display(v);
    // erasing elements
    v.erase(v.begin()+3,v.begin()+5); // removes 4th and 5th element as v.begin()-> 1st element
    cout << "Removing 4th and 5th : " << endl;
     cout << "Size now: " << v.size() << endl;
    display(v);
    cout << "END";

    return 0;
}


Size of empty vector: 0
Size of vector: 5
1 2 3 4 5
adding float => convert to int
Size now: 6
1 2 3 4 5 6
Inserting at random position:
Size now: 7
1 2 3 9 4 5 6
Removing from last:
Size now: 6
1 2 3 9 4 5
Removing 4th and 5th :
Size now: 4
1 2 3 5
END
