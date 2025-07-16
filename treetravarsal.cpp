//Given the root of a binary tree, return the inorder traversal of its nodes' values.
// Example 1:
// Input: root = [1,null,2,3]
// Output: [1,3,2]
class Solution {
public:
    void inOrder(TreeNode* node, vector<int>& res) {
        if (!node) return;
        inOrder(node->left, res);
        res.push_back(node->val);
        inOrder(node->right, res);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inOrder(root, res);
        return res;
    }
};
