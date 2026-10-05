class Solution {
public:
    int scoreOfParentheses(string s) {
        int open = 0;

        for (auto i : s) {
            if (i == '(') {
                open++;
            }
        }

        return open;
    }
};