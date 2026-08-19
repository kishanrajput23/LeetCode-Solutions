class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> mp;

        // Group reserved seats by row
        for (auto seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }

        // Rows without any reservation can fit 2 families
        int ans = (n - mp.size()) * 2;

        for (auto& [row, seats] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

            // Check left block: 2,3,4,5
            for (int s = 2; s <= 5; s++) {
                if (seats.count(s)) {
                    left = false;
                    break;
                }
            }

            // Check middle block: 4,5,6,7
            for (int s = 4; s <= 7; s++) {
                if (seats.count(s)) {
                    middle = false;
                    break;
                }
            }

            // Check right block: 6,7,8,9
            for (int s = 6; s <= 9; s++) {
                if (seats.count(s)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};