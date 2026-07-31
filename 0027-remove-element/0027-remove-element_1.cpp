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