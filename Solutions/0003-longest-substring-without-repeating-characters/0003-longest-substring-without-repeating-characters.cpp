class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); right++) {

            // Shrink the window until duplicate is removed
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }

            // Add current character
            window.insert(s[right]);

            // Update answer
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};