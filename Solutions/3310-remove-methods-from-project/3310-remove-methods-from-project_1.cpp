class Solution {
public:
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

        // BFS to mark all suspicious methods
        queue<int> q;
        q.push(k);
        suspicious[k] = true;

        while (!q.empty()) {

            int curr = q.front();
            q.pop();

            for (int &neighbor : adj[curr]) {

                // Remove the edge: curr -> neighbor
                inDegree[neighbor]--;

                if (!suspicious[neighbor]) {
                    suspicious[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        vector<int> result;
        bool cannotRemove = false;

        // Check if any suspicious node still has
        // an incoming edge from a non-suspicious node
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