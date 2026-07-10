class Solution {
public:
    int maxFreqSum(string s) {
        map<char, int> mp;
        int maxVowelFreq = 0;
        int maxConsonantFreq = 0;

        for (auto i : s) {
            mp[i]++;
        }

        for (auto i : mp) {
            if (i.first == 'a' || i.first == 'e' || i.first == 'i' || i.first == 'o' || i.first == 'u' ) {
                maxVowelFreq = max(maxVowelFreq, i.second);
            }
            else {
                maxConsonantFreq = max(maxConsonantFreq, i.second);
            }
        }

        return maxVowelFreq + maxConsonantFreq;
    }
};