class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long> prefixGcd;

        int maxElement = 0;

        // Build the prefixGcd array
        for (int num : nums) {
            maxElement = max(maxElement, num);
            prefixGcd.push_back(gcd(num, maxElement));
        }

        // Sort the array
        sort(prefixGcd.begin(), prefixGcd.end());

        long long gcdSum = 0;

        int left = 0;
        int right = prefixGcd.size() - 1;

        // Pair smallest with largest
        while (left < right) {
            gcdSum += gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return gcdSum;
    }
};