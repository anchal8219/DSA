#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    // Constructor to initialize data
    Node(int d) : data(d), next(nullptr) {}
    Node(int d, Node *n) : data(d), next(n) {}

    //or
    // Node(int d, Node *n = nullptr) : data(d), next(n) {}
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

// DELETION COMPLETED
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

Node *removeKth(Node *head,int k){
    if(head==nullptr) return head;
    Node *temp=head;
    Node *prev = new Node(0);
    prev->next = head;
    int c=1;
    while(temp->next!=nullptr){
        if(c==k){
            prev->next = temp->next;
            free(temp);
            return head;
        }
        
        temp=temp->next;
        prev=prev->next;
        c++;
    }
    return head;
}

Node *removeKthEl(Node*head,int el){
    Node *temp = head;
    Node *prev= new Node(0);
    prev->next = head;
    while(temp->next != nullptr){
        if(temp->data==el){
            prev->next = temp->next;
            delete temp;
            return head;
        }
        temp=temp->next;
        prev=prev->next;
    }
}
// DELETION COMPLETED


// INSERTION
Node *insertAtHead(Node *head,int el){
    // Node *newNode = new Node(el);
    // newNode->next = head;
    //or
    Node *newNode = new Node(el,head);


    // head = newNode;
    // return head;
    //or
    return newNode;
}

Node *insertAtEnd(Node *head,int el){
    Node *newNode = new Node(el);
    newNode->next  = nullptr;
    if (head == nullptr) {
        return newNode; 
    }
    Node *temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next = newNode;
    return head;
}

Node *insertAtKth(Node *head,int k, int el){
    if(head==nullptr){
        if(k==1){
            head = new Node(el);
        }
        else
        return head;
    }
    int c=0;
    Node *newNode=new Node(el);
    Node *temp = head;
    
    while(temp->next!=nullptr){
        c++;
        if(c==(k-1)){
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
        }
        temp=temp->next;
    }


}
// INSERTION


int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2ll(v);
    // cout<<head->data;
    // head = removeHead(head);
    // print(head);
    // cout<<endl;
    // head = removeTail(head);
    // print(head);
    // head = removeKth(head,2);
    // print(head);
    // head = removeKthEl(head,91);
    // print(head);


    head = insertAtHead(head,301);
    print(head);

    // head = insertAtEnd(head,556);
    // print(head);
    // head = insertAtKth(head,3,555);
    // print(head);

    // insertAtKth(Node *head,int k, int el)
    
}