#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int d){
        val=d;
        left=nullptr;
        right=nullptr;
    }
};

bool isSymmetric(TreeNode* a, TreeNode* b){
    if(a==nullptr || b==nullptr)
    return (a==b);

    if(a->val!=b->val) return false;
    return isSymmetric(a->left,b->right) && isSymmetric(b->left,a->right);

}

int main(){
    TreeNode *root = new TreeNode(15);
    root->left = new TreeNode (12);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode (8);
    root->left->right = new TreeNode (13);
    root->left->left->left = new TreeNode (5);
    root->right->left = new TreeNode (13);
    root->right->right = new TreeNode (8);
    root->right->right->right = new TreeNode (5);

    if(root==nullptr) cout<<true;
    bool f = isSymmetric(root->left, root->right);

    cout << f;
    return 0;


}
