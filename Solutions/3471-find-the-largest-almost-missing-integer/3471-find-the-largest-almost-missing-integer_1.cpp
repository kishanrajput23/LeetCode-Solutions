class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int ans = -1;

        for (int i = 0; i <= nums.size() - k; i++) {

            unordered_set<int> st;

            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for (int num : st) {
                mp[num]++;
            }
        }

        for (auto& [num, count] : mp) {
            if (count == 1) {
                ans = max(ans, num);
            }
        }

        return ans;
    }
};