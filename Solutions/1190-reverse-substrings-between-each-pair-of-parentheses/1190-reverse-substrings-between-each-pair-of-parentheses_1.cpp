class Solution {
public:
    string reverseParentheses(string s) {
        // oc = co
        // etco = octe
        // edocteel = leetcode

        stack<string> st;
        string currentStr = "";

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '(') {
                st.push(currentStr);
                currentStr = "";
            }
            else if (s[i] == ')') {
                reverse(currentStr.begin(), currentStr.end());
                if (!st.empty()) {
                    currentStr = st.top() + currentStr;
                    st.pop();
                }
            }
            else {
                currentStr += s[i];
            }
        }
        return currentStr;
    }
};