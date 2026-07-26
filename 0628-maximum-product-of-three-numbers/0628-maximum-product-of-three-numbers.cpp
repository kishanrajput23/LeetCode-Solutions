class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int x : nums) {

            // Update largest three

            if (x >= max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            }
            else if (x >= max2) {
                max3 = max2;
                max2 = x;
            }
            else if (x >= max3) {
                max3 = x;
            }

            // Update smallest two
            if (x <= min1) {
                min2 = min1;
                min1 = x;
            }
            else if (x <= min2) {
                min2 = x;
            }
        }

        int option1 = max1 * max2 * max3;
        int option2 = min1 * min2 * max1;

        return max(option1, option2);
    }
};