class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();

        vector<int> position_seats(101, 0);
        vector<int> position_stud(101, 0);

        for (auto &pos : seats) {
            position_seats[pos]++;
        }

        for (auto &pos : students) {
            position_stud[pos]++;
        }

        int i=0, j=0;
        int moves = 0;

        while (i <= 100 && j <= 100) {
            if (position_seats[i] == 0) {
                i++;
            }

            if (position_stud[j] == 0) {
                j++;
            }

            if (i<=100 && j<=100 && position_seats[i] != 0 && position_stud[j] != 0) {
                moves += abs(i-j);
                position_seats[i]--;
                position_stud[j]--;
            }
        }

        return moves;
    }
};