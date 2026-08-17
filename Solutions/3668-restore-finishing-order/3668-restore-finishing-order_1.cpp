class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        unordered_set<int> friendSet(friends.begin(), friends.end());
        vector<int> ans;

        for (int id : order) {
            if (friendSet.count(id)) {
                ans.push_back(id);
            }
        }

        return ans;
    }
};