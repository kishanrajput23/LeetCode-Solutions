class Solution {
    public int xorOperation(int n, int start) {
        int nums[] = new int[n];
        int ans = 0;
        for (int i=0; i<n; i++) {
            nums[i] = start + 2 * i;
        }
        for (int j=0; j<nums.length; j++) {
            ans = ans ^ nums[j];
        }
        return ans;
    }
}
