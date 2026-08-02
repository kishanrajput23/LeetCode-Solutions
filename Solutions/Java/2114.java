class Solution {
    public int mostWordsFound(String[] sentences) {
        int max = 0;
        for (String s: sentences) {
            max = Math.max(max, s.split(" ").length);
        }
        return max;
    }
}
