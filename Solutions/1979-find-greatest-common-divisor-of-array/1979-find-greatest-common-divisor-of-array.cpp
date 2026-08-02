class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;

        for (int num : nums) {
            smallest = min(smallest, num);
            largest = max(largest, num);
        }

        return gcd(smallest, largest);
    }
};