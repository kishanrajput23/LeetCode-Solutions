class Solution {
public:
    int countCommas(int n) {
        if (n < 1000) {
            return 0;
        }
        else {
            return n - 1000 + 1;
        }
    }
};