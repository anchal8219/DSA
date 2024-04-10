#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int d, Node*n=nullptr, Node*p=nullptr) :data(d) ,next(n), prev(p){}
};

void print(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node *arr2Dll(vector<int>arr){
    Node *head = new Node(arr[0]); // here automatically assign null to both prev and next as we already assined it to the constructor itself
    Node *prev=head;
    for(int i=1;i<arr.size();i++){
        Node *newNode= new Node(arr[i],nullptr,prev);
        prev->next= newNode;
        prev= newNode;
    }
    return head;
}

int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2Dll(v);
    print(head);
    
    
    
    



    
    
}