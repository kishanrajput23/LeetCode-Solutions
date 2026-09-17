class Solution {
public:
    string interpret(string command) {
        string s = "";
        int count = 0;
        
        while (count < command.length()) {
            if (command[count] == 'G') {
                s += "G";
                count++;
            }
            else if (command[count] == '(' && command[count+1] == ')') {
                s += "o";
                count += 2;
            }
            else {
                s += "al";
                count += 4;
            }
        }
        return s;
    }
};