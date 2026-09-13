class Solution {
public:
    int calSum(int num) {
        int sum = 0;
        while (num > 0) {
            int rem = num%10;
            sum += rem;
            num /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;

        for (int num : nums) {
            minimum = min(minimum, calSum(num));
        }

        return minimum;
    }
};