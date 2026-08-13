class Solution {
public:

    int reverseNumber(int num) {

        int reversedNum = 0;

        while (num > 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        return reversedNum;
    }

    int mirrorDistance(int n) {

        int reversedNum = reverseNumber(n);

        return abs(n - reversedNum);
    }
};