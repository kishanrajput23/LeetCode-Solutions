class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;

        for (int i=0; i<s.size(); i++) {
            mp1[s[i]] = i;
        }

        for (int i=0; i<t.size(); i++) {
            mp2[t[i]] = i;
        }

        int sum = 0;
        for (auto i : s) {
            sum += abs(mp1[i] - mp2[i]);
        }

        return sum;
    }
};