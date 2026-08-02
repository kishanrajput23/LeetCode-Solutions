class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        Arrays.sort(target);
        Arrays.sort(arr);
        if(Arrays.equals(target, arr)){
            return true;
        }
        return false;
    }
}
