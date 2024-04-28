class Solution {
public:
    bool verify(vector<vector<char>>& grid, char col, int i, int j) {
        return ((grid[i+1][j] == col) + (grid[i][j+1] == col) + (grid[i+1][j+1] == col)) != 1;
    }
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                if (verify(grid, grid[i][j], i, j)) return true;
            }
        }
        return false;
    }
};
