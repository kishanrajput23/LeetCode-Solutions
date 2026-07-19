class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {

        int n = matrix.size();
        vector<int> degree(n);

        for (int i = 0; i < n; i++) {
            degree[i] = accumulate(matrix[i].begin(), matrix[i].end(), 0);
        }

        return degree;
    }
};