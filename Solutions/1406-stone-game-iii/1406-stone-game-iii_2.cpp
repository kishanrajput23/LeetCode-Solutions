class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {

        // Number of stones
        int n = stoneValue.size();

        // dp[i] = Maximum score difference
        // (Current Player's Score - Opponent's Score)
        // starting from index i.
        // dp[n] = 0 because there are no stones left.
        vector<int> dp(n + 1, 0);

        // Build the DP table from back to front.
        for (int i = n - 1; i >= 0; i--) {
            // Option 1: Take one stone.
            // Gain: stoneValue[i]
            // Opponent starts from i+1.
            dp[i] = stoneValue[i] - dp[i + 1];

            // Option 2: Take two stones (if available).
            // Gain: stoneValue[i] + stoneValue[i+1]
            // Opponent starts from i+2.
            if (i + 1 < n) {
                dp[i] = max(dp[i], stoneValue[i] + stoneValue[i + 1] - dp[i + 2]);
            }

            // Option 3: Take three stones (if available).
            // Gain: stoneValue[i] + stoneValue[i+1] + stoneValue[i+2]
            // Opponent starts from i+3.
            if (i + 2 < n) {
                dp[i] = max(dp[i], stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2]  - dp[i + 3]);
            }
        }

        // Final score difference after both players play optimally.
        int diff = dp[0];

        // Positive difference => Alice wins.
        if (diff > 0) {
            return "Alice";
        }

        // Negative difference => Bob wins.
        else if (diff < 0) {
            return "Bob";
        }

        // Zero difference => Tie.
        return "Tie";
    }
};