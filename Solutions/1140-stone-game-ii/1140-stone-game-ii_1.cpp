// Recursion + Memoization
// Time: O(n^3)
// Space: O(n^2)

class Solution {
public:

    // t[person][index][M]
    // person = 1 -> Alice's turn
    // person = 0 -> Bob's turn
    // Stores the best result possible from
    // the current state.
    int t[2][101][101];

    int solveForAlice(int person, int index, int M, int &n, vector<int> &piles) {

        // No piles left
        if (index >= n) {
            return 0;
        }

        // Return already calculated result
        if (t[person][index][M] != -1) {
            return t[person][index][M];
        }

        // Alice wants to maximize her score.
        // Bob wants to minimize Alice's score.
        int result = (person == 1) ? -1 : INT_MAX;

        int stones = 0;

        // Current player can take at most 2 * M piles
        for (int x = 1; x <= min(2 * M, n - index); x++) {

            // Add the current pile to the stones taken
            stones += piles[index + x - 1];

            // Alice's turn
            if (person == 1) {

                // Alice takes 'x' piles and adds them to her score.
                // Then Bob gets the turn.
                result = max(result, stones + solveForAlice(0, index + x, max(M, x), n, piles));
            }

            // Bob's turn
            else {

                // Bob doesn't add to Alice's score.
                // He chooses the move that minimizes
                // Alice's final score.
                result = min(result, solveForAlice(1, index + x, max(M, x), n, piles));
            }
        }

        // Memoize the result for this state
        return t[person][index][M] = result;
    }

    int stoneGameII(vector<int>& piles) {

        int n = piles.size();

        // Initialize memoization table
        memset(t, -1, sizeof(t));

        // Alice starts at index 0 with M = 1
        return solveForAlice(1, 0, 1, n, piles);
    }
};