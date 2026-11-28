class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // creating map for storing indgeree of each node
        unordered_map<int, int> mp;

        // finding indegree of each node
        for (auto i : edges) {
            for (auto j : i) {
                mp[j]++;
            }
        }

        // returing the node which has indegree equal to n-1
        for (auto i : mp) {
            if (i.second == mp.size()-1) {
                return i.first;
            }
        }

        return -1;
    }
};