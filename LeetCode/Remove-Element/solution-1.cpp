// Remove Element
// Platform: LeetCode
// Language: cpp
// Status: Accepted
// Synced: 2026-07-31T19:01:12.958Z

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (auto i : nums) {
            if (i != val) {
                nums[count++] = i;
            }
        }
        return count;
    }
};