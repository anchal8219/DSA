#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Constructor to initialize data
    Node(int d) : data(d), next(nullptr) {}
};

Node *arr2ll(vector<int>arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1;i<arr.size();i++){
        Node *tmp = new Node(arr[i]);
        mover->next = tmp;
        mover = mover->next;
    }
    return head;
}

int main(){
    vector<int>v={5,8,7};
    Node *head = arr2ll(v);
    cout<<head->data;
}