class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256, -1);

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); right++) {

            if (lastSeen[s[right]] >= left) {
                left = lastSeen[s[right]] + 1;
            }

            maxLength = max(maxLength, right - left + 1);

            lastSeen[s[right]] = right;
        }

        return maxLength;
    }
};