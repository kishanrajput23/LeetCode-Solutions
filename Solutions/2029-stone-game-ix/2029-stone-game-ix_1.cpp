class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        if (cnt[0] % 2 == 0) {
            return cnt[1] >= 1 && cnt[2] >= 1;
        }

        return abs(cnt[1] - cnt[2]) > 2;
    }
};