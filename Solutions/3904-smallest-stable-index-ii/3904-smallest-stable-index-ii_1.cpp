class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> minFromIndex(n);
        int minEl = INT_MAX;

        for (int i=n-1; i>=0; i--) {
            minEl = min(minEl, nums[i]);
            minFromIndex[i] = minEl;
        }

        int maxEl = 0;
        for (int i=0; i<n; i++) {
            maxEl = max(maxEl, nums[i]);

            if (maxEl - minFromIndex[i] <= k) {
                return i;
            }
        }
        
        return -1;
    }
};