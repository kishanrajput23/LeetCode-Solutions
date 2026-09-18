class Solution {
public:
    int minBitFlips(int start, int goal) {
        if (start == goal) {
            return 0;
        }

        int xorResult = start ^ goal;
        int ans = 0;
        
        
        while (xorResult > 0) {
            ans += xorResult & 1; 
            xorResult >>= 1;
        }
        
        return ans;
    }
};