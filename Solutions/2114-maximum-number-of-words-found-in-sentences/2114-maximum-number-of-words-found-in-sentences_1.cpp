class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for (int i=0; i<sentences.size(); i++) {
            string s = sentences[i];
            int count = 1;
            for(int j=0; j<s.length(); j++) {
                if (s[j] == ' '){
                    count++;
                }
            }
            if (maxi < count) {
                maxi = count;
            }
        }
        return maxi;
    }
};