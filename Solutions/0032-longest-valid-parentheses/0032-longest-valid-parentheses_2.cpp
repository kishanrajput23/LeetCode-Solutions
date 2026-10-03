//Approach-2 (Using Stack)
//T.C : O(n) - 1 Pass
//S.C : O(n)
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);

        int maxL = 0;

        int n = s.length();

        for(int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } 
            else {
                st.pop();
                
                if (st.empty()) {
                    st.push(i);
                } 
                else {
                    maxL = max(maxL, i - st.top());
                }
            }
        }
        return maxL;
    }
};