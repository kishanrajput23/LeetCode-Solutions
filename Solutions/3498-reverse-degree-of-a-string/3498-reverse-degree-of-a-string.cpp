class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int val = 'z' - s[i] + 1;
            sum += val * (i + 1);
        }

        return sum;
    }
};