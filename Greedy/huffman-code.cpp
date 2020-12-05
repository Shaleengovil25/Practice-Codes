// Time O(nlogn)  Space O(n), where n is no. of unique character/data (no. of leaf nodes in Huffman tree).

#include<bits/stdc++.h>
using namespace std;

// A Huffman Tree node
struct MinHeapNode{
    // one node will contain 4 items:data,frequency,pointer to left and right child.
    char data;
    int freq;
    MinHeapNode *left, *right;
    //constructor
    MinHeapNode(int data, int freq){
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

//compare two nodes of Huffman Tree to make minHeap.
struct compare{
    bool operator()(MinHeapNode* L, MinHeapNode* R){
        return (L->freq > R->freq);
    }
};

// recursive func to print huffman code from root to leaf nodes.
void printcode(struct MinHeapNode* root, string str){
    if(!root){
        return;
    }
    if(root->data!='$'){
        cout << root->data << " is coded as " << str << endl;
    }

    printcode(root->left,str+"0");
    printcode(root->right,str+"1");
}

void HuffmanCode(char arr[], int freq[], int n){
    MinHeapNode *left, *right, *top;

    //standard way of creating min Heap using priority queue.
    //NOTE: priority queue by default makes max heap.
    priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> minHeap;

    //insert data into min heap.
    for(int i=0;i<n;i++){
        minHeap.push(new MinHeapNode(arr[i],freq[i]));
    }

    while(minHeap.size()!=1){
        // extract two minimum freq items from minHeap.
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        /* make a new node in minHeap with freq = sum of freq of two minimum
        and data = $, make extracted nodes its children.*/
        top = new MinHeapNode('$',left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }

    cout << "\nThe Huffman Coding is as follows:\n";
    printcode(minHeap.top(),"");
}

int main(){
    cout << "Enter no. of characters/nodes:" << endl;
    int n;
    cin >> n;
    char arr[n];
    int freq[n];
    cout << "Enter character and its frequency:" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        cin >> freq[i];
    }
    HuffmanCode(arr,freq,n);
    return 0;
}




Enter no. of characters/nodes:
6
Enter character and its frequency:
a 5
b 9
c 12
d 13
e 16
f 45

The Huffman Coding is as follows:
f is coded as 0
c is coded as 100
d is coded as 101
a is coded as 1100
b is coded as 1101
e is coded as 111
