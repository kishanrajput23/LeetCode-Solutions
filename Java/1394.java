class Solution {
    public int findLucky(int[] arr) {
        int[] nums = new int[501];
        for (int a : arr) {
            nums[a]++;
        }
        for (int i=500; i>0; i--) {
			if (nums[i]==i) {
                return i;
            }
        }
        return -1;
    }
}
