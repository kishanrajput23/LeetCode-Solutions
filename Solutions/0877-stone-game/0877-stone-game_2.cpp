class Solution {
public:
    int mem[501][501];
    // Returns the maximum score Player 1 can collect
    // from the subarray piles[i...j]
    int solve(int i, int j, vector<int>& piles) {

        // No elements left
        if (i > j) {
            return 0;
        }

        // Only one element left
        if (i == j) {
            return piles[i];
        }

        // Return already computed result
        if (mem[i][j] != -1) {
            return mem[i][j];
        }

        // -----------------------------------------
        // Option 1: Player 1 picks the left element
        // -----------------------------------------

        // After Player 1 picks piles[i], Player 2 gets the turn.
        // Since Player 2 also plays optimally, they will choose
        // the move that minimizes Player 1's future score.

        // Player 2 has two choices:
        //
        // 1. Pick piles[i+1]
        //      Remaining array -> (i+2 ... j)
        //
        // 2. Pick piles[j]
        //      Remaining array -> (i+1 ... j-1)
        //
        // Player 2 chooses whichever leaves Player 1
        // with the smaller score.
        int take_i = piles[i] + min(solve(i + 2, j, piles), solve(i + 1, j - 1, piles));

        // -----------------------------------------
        // Option 2: Player 1 picks the right element
        // -----------------------------------------

        // Again, Player 2 plays optimally.

        // Player 2 has two choices:
        //
        // 1. Pick piles[i]
        //      Remaining -> (i+1 ... j-1)
        //
        // 2. Pick piles[j-1]
        //      Remaining -> (i ... j-2)
        //
        // Player 2 minimizes Player 1's future score.
        int take_j = piles[j] + min(solve(i, j - 2, piles), solve(i + 1, j - 1, piles));

        // Player 1 chooses whichever option gives
        // the maximum score.
        return mem[i][j] = max(take_i, take_j);
    }

    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        memset(mem, -1, sizeof(mem));

        // Calculate the total score of all numbers
        int total_score = 0;

        for (int x : piles) {
            total_score += x;
        }

        // Maximum score Player 1 can achieve
        int alice_score = solve(0, n - 1, piles);

        // Player 1 wins (or ties)
        return alice_score > total_score / 2;
    }
};