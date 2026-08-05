class Solution {
public:

    // DFS to mark all reachable methods as suspicious
    void dfs(int curr, vector<vector<int>>& adj, vector<int>& inDegree, vector<bool>& suspicious) {

        suspicious[curr] = true;

        for (int &neighbor : adj[curr]) {

            // Remove the edge: curr -> neighbor
            inDegree[neighbor]--;

            if (!suspicious[neighbor]) {
                dfs(neighbor, adj, inDegree, suspicious);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        // Build graph and compute indegree
        vector<vector<int>> adj(n);
        vector<int> inDegree(n, 0);
        vector<bool> suspicious(n, false);

        for (auto &edge : invocations) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            inDegree[v]++;
        }

        // Mark all suspicious methods using DFS
        dfs(k, adj, inDegree, suspicious);

        vector<int> result;
        bool cannotRemove = false;

        // Check if any suspicious method
        // is still called by a non-suspicious method
        for (int i = 0; i < n; i++) {

            if (suspicious[i] && inDegree[i] > 0) {
                cannotRemove = true;
                break;
            }

            if (!suspicious[i]) {
                result.push_back(i);
            }
        }

        // If removal isn't possible, return all methods
        if (cannotRemove) {
            vector<int> allMethods(n);

            for (int i = 0; i < n; i++) {
                allMethods[i] = i;
            }

            return allMethods;
        }

        // Otherwise, return the remaining methods
        return result;
    }
};