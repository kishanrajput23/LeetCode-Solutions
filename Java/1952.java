class Solution {
    public boolean isThree(int n) {
        if (n <= 3) {
            return false;
        }
        int count = 0;
        for (int i=2; i<n/2+1; i++) {
            if (n % i == 0) {
                count += 1;
            }
            if (count > 1) {
                return false;
            }
        }
        if (count == 0) {
            return false;
        }
        return true;
    }
}
