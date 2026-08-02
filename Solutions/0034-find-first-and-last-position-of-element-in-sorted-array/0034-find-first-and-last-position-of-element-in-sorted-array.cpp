class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool findFirst) {

        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                ans = mid;

                if (findFirst) {
                    right = mid - 1;   // Search left half
                } else {
                    left = mid + 1;    // Search right half
                }
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int first = binarySearch(nums, target, true);
        int last  = binarySearch(nums, target, false);

        return {first, last};
    }
};