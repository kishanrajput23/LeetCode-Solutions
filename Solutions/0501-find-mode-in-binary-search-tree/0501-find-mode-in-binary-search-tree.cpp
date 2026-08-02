class Solution {
public:

    TreeNode* prev = nullptr;

    int currCount = 0;
    int maxCount = 0;

    vector<int> ans;

    void inorder(TreeNode* root) {

        if (root == nullptr) {
            return;
        }

        inorder(root->left);

        // Current value is same as previous value
        if (prev && prev->val == root->val) {
            currCount++;
        }
        else {
            currCount = 1;
        }

        // Found a better frequency
        if (currCount > maxCount) {

            maxCount = currCount;

            ans.clear();
            ans.push_back(root->val);
        }

        // Another mode found
        else if (currCount == maxCount) {

            ans.push_back(root->val);
        }

        prev = root;

        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {

        inorder(root);

        return ans;
    }
};