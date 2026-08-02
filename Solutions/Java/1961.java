class Solution {
    public boolean isPrefixString(String s, String[] words) {
        String str = "";
        for(int i=0; i<words.length; i++){
            str += words[i];
            if(str.equals(s))
                return true;
        }
        return false;
    }
}
