#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    struct node *left;
    struct node *right;
    node(int k){
        val = k;
        left=right=nullptr;
    }
};

void right_view(node *root){
    if(root==nullptr) return ;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int sz = q.size();
        for(int i=0;i<sz;i++){
            node *curr = q.front();
            q.pop();
            if(i==0) cout<<curr->val<<" ";
            if(curr->right!=nullptr) q.push(curr->right);
            if(curr->left!=nullptr) q.push(curr->left);
            
        }
    }

}

int main(){
    node *root = new node(60);
    root->left = new node(20);
    root->right = new node(30);
    root->left->right = new node(50);
    root->right->left = new node(70);
    root->right->right = new node(80);
    root->left->right->left = new node(90);
    right_view(root);

}