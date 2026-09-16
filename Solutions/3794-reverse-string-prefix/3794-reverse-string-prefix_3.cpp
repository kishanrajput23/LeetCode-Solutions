class Solution {
public:
    string reversePrefix(string s, int k) {
        string temp = s.substr(0, k);
        reverse(temp.begin(), temp.end());

        return temp + s.substr(k);
    }
};