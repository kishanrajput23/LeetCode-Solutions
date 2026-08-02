class Solution {
    public int lengthOfLastWord(String s) {
        int len = 0;
        String x = s.trim();
 
        for (int i = 0; i < x.length(); i++) {
            if (x.charAt(i) == ' ')
                len = 0;
            else
                len++;
        }
        return len;
    }
}
