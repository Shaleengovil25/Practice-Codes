#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it = lst.begin();
    for(;it!=lst.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list <int> list1;
    cout << "Size of empty list of length 0: " << list1.size() << endl;
    list <int> list2(5);
    cout << "Size of empty list of length 5: " << list1.size() << endl;
    for(int i=0;i<3;i++){
        list1.push_back(i+1);
    }
    list<int> :: iterator it = list2.begin();
    for(int i=3;i<9,it!=list2.end();i++,it++){
        *it = i+1;
    }
    cout << "List 1 size: " << list1.size() << endl;
    display(list1);
    cout << "List 2 size: " << list2.size() << endl;
    display(list2);
    // adding to both ends of list1 
    list1.push_back(100);
    list1.push_front(200); // sequential container exclusive, NA in vectors
    // removing from front of list2
    list2.pop_front(); // smly we have .pop_back to remove from last.

    cout << "NOW List 1 size: " << list1.size() << endl;
    display(list1);
    cout << "NOW List 2 size: " << list2.size() << endl;
    display(list2);

    list <int> listA, listB;
    listA = list1;
    listB = list2;
    // merging two lists
    list1.merge(list2); // appends list 2 at the end of list1
    cout << "Merging list 1 and 2 without sorting them: " << list1.size() << endl;
    display(list1);

    // sorting list 
    listA.sort();
    listB.sort();
    // merging 2 sorted list produces a sorted list!
    listA.merge(listB);
    cout << "Merging list A and B after sorting them: " << listA.size() << endl;
    display(listA);
    return 0;
}



Size of empty list of length 0: 0
Size of empty list of length 5: 0
List 1 size: 3
1 2 3
List 2 size: 5
4 5 6 7 8
NOW List 1 size: 5
200 1 2 3 100
NOW List 2 size: 4
5 6 7 8
Merging list 1 and 2 without sorting them: 9
5 6 7 8 200 1 2 3 100
Merging list A and B after sorting them: 9
1 2 3 5 6 7 8 100 200
