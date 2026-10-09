class Solution {
public:
    int minInsertions(string s) {
        int ans = 0;
        stack<char> st;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == '(') {
                st.push(s[i]);
                i++;
            }
            else if (s[i] == ')') {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    if (!st.empty()) {
                        st.pop();
                    } else {
                        ans++; // Insert '('
                    }
                    i += 2;
                }
                else {
                    if (!st.empty()) {
                        st.pop();
                        ans++; // Insert one ')' to complete the pair
                    } else {
                        ans += 2; // Insert '(' and another ')'
                    }
                    i++;
                }
            }
        }

        ans += 2 * st.size();
        return ans;
    }
};