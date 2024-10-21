class Solution {
public:
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    for (char v = '1'; v <= '9'; v++) {
                        if (canPlace(board, i, j, v)) {
                            board[i][j] = v;
                            if (solve(board)) return true;
                            board[i][j] = '.';  
                        }
                    }
                    return false;
                }
            }
        }
        return true; 
    }

    bool canPlace(const vector<vector<char>>& board, int row, int col, char val) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == val || board[i][col] == val ||
                board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) {
                return false;
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        if (board.size() == 0) return;
        solve(board);
    }
};

