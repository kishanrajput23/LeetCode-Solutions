//Approach (Greedy)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftKnownSum = 0;
        int rightKnownSum = 0;

        int leftQnMarkCount = 0;
        int rightQnmarkCount = 0;

        for(int i = 0; i < n; i++) {
            if(num[i] == '?') {
                if(i < n/2) {
                    leftQnMarkCount++;
                } 
                else {
                    rightQnmarkCount++;
                }
            } 
            else {
                if(i < n/2) {
                    leftKnownSum += num[i] - '0';
                } 
                else {
                    rightKnownSum += num[i] - '0';
                }
            }
        }

        int totalQnMarks = leftQnMarkCount + rightQnmarkCount;
        if (totalQnMarks % 2 == 1) { //Odd - alice always wins
            return true;
        }

        int LEFT = 2 * leftKnownSum + 9*leftQnMarkCount;

        int RIGHT = 2 * rightKnownSum + 9*rightQnmarkCount;

        if(LEFT == RIGHT) //Bob wins
            return false;

        return true;
    }
};