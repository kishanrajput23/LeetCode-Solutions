class Solution {
    public int countKDifference(int[] nums, int k) {
        int count = 0;
        for (int i=0; i<nums.length; i++) {
            for (int j=i+1; j<nums.length; j++) {
                if (Math.abs(nums[j]-nums[i]) == k) {
                    count += 1;
                }
            }
        }
        return count;
    }
}
