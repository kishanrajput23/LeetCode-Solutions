class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }

    int maxVowels(string s, int k) {
        int vowelCount = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                vowelCount++;
            }
        }

        int maxVowelCount = vowelCount;

        // Slide the window
        for (int i = k; i < s.size(); i++) {

            // Include the new character
            if (isVowel(s[i])) {
                vowelCount++;
            }

            // Exclude the leftmost character
            if (isVowel(s[i - k])) {
                vowelCount--;
            }

            maxVowelCount = max(maxVowelCount, vowelCount);
        }

        return maxVowelCount;
    }
};