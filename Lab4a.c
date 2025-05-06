class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return Mirror(root, root);
    }

    bool Mirror(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;
        if (!t1 || !t2) return false;
        return (t1->val == t2->val)
            && Mirror(t1->left, t2->right)
            && Mirror(t1->right, t2->left);
    }
};
