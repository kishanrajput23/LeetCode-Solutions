//Approach-2 (Greedy Pick using bit mask)
//T.C : O(N), N = reservedSeats.size()
//S.C : O(N), for storing reswerved seats in the form of mask
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp; //row -> seats in each row booked

        for(auto& reservedSeat : reservedSeats) { //O(10^4)
            int row  = reservedSeat[0];
            int seat = reservedSeat[1];

            mp[row] |= (1 << seat); //set bits are the booked seats
        }

        int result = (n - mp.size()) * 2;

        int maskA = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5); //set bits are the ones which I need empty for Group A
        int maskB = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7); //set bits are the ones which I need empty for Group B
        int maskC = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9); //set bits are the ones which I need empty for Group C

        for(auto& [row, bookedSeatsMask] : mp) { //min(10*n, 10^4)
            bool graupA = (bookedSeatsMask & maskA) == 0;
            bool graupB = (bookedSeatsMask & maskB) == 0;
            bool graupC = (bookedSeatsMask & maskC) == 0;

            if(graupA && graupC)
                result += 2;
            else if(graupA || graupB || graupC)
                result += 1;

        }

        return result;
    }
};