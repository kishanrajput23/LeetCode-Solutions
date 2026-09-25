class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (string s : sentences) {
            stringstream ss(s);
            int count = 0;
            string word;

            while (ss >> word) {
                count++;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};