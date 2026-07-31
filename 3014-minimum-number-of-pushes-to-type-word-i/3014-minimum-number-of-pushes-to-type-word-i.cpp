class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        int keys = 8;

        int n = word.size();

        if (n <= keys) {
            return n;
        }
        else {
            ans += 8;
            int round = 2;
            for (int i=keys+1; i<=n; i++) {
                ans += round;

                if (i % keys == 0) {
                    round++;
                }
            }
        }

        return ans;
    }
};