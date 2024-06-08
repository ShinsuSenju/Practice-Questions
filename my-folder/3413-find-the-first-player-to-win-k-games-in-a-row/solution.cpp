class Solution {
public:
    int findWinningPlayer(std::vector<int>& skills, int k) {
        int n = skills.size();
        int consecutiveWins = 0;
        int winner = 0;

        for (int i = 1; i < n; ++i) {
            if (skills[winner] > skills[i]) {
                consecutiveWins++;
                if (consecutiveWins == k) {
                    return winner;
                }
            } else {
                winner = i;
                consecutiveWins = 1;
                if (consecutiveWins == k) {
                    return winner;
                }
            }
        }
        return winner;
    }
};

