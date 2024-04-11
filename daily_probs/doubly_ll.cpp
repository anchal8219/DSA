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

Node *deleteHead(Node *head){
    if(head==nullptr) return head;
    else if(head->next==nullptr) {
        delete head;
        return nullptr;
    }
    else{
        Node *temp=head;
        head=head->next;
        head->prev = nullptr;
        temp->next=nullptr;
        delete temp;
        return head;
    }
}

Node *deleteTail(Node *head){
    if(head==nullptr) return head;
    else if(head->next==nullptr) {
        delete head;
        return nullptr;
    }
    else{
       Node *temp=head;
       while(temp->next->next!=nullptr){
           temp=temp->next;
       } 
       Node *ws = temp->next;
       
       temp->next->prev=nullptr;
       temp->next=nullptr;
       
    //    temp->next->prev=temp;
       delete ws;
       return head;
       

    }
}

int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2Dll(v);
    // print(head);

    // head = deleteHead(head);
    // print(head);
    head = deleteTail(head);
    print(head);
    
    
    



    
    
}