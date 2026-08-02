class Solution {
    public String defangIPaddr(String address) {
        String replaceString = address.replace(".","[.]");
        return replaceString;
    }
}
