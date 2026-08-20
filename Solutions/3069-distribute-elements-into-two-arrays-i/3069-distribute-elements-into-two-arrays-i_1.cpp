class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i=2; i<nums.size(); i++) {
            int arr1_element = arr1[arr1.size()-1];
            int arr2_element = arr2[arr2.size()-1];

            if (arr1_element > arr2_element) {
                arr1.push_back(nums[i]);
            }
            else {
                arr2.push_back(nums[i]);
            }
        }

        for (auto i : arr2) {
            arr1.push_back(i);
        }

        return arr1;
    }
};