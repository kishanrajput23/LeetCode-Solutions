class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        unordered_set<int> st;

        // Find minimum, maximum and store all elements in a set
        for (int num : nums) {
            mini = min(mini, num);
            maxi = max(maxi, num);
            st.insert(num);
        }

        // Check every number between min and max
        for (int i = mini + 1; i < maxi; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};