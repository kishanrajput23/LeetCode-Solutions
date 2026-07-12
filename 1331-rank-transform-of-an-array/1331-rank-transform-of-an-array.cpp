class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        // Create a sorted copy of the array
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

        // Assign rank to each unique element
        unordered_map<int, int> rank;
        int currentRank = 1;

        for (int num : sortedArr) {
            if (rank.find(num) == rank.end()) {
                rank[num] = currentRank++;
            }
        }

        // Replace each element with its rank
        vector<int> result;

        for (int num : arr) {
            result.push_back(rank[num]);
        }

        return result;
    }
};