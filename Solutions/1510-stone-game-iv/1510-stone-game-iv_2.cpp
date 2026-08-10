class Solution {
public:
    bool winnerSquareGame(int n) {

        // dp[i] = whether the current player can win
        // when there are i stones remaining.
        vector<bool> dp(n + 1, false);

        // dp[0] = false
        // No stones left -> current player loses.

        for (int i = 1; i <= n; i++) {

            // Try taking every possible perfect square
            for (int j = 1; j * j <= i; j++) {

                // If taking j*j stones makes the opponent
                // reach a losing state, current player wins.
                if (dp[i - j * j] == false) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};