class Solution {
public:

    // Returns the maximum score Player 1 can collect
    // from the subarray nums[i...j]
    int solve(int i, int j, vector<int>& nums) {

        // No elements left
        if (i > j) {
            return 0;
        }

        // Only one element left
        if (i == j) {
            return nums[i];
        }

        // -----------------------------------------
        // Option 1: Player 1 picks the left element
        // -----------------------------------------

        // After Player 1 picks nums[i], Player 2 gets the turn.
        // Since Player 2 also plays optimally, they will choose
        // the move that minimizes Player 1's future score.

        // Player 2 has two choices:
        //
        // 1. Pick nums[i+1]
        //      Remaining array -> (i+2 ... j)
        //
        // 2. Pick nums[j]
        //      Remaining array -> (i+1 ... j-1)
        //
        // Player 2 chooses whichever leaves Player 1
        // with the smaller score.
        int take_i = nums[i] +
                     min(solve(i + 2, j, nums),
                         solve(i + 1, j - 1, nums));

        // -----------------------------------------
        // Option 2: Player 1 picks the right element
        // -----------------------------------------

        // Again, Player 2 plays optimally.

        // Player 2 has two choices:
        //
        // 1. Pick nums[i]
        //      Remaining -> (i+1 ... j-1)
        //
        // 2. Pick nums[j-1]
        //      Remaining -> (i ... j-2)
        //
        // Player 2 minimizes Player 1's future score.
        int take_j = nums[j] +
                     min(solve(i, j - 2, nums),
                         solve(i + 1, j - 1, nums));

        // Player 1 chooses whichever option gives
        // the maximum score.
        return max(take_i, take_j);
    }

    bool predictTheWinner(vector<int>& nums) {

        int n = nums.size();

        // Calculate the total score of all numbers
        int total_score = 0;

        for (int x : nums) {
            total_score += x;
        }

        // Maximum score Player 1 can achieve
        int player1_score = solve(0, n - 1, nums);

        // Remaining score belongs to Player 2
        int player2_score = total_score - player1_score;

        // Player 1 wins (or ties)
        return player1_score >= player2_score;
    }
};