class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
        int count = 0;
        int index = 0;
        if (ruleKey.equals("color")) {
            index = 1;
        }
        else if (ruleKey.equals("name")) {
            index = 2;
        }
        for(int i=0; i<items.size(); i++) {
            if ((items.get(i).get(index)).equals(ruleValue) ) {
                count += 1;
            }
        }
        return count;
    }
}
