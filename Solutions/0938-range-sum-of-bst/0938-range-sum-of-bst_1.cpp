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

    // inorder traversal [L, N, R]
    void inorder(TreeNode* root, int &sum, int low, int high) {
    
        // base case
        if (root == NULL) {
            return ;
        }

        inorder(root->left, sum, low, high);        // L

        if (root->val >= low && root->val <= high) {
            sum += root->val;
        }

        inorder(root->right, sum, low, high);       // R
}
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        inorder(root, sum, low, high);
        return sum;
    }
};