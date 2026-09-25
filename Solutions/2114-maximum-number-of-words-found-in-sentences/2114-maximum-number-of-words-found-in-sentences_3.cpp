class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (const string& s : sentences) {
            int words = count(s.begin(), s.end(), ' ') + 1;
            maxi = max(maxi, words);
        }

        return maxi;
    }
};