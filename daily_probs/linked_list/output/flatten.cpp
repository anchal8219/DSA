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



int main(){
    vector<int>v={5,91,21,15,4};
    Node *head = arr2ll(v);



    head = insertAtHead(head,301);
    print(head);


    
    



    
    
}
