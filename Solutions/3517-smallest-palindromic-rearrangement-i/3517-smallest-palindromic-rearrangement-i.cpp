class Solution {
public:
    string smallestPalindrome(string s) {

        // Store frequency of each character
        vector<int> freq(26, 0);

        // Count frequencies
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        string middle = "";

        // Build the left half and identify the middle character
        for (int i = 0; i < 26; i++) {

            // Add half of the occurrences to the left half
            left.append(freq[i] / 2, char(i + 'a'));

            // If frequency is odd, one character stays in the middle
            if (freq[i] % 2 == 1) {
                middle += char(i + 'a');
            }
        }

        // Right half is the mirror image of the left half
        string right = left;
        reverse(right.begin(), right.end());

        // Form the smallest palindromic rearrangement
        return left + middle + right;
    }
};