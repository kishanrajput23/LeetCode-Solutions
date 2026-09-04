class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i=0; i<n; i++) {
            int largest = nums[0];
            int smallest = nums[i];

            for (int j=0; j<=i; j++) {
                largest = max(largest, nums[j]);
            }
            
            for (int j=i; j<n; j++) {
                smallest = min(smallest, nums[j]);
            }

            if (largest - smallest <= k) {
                return i;
            }
        }
        return -1;
    }
};