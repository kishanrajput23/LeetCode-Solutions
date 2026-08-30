class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) {
            return n;
        }

        int maxi = INT_MIN;
        int mini = INT_MAX;

        int maxIndex = -1;
        int minIndex = -1;

        // Find the maximum and minimum elements
        // along with their respective indices
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }

            if (nums[i] < mini) {
                mini = nums[i];
                minIndex = i;
            }
        }

        // Case 1: Delete only from the front.
        // We need to delete up to the element which is farther from the front.
        int deletion1 = max(maxIndex, minIndex) + 1;

        // Case 2: Delete only from the back.
        // We need to delete up to the element which is farther from the back.
        int deletion2 = max(n - maxIndex, n - minIndex);

        // Case 3: Delete from both front and back.
        // Option 1: Delete minimum from the front and maximum from the back.
        int option1 = (minIndex + 1) + (n - maxIndex);

        // Option 2: Delete maximum from the front and minimum from the back.
        int option2 = (n - minIndex) + (maxIndex + 1);

        // Choose the better option among the two
        int deletion3 = min(option1, option2);

        // Choose the minimum deletions among all 3 cases
        return min(deletion1, min(deletion2, deletion3));
    }
};