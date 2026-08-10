class Solution {
public:
    vector<int> t;

    bool solve(int n) {

        // No stones left. Current player loses.
        if (n == 0) {
            return false;
        }

        // Already calculated
        if (t[n] != -1) {
            return t[n];
        }

        // Try every possible square number that can be removed.
        for (int i = 1; i * i <= n; i++) {

            // If after taking i*i stones, opponent reaches a losing state, current player can win.
            if (solve(n - i * i) == false) {
                return t[n] = 1;
            }
        }

        // No winning move exists.
        return t[n] = 0;
    }

    bool winnerSquareGame(int n) {

        // -1 means state has not been calculated.
        t.assign(n + 1, -1);

        return solve(n);
    }
};