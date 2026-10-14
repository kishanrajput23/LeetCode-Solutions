//Approach (Greedily Pick largest digit 9)
//T.C : O(num), we form a string of num digits
//S.C : O(1)
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) {
            return "";
        }
        
        int nines = sum / 9;
        int remain = sum % 9;

        string result(nines, '9');

        if (remain > 0) {
            result.push_back(remain + '0');
        }

        result.append(num - result.length(), '0');

        return result;
    }
};