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

void print(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//always remember while removing, then free it also
Node *removeHead(Node *head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;

}

Node *removeTail(Node *head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node *temp = head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2ll(v);
    // cout<<head->data;
    head = removeHead(head);
    print(head);
    cout<<endl;
    head = removeTail(head);
    print(head);
    
    
}