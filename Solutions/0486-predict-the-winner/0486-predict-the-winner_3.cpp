class Solution {
public:
    int mem[21][21];
    
    // Returns the maximum score difference
    // (Current Player's Score - Opponent's Score)
    // that the current player can achieve from nums[i...j].
    int solve(vector<int>& nums, int i, int j) {

        // No numbers left
        if (i > j) {
            return 0;
        }

        // Only one number left.
        // Current player takes it.
        if (i == j) {
            return nums[i];
        }

        // Return already computed result
        if (mem[i][j] != -1) {
            return mem[i][j];
        }

        // Option 1:
        // Current player picks the left number.
        // Opponent now becomes the current player
        // for the remaining subarray.
        // solve(i+1, j) returns the opponent's advantage,
        // so subtract it from our current gain.
        int takeLeft = nums[i] - solve(nums, i + 1, j);

        // Option 2:
        // Current player picks the right number.
        int takeRight = nums[j] - solve(nums, i, j - 1);

        // Return the better choice.
        return mem[i][j] = max(takeLeft, takeRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        memset(mem, -1, sizeof(mem));

        int n = nums.size();
        
        return solve(nums, 0, n-1) >= 0;
    }
};