/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector<int>& preorder, int& index, int lower, int upper) {
        if (index == preorder.size() || preorder[index] < lower || preorder[index] > upper)
            return NULL;

        TreeNode* root = new TreeNode(preorder[index++]);
        root->left = build(preorder, index, lower, root->val);
        root->right = build(preorder, index, root->val, upper);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return build(preorder, index, INT_MIN, INT_MAX);
    }
};
