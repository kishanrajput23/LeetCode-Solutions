class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0;
        int maxOpen = 0;

        for (char c : s) {

            if (c == '(') {
                minOpen++;
                maxOpen++;
            }
            else if (c == ')') {
                minOpen--;
                maxOpen--;
            }
            else { // '*'
                minOpen--; // '*' acts as ')'
                maxOpen++; // '*' acts as '('
            }

            // Too many closing brackets
            if (maxOpen < 0) {
                return false;
            }

            // Minimum cannot be negative
            minOpen = max(0, minOpen);
        }

        return minOpen == 0;
    }
};