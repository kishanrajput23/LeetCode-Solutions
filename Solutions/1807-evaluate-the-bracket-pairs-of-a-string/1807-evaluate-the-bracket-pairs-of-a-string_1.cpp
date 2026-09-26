class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;

        for (auto i : knowledge) {
            mp[i[0]] = i[1];
        }

        string ans = "";
        
        string temp = "";

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                while (s[i] != ')') {
                    temp += s[i];
                    i++;
                }

                temp = temp.substr(1);
                if (mp.find(temp) == mp.end()) {
                    ans += '?';
                }
                else {
                    ans += mp[temp];
                }
                temp = "";
            }
            else {
                ans += s[i];
            }
        }
        return ans;
    }
};