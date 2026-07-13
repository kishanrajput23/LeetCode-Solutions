class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num = "123456789";
        vector<int> ans;
        for (int i=0; i<num.size()-1; i++) {
            for (int j=i+1; j<num.size(); j++) {
                int digit = stoi(num.substr(i, j-i+1));

                if (digit >= low && digit <= high) {
                    ans.push_back(digit);
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};