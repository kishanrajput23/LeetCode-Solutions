class Solution {
    int i = 0;
public:
    string helper(string& s) {
        string result;

        while (i < s.length()) {
            if (s[i] == ')') {
                i++;
                reverse(result.begin(), result.end());
                return result;
            } 
            else if (s[i] == '(') {
                i++;
                string st = helper(s);
                result += st;
            } 
            else {
                result += s[i];
                i++;
            }
        }
        return result;
    }

    string reverseParentheses(string s) {
        return helper(s);
    }
};