class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;

        for (auto i : s) {

            if (i == '(') {
                count++;

                // Not the outermost '('
                if (count > 1)
                    ans += i;
            }
            else if (i == ')') {
                count--;

                // Not the outermost ')'
                if (count > 0)
                    ans += i;
            }
        }

        return ans;
    }
};