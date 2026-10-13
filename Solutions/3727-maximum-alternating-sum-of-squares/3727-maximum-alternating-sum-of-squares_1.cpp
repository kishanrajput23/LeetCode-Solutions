class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (auto& x : nums) {
            x = abs(x);
        }

        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        long long ans = 0;

        while (i < j) {
            ans += 1LL * nums[j] * nums[j];
            ans -= 1LL * nums[i] * nums[i];

            i++;
            j--;
        }

        if (i == j) {
            ans += 1LL * nums[i] * nums[i];
        }

        return ans;
    }
};