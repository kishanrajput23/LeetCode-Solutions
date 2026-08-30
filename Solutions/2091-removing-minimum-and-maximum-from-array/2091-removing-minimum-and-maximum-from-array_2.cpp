class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        // Find indices of minimum and maximum elements
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        // Make sure minIndex is on the left
        // and maxIndex is on the right
        if (minIndex > maxIndex)
            swap(minIndex, maxIndex);

        // 1. Remove both from front
        int front = maxIndex + 1;

        // 2. Remove both from back
        int back = n - minIndex;

        // 3. Remove min from front and max from back
        int both = (minIndex + 1) + (n - maxIndex);

        return min({front, back, both});
    }
};