//Approach (Khandani Backtracking template -> all possible options)
//T.C : O(2^n), 2 choice for each index in worst case
//S.C : O(M*N), M = total possible strings in set, N = Average length of each string

class Solution {
private:
    unordered_set<string> st;
    int n;

    void solve(const string& s, int i, string& curr, int count, int& maxLen) {
        if (count < 0) { //invalid
            return;
        }

        if (i == n) {
            if (count == 0) {
                if (curr.length() > maxLen) {        // found a longer valid string
                    maxLen = curr.length();
                    st.clear();
                }
                
                if (curr.length() == maxLen) {
                    st.insert(curr);
                }
                
            }
            return;
        }

        if (s[i] != '(' && s[i] != ')') {                     // letter: always keep
            curr.push_back(s[i]);
            solve(s, i + 1, curr, count, maxLen);
            curr.pop_back();
            return;
        }

        //Do
        curr.push_back(s[i]);

        //Explore
        solve(s, i + 1, curr, count + (s[i] == '(' ? 1 : -1), maxLen);

        //Undo and explore
        curr.pop_back();
        solve(s, i + 1, curr, count, maxLen);
    }

public:
    vector<string> removeInvalidParentheses(string s) {
        n = s.length();
        int maxLen = 0;
        st.clear();

        string curr = "";
        solve(s, 0, curr, 0, maxLen);

        return vector<string>(st.begin(), st.end());
    }
};