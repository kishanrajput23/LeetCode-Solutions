class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows * cols;

        vector<int> temp;

        // Flatten the grid
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                temp.push_back(grid[i][j]);
            }
        }

        vector<vector<int>> ans;

        int index = 0;

        // Build shifted grid
        for (int i = 0; i < rows; i++) {

            vector<int> row;

            for (int j = 0; j < cols; j++) {

                int oldIndex = ((index - k) % total + total) % total;

                row.push_back(temp[oldIndex]);

                index++;
            }

            ans.push_back(row);
        }

        return ans;
    }
};