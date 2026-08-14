class Solution {
public:
    int maximumLengthSubstring(string s) {

        int ans = 0;
        int left = 0;

        map<char, int> freq;

        for (int right = 0; right < s.size(); right++) {

            // Add current character
            freq[s[right]]++;

            // If any character appears more than twice,
            // shrink the window from the left.
            while (freq[s[right]] > 2) {
                freq[s[left]]--;
                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};