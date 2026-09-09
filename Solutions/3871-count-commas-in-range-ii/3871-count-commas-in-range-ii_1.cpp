class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        // Numbers with 4-6 digits have 1 comma
        if (n >= 1000) {
            ans += min(n, 999999LL) - 1000 + 1;
        }

        // Numbers with 7-9 digits have 2 commas
        if (n >= 1000000) {
            ans += (min(n, 999999999LL) - 1000000 + 1) * 2;
        }

        // Numbers with 10-12 digits have 3 commas
        if (n >= 1000000000LL) {
            ans += (min(n, 999999999999LL) - 1000000000LL + 1) * 3;
        }

        // Numbers with 13-15 digits have 4 commas
        if (n >= 1000000000000LL) {
            ans += (n - 1000000000000LL + 1) * 4;
        }

        return ans;
    }
};