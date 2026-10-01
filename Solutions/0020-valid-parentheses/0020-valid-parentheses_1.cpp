class Solution {
public:
    bool isValid(string s) {
        stack<char> v;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                v.push(s[i]);
            }
            else {
                char c = s[i];
                if (!v.empty()) {
                    char ch = v.top();
                    v.pop();
                    if ((c == ')' && ch == '(') || (c == ']' && ch == '[') || (c == '}' && ch == '{')) {
                        continue;
                    }
                    else {
                        return false;
                    }
                } 
                else {
                    return false;
                }
            }
        }

        return v.empty();
    }
};