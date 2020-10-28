#include <iostream>
#include <algorithm>
using namespace std;

struct activity{
    int start_time;
    int finish_time;
    int index;
};

bool cmp(activity a, activity b){
    return a.finish_time < b.finish_time;
}

void select_activity(activity arr[], int n){
    sort(arr,arr+n,cmp);
    cout << "Activities selected:"<< endl;
    int i=0;
    cout <<"activity " << arr[i].index+1 << endl;
    for(int j=0;j<n;j++){
        if(arr[j].start_time >= arr[i].finish_time){
            cout << "activity " << arr[j].index+1 << endl;
            i = j;
        }
    }
}

int main(){
    cout << "Enter number of activities: " << endl;
    int n;
    cin >> n;
    cout << "Enter start and finish time for: " << endl;
    activity arr[n];
    for(int i=0;i<n;i++){
        cout << "activity " << i+1 << ": " ;
        cin >> arr[i].start_time >> arr[i].finish_time;
        arr[i].index = i;
        cout << endl;
    }
    select_activity(arr,n);
    return 0;
}


Enter number of activities: 
6
Enter start and finish time for: 
activity 1: 5 9

activity 2: 1 2

activity 3: 3 4

activity 4: 0 6

activity 5: 5 7

activity 6: 8 9

Activities selected:
activity 2
activity 3
activity 5
activity 6
