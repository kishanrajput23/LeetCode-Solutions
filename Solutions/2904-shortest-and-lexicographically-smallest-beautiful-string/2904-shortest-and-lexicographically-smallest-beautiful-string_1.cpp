class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();

        for (int len = k; len <= n; len++) {

            string result = "";

            //trying all possible substr of len
            for (int start = 0; start <= n-len; start++) { 
                string temp = s.substr(start, len);

                int ones = 0;
                for (char ch : temp) {
                    ones += (ch == '1') ? 1 : 0;
                }

                // Keep it if it's beautiful and smaller than current best.
                if (ones == k) {
                    if (result.empty() || temp < result) {
                        result = temp;
                    }
                }
            }
            
            //if we find result of k size, then it's smallest , no need to move to k++
            if(!result.empty()) {
                return result;
            }
        }
        return "";
    }
};