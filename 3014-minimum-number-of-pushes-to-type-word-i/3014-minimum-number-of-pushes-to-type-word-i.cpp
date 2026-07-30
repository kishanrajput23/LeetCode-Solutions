class Solution {
public:
    int minimumPushes(string word) {

        int ans = 0;

        for (int i = 0; i < word.size(); i++) {
            ans += (i / 8) + 1;
        }

        return ans;
    }
};