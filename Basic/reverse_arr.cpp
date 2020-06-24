APPROACH 1: Time O(n) Space O(n)

void reverse_arr(int arr[],int n){
    int arr2[4];
    for(int i=0;i<4;i++){
        arr2[i] = arr[3-i];
    }
    for(int i=0;i<4;i++){
        arr[i] = arr2[i];
    }
}

APPROACH 2: Time O(n) Space O(1)

void reverse_arr(int arr[],int n){
    int start = 0;
    int end =  n-1;
    while(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

int main(){
  int arr[] = {1,2,4,3,5};
  reverse_arr(arr,5);
  for(int i=0;i<5;i++){
    cout << arr[i];
  }
  return 0;
}
