class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int temp = 0;
        for (int i=0; i<nums.length; i++) {
            if (nums[i] == 1) {
                count += 1;
            }
            else {
                temp = Math.max(count, temp);
                count = 0;
                }
            }
        return Math.max(count, temp);
    }
}
