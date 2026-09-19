class Solution {
public:
    int findMaxi(vector<vector<int>>& grid, int row, int col) {
        int maxi = INT_MIN;

        for (int i=row; i<=row+2; i++) {
            for (int j=col; j<=col+2; j++) {
                maxi = max(maxi, grid[i][j]);
            }
        }
        return maxi;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<vector<int>> ans;

        for (int i=0; i<n-2; i++) {
            vector<int> temp;
            for (int j=0; j<n-2; j++) {
                int maxi = findMaxi(grid, i, j);
                temp.push_back(maxi);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};