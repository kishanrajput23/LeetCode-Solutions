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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == nullptr) {
            return ans;
        }

        queue<TreeNode*> q;

        q.push(root);

        bool leftToRight=true;

        while(!q.empty()) {
            int n = q.size();

            vector<int> level(n);

            for (int i=0; i<n; i++) {
                TreeNode* node=q.front();
                q.pop();

                int index = leftToRight ? i : n-1-i;

                level[index] = node->val;

                if (node->left) {
                    q.push(node->left);
                }

                if (node->right) {
                    q.push(node->right);
                }
            }

            ans.push_back(level);

            leftToRight = !leftToRight;
        }
        return ans;
    }
};