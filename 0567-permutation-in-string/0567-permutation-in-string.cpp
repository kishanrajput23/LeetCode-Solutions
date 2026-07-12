class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.size() > s2.size()) {
            return false;
        }

        int windowSize = s1.size();

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Frequency of s1
        for (char ch : s1) {
            freq1[ch - 'a']++;
        }

        // Frequency of first window
        for (int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }

        // Slide the window
        for (int right = windowSize; right < s2.size(); right++) {

            if (freq1 == freq2) {
                return true;
            }

            freq2[s2[right] - 'a']++;                  // Add new character
            freq2[s2[right - windowSize] - 'a']--;     // Remove old character
        }

        return freq1 == freq2;
    }
};