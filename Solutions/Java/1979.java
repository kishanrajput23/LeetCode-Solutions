class Solution {
    public int findGCD(int[] nums) {
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;

        for(int e : nums) {
            min = Math.min(e, min);
            max = Math.max(e, max);
        }

        while(min > 0) {
            int temp = min;
            min = max % min;
            max = temp;
        }
        return max;
    }
}
