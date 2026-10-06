class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;

        for (char c : s) {
            if (c == '(') {
                open++;  // Increment the count for an unmatched '('
            } 
            else {
                if (open > 0) {
                    open--;  // Match this ')' with an unmatched '('
                } 
                else {
                    close++;  // Increment the count for an unmatched ')'
                }
            }
        }

        // Total additions needed are the sum of unmatched '(' and ')'
        return open + close;
    }
};