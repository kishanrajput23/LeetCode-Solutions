class Solution {
public:

    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        for (auto i : nums) {
            res |= i;
        }

        return res << (n-1);
    }
};