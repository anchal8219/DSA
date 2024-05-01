#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    //constructor
    Node(int d, Node *n=nullptr): data(d), next(n) {};
    
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

Node* removeNthFromEnd(Node* head, int n) {
        Node *t = head;
        int c=0;
        while(t!=nullptr){
            c++;
            t=t->next;
        }
        // cout<<c;
        t = head;
        int d = c-n,c1=0;
        while(t!=nullptr && t->next!= nullptr){
            c1++;
            if(c1==d){
                t->next = t->next->next;
                // free(t);
            }
            t=t->next;
        }
        if (d == 0) {
            head = head->next;
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

int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2ll(v);

    head = removeNthFromEnd(head,3);
    print(head);
}