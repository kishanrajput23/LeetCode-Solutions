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

    bool validate(TreeNode* root, long long low, long long high) {

        // Empty tree is always valid
        if (root == nullptr) {
            return true;
        }

        // Current node must lie within (low, high)
        if (root->val <= low || root->val >= high) {
            return false;
        }

        // Check left and right subtrees
        return validate(root->left, low, root->val) && validate(root->right, root->val, high);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};