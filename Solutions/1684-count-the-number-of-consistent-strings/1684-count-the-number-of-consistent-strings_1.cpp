class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        int arr[26] = {0};

        for (auto ch : allowed) {
            arr[ch - 'a'] = 1;
        }

        for (auto word : words) {
            bool flag = true;
            for (auto ch : word) {
                if (arr[ch-'a'] == 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                count++;
            }
        }
        return count;
    }
};