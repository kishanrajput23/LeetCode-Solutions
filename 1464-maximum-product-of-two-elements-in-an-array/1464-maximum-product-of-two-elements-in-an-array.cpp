class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (auto i : nums) {
            if (i >= max1) {
                max2 = max1;
                max1 = i;
            }
            else if (i >= max2) {
                max2 = i;
            }
        }

        return (max1-1) * (max2-1);
    }
};