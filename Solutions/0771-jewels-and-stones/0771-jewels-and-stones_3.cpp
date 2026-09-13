class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool isJewel[128] = {};
        int count = 0;

        for (char c : jewels)
            isJewel[c] = true;

        for (char c : stones) {
            if (isJewel[c])
                count++;
        }

        return count;
    }
};