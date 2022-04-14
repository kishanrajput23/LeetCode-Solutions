class Solution {
    public int removeElement(int[] nums, int val) {
        int index = 0;
        for (int ele : nums) {
            if (ele != val) {
                nums[index++] = ele;
            }
        }
        return index;
    }
}