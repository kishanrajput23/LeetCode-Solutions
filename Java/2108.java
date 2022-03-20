class Solution {
    public String firstPalindrome(String[] words) {
        for (String word : words) {
      int l = 0;
      int r = word.length() - 1;
      while (l < r) {
        if (word.charAt(l) != word.charAt(r)) {
          break;
        } else {
          l++;
          r--;
        }
      }
      if (l >= r) {
        return word;
      }
    }

    return "";
    }
}
