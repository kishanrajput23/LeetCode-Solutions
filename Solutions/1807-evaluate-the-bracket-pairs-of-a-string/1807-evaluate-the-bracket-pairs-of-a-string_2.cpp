class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;

        for (auto i : knowledge) {
            mp[i[0]] = i[1];
        }

        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                string temp = "";
                i++;  // move after '('

                while (s[i] != ')') {
                    temp += s[i];
                    i++;
                }

                if (mp.find(temp) == mp.end()) {
                    ans += '?';
                } else {
                    ans += mp[temp];
                }
            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};