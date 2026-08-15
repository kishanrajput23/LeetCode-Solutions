class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int n = nums.size();
        int xr = 0;

        for (int x : nums) {
            xr ^= x;
        }

        // Entire array already has non-zero XOR
        if (xr != 0) {
            return n;
        }

        // If all elements are zero, no non-zero XOR
        for (int x : nums) {
            if (x != 0) {
                return n - 1;
            }
        }

        return 0;
    }
};