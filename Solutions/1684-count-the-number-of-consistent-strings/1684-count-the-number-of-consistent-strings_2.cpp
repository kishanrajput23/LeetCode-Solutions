class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st(allowed.begin(), allowed.end());
        int count = 0;

        for (string word : words) {
            bool consistent = true;

            for (char c : word) {
                if (!st.count(c)) {
                    consistent = false;
                    break;
                }
            }

            if (consistent)
                count++;
        }

        return count;
    }
};