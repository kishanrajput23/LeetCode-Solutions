/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if (root == nullptr) {
            return 0;
        }

        int ans = 0;

        // Queue stores {node, index}
        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        while (!q.empty()) {

            int levelSize = q.size();

            // Normalize indices to avoid overflow
            unsigned long long minIndex = q.front().second;

            unsigned long long first, last;

            // Process one complete level
            for (int i = 0; i < levelSize; i++) {

                auto front = q.front();
                q.pop();

                TreeNode* node = front.first;

                // Normalize index
                unsigned long long index = front.second - minIndex;

                // Save first and last index of this level
                if (i == 0) {
                    first = index;
                }

                if (i == levelSize - 1) {
                    last = index;
                }

                // Push left child
                if (node->left) {
                    q.push({node->left, 2 * index + 1});
                }

                // Push right child
                if (node->right) {
                    q.push({node->right, 2 * index + 2});
                }
            }

            // Width of current level
            ans = max(ans, (int)(last - first + 1));
        }

        return ans;
    }
};