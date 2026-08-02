class Solution {
    public int dominantIndex(int[] nums) {
        int max = 0;
        int secondMax = 0;
        int maxIndex = 0;
        
        for (int i=0; i<nums.length; i++) {
            if (nums[i]>max) {
                maxIndex = i;
                secondMax = max;
                max = nums[i];
            }
            else if (nums[i]>secondMax) {
                secondMax = nums[i];
            }
        }
        if (max<2*secondMax)
                    return -1;
        return maxIndex;
    }
}
