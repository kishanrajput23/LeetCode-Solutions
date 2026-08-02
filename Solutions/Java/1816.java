class Solution {
    public String truncateSentence(String s, int k) {
        int counter = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ')
                counter++;
            if (counter == k)
                return s.substring(0, i);
        }
        return s;
    }
}
