class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for (string word : words) {
            int totalWeight = 0;

            for (char ch : word) {
                totalWeight += weights[ch - 'a'];
            }

            ans += ('z' - (totalWeight % 26));
        }

        return ans;
    }
};