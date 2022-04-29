class Solution {
    public boolean detectCapitalUse(String word) {
        char[] arr = word.toCharArray();
        int count = 0;
    
        for(int i= 0; i<word.length(); i++) {
            if(Character.isUpperCase(arr[i])){
                count ++;
            }
        }
    
        if(count == 0 || count == word.length()) { 
            return true;
        }
        return count == 1 && Character.isUpperCase(arr[0]);
    }
}
