class Solution {
public:
    int m, n;

    bool solve(int row, int col, int openCount, vector<vector<char>>& grid) {
        // Update the count of open parentheses
        if (grid[row][col] == '(') {
            openCount++;
        } else {
            openCount--;
        }

        // Invalid if closing parentheses exceed opening ones
        if (openCount < 0) {
            return false;
        }

        // Reached the destination
        if (row == m - 1 && col == n - 1) {
            return openCount == 0;
        }

        // Move down
        if (row + 1 < m) {
            if (solve(row + 1, col, openCount, grid)) {
                return true;
            }
        }

        // Move right
        if (col + 1 < n) {
            if (solve(row, col + 1, openCount, grid)) {
                return true;
            }
        }

        return false;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        // A valid path must have an even number of cells
        if ((m + n - 1) % 2 != 0) {
            return false;
        }

        // Check the starting and ending characters
        if (grid[0][0] == ')' || grid[m - 1][n - 1] == '(') {
            return false;
        }

        return solve(0, 0, 0, grid);
    }
};