#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int d){
        val=d;
        left=nullptr;
        right=nullptr;
    }
};

class Solution{
    public:
    vector<int>leftsideView(Node *root){
        vector<int>res;
        vector<vector<int>> levelTraversal = levelOrder(root);

        for (auto level : levelTraversal) {
            res.push_back(level.front());
        }

        return res;
    }

    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;

        if (!root) return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* top = q.front();
                level.push_back(top->val);
                q.pop();

                if (top->left != NULL) {
                    q.push(top->left);
                }
                if (top->right != NULL) {
                    q.push(top->right);
                }
            }

            ans.push_back(level);
        }

        return ans;
    }
};

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(10);
    root->left->left->right = new Node(5);
    root->left->left->right->right = new Node(6);
    root->right = new Node(3);
    root->right->right = new Node(10);
    root->right->left = new Node(9);

    Solution solution;

    // Get the Left View traversal
    vector<int> leftView = solution.leftsideView(root);

    // Print the result for Left View
    cout << "Left View Traversal: ";
    for(auto node: leftView){
        cout << node << " ";
    }
    cout << endl;

    return 0;
}