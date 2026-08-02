class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = n * n;
        int evenSum = n * (n+1);

        int ans = gcd(oddSum, evenSum);

        return ans;
    }
};