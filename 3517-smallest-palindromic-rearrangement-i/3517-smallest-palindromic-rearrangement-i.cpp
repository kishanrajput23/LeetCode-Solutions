class Solution {
public:
    string smallestPalindrome(string s) {

        // Frequency array to count occurrences of each character
        vector<int> freq(26, 0);

        // Count frequency of every character
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        string left = "";

        // Build the left half of the palindrome
        for (int i = 0; i < 26; i++) {

            // Half of the occurrences go to the left side
            int n = freq[i] / 2;

            // Keep only the remaining (0 or 1) occurrence
            // for the middle character
            freq[i] = freq[i] % 2;

            // Add the current character 'n' times
            while (n--) {
                left += (i + 'a');
            }
        }

        string middle = "";

        // Build the middle part (only characters with odd frequency remain)
        for (int i = 0; i < 26; i++) {
            int n = freq[i];

            while (n--) {
                middle += (i + 'a');
            }
        }

        // Right half is simply the reverse of the left half
        string right = left;
        reverse(right.begin(), right.end());

        // Combine all three parts
        return left + middle + right;
    }
};