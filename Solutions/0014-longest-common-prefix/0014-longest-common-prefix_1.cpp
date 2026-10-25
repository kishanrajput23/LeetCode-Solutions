class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";

        for (int i=0;  i<strs[0].size(); i++) {
            bool temp = true;

            for (int j=1; j<strs.size(); j++) {
                if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                    temp = false;
                    break;
                }
            }

            if (!temp) {
                break;
            }

            s += strs[0][i];
        }

        return s;
    }
};