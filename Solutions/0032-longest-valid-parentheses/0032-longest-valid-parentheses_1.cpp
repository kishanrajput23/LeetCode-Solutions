//Approach-1 (Using 2 pass)
//T.C : O(n), 2 Pass
//S.C : O(1)
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();

        int open  = 0;
        int close = 0;

        int result = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                open++;
            }
            else {
                close++;
            }

            if (open == close) {
                result = max(result, open+close);
            } 
            else if(close > open) { //going from left to right, if close is more, it's no more valid
                open  = 0;
                close = 0;
            }
        }

        open  = 0;
        close = 0;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '(') {
                open++;
            }
            else {
                close++;
            }

            if (open == close) {
                result = max(result, open+close);
            } else if (open > close) { //going from right to left, if open is more, it's no more valid
                open  = 0;
                close = 0;
            }
        }

        return result;
    }
};