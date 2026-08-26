class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0;
        int ones = 0;     // number of '1's in window [i, j]
        string result = "";

        for (int j = 0; j < n; j++) {
            if (s[j] == '1') 
                ones++;

            //remove extra 1's, then trim leading 0's
            while (ones > k || s[i] == '0') {
                if (s[i] == '1') {
                    ones--;
                }
                i++;
            }

            if (ones == k) {
                string temp = s.substr(i, j - i + 1);
                if (result.empty()
                    || j - i + 1 < result.length()
                    || (j - i + 1 == result.length() && temp < result)) {

                    result = temp;
                }
            }
        }

        return result;
    }
};
