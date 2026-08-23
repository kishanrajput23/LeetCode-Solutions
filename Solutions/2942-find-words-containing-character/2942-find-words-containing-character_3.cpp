class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> res;

        for (int i = 0 ; i < words.size() ; i++) {
            if (count(words[i].begin(), words[i].end(), x)) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};