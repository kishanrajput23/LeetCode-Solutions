class Solution {
public:

    // Store inorder traversal
    void inorder(TreeNode* root, vector<int>& nums) {

        if (root == nullptr) {
            return;
        }

        inorder(root->left, nums);

        nums.push_back(root->val);

        inorder(root->right, nums);
    }

    vector<int> findMode(TreeNode* root) {

        vector<int> nums;
        inorder(root, nums);

        vector<int> ans;

        int currCount = 1;
        int maxCount = 1;

        ans.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i - 1]) {
                currCount++;
            }
            else {
                currCount = 1;
            }

            if (currCount > maxCount) {

                maxCount = currCount;

                ans.clear();
                ans.push_back(nums[i]);
            }
            else if (currCount == maxCount) {

                if (ans.empty() || ans.back() != nums[i]) {
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};
