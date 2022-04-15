class Solution {
    public int countEven(int num) {
        int ans=0;
        for(int i=2; i<=num; i++) {
            if(isEven(i)) {
                ans++;
            }
        }
        return ans;
    }
    
    public boolean isEven(int n) {
        int sum=0;   
        while(n!=0) {
            sum += n%10;
            n = n/10;
        }
        return sum%2 == 0;
    }
}
