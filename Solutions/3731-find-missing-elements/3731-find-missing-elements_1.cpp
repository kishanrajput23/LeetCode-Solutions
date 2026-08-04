class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        // Sort the array so adjacent elements can be compared
        sort(nums.begin(), nums.end());

        // Traverse adjacent pairs
        for (int i = 0; i < nums.size() - 1; i++) {

            // Add all missing numbers between nums[i] and nums[i+1]
            for (int num = nums[i] + 1; num < nums[i + 1]; num++) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};