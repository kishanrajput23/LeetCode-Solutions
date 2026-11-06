class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i=0; i<nums.size(); i++) {
            pq.push({nums[i], i});
        }

        while(k--) {
            auto mini = pq.top();
            pq.pop();

            int minVal = mini.first;
            int idx = mini.second;

            nums[idx] = minVal*multiplier;

            pq.push({minVal*multiplier, idx});
        }

        return nums;
    }
};