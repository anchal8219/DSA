
#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree *left;
    Tree *right;

    //contructor initialised
    Tree(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

void inorder_traversal (Tree*root){
    if (root == nullptr)
    return;
    inorder_traversal (root->left);
    cout<<root->data<<" ";
    inorder_traversal (root->right);

}

void preorder_traversal(Tree*root){
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(Tree*root){
    preorder_traversal(root->left);
    preorder_traversal(root->right);
    cout<<root->data<<" ";
}

vector<int> level_order(Tree*root){
    queue<Tree*>q;
    q.push(root);
    vector<int>v;
    while(!q.empty()){
        Tree* curr = q.front();
        v.push_back(curr->data);
        if(curr->left!=nullptr) q.push(curr->left);
        if(curr->right!=nullptr) q.push(curr->right);
        q.pop();
    }
    return v;
}

int main(){
    Tree *root = new Tree(15);
    root->left = new Tree (12);
    root->right = new Tree (54);
    root->left->left = new Tree (8);
    root->left->right = new Tree (13);
    root->left->left->left = new Tree (5);
    root->right->left = new Tree (18);
    // inorder_traversal (root);
    // cout<<endl;
    // preorder_traversal(root);
    // cout<<endl;
    // postorder_traversal(root);
    vector<int> result = level_order(root);

    // Print the level order traversal
    cout << "Level Order Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;


}