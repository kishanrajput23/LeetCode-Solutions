class Solution {
public:
    int mem[1001];
    int n;

    // Returns the maximum score difference
    // (Current Player's Score - Opponent's Score)
    // starting from index i.
    int solve(int i, vector<int> &stoneValue) {

        // No stones left to pick.
        if (i >= n) {
            return 0;
        }

        // Return the already computed answer.
        if (mem[i] != -1) {
            return mem[i];
        }

        // Option 1: Take only one stone.
        // Current player gains: stoneValue[i]
        // Opponent now starts from index i+1.
        // Since solve() returns the opponent's advantage,
        // subtract it from the current gain.
        int result = stoneValue[i] - solve(i + 1, stoneValue);

        // Option 2: Take two stones (if available).
        // Gain:stoneValue[i] + stoneValue[i+1]
        // Opponent starts from i+2.
        if (i + 1 < n) {
            result = max(result, stoneValue[i] + stoneValue[i + 1] - solve(i + 2, stoneValue));
        }

        // --------------------------------------------------
        // Option 3: Take three stones (if available).
        // Gain: stoneValue[i] + stoneValue[i+1] + stoneValue[i+2]
        // Opponent starts from i+3.
        if (i + 2 < n) {
            result = max(result, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - solve(i + 3, stoneValue));
        }

        // Store and return the best possible score difference.
        return mem[i] = result;
    }

    string stoneGameIII(vector<int>& stoneValue) {

        // Store the size of the array.
        n = stoneValue.size();

        // Initialize memoization table.
        memset(mem, -1, sizeof(mem));

        // Maximum score difference Alice can achieve.
        int diff = solve(0, stoneValue);

        // Positive difference => Alice wins.
        if (diff > 0) {
            return "Alice";
        }

        // Negative difference => Bob wins.
        else if (diff < 0) {
            return "Bob";
        }

        // Zero difference => Tie.
        else {
            return "Tie";
        }
    }
};