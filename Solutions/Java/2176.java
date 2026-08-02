class Solution {
    public int countPairs(int[] nums, int k) {
        int n = nums.length;
        int count = 0;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if (nums[i] == nums[j] && (i*j) % k == 0) {
                    count += 1;
                }
            }
        }
        return count;
    }
}
