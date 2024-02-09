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

int mxWidth(node *root){
    if(root==nullptr) return 0;
    queue<node*>q;
    q.push(root);
    int mx=INT_MIN,c=0;
    while(!q.empty()){
        int sz = q.size();
        c=0;
        for(int i=0;i<sz;i++){
            node *curr = q.front();
            q.pop();
            c++;
            
            if(curr->left!=nullptr) q.push(curr->left);
            if(curr->right!=nullptr) q.push(curr->right);
            
            
        }
        mx = max(mx,c);
    }
    return mx;

}

int main(){
    node *root = new node(60);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(10);
    root->left->right = new node(50);
    root->right->left = new node(70);
    root->right->right = new node(80);
    root->left->right->left = new node(90);
    cout<<mxWidth(root);

}