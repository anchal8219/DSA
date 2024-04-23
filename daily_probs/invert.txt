TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            TreeNode* n=st.top();
            st.pop();
            if(n!=NULL){
                st.push(n->left);
                st.push(n->right);
                swap(n->left,n->right);
            }
        }
        return root;
    }