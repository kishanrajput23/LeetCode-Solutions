class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if (is_sorted(s.begin(), s.end())) {
            return 0;
        }

        if (n == 2) {
            return -1;
        }

        char mn = *min_element(s.begin(), s.end());
        char mx = *max_element(s.begin(), s.end());

        if (s.front() == mn || s.back() == mx) {
            return 1;
        }

        if (s.front() == mx && s.back() == mn) {
            if (count(s.begin(), s.end(), mx) == 1 &&
                count(s.begin(), s.end(), mn) == 1) {
                return 3;
            }
        }

        return 2;
    }
};
