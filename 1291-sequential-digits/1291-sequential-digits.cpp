class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num = "123456789";
        vector<int> ans;

        for (int len = 2; len <= 9; len++) {

            for (int start = 0; start + len <= 9; start++) {

                int value = stoi(num.substr(start, len));

                if (value >= low && value <= high) {
                    ans.push_back(value);
                }
            }
        }

        return ans;
    }
};