class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* node = st.top(); st.pop();
            result.push_back(node->val);            // Visit root

            if (node->right) st.push(node->right);  // Push right first
            if (node->left) st.push(node->left);    // Push left next (so it's processed first)
        }

        return result;
    }
};
