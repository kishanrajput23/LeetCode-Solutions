class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (const string& s : sentences) {
            int count = 1;
            size_t pos = 0;

            while ((pos = s.find(' ', pos)) != string::npos) {
                count++;
                pos++;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};