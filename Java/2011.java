class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int sum = 0;
        for (String a : operations) {
            if (a.equals("X++") || a.equals("++X")) {
                sum++;
            }
            else {
                sum--;
            }
        }
        return sum;
    }
}
