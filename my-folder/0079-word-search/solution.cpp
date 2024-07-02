class Solution {
public:
    bool search(vector<vector<char>>& board,string word,int i,int j,int k){
        if(k==word.size()) return true;
        if(i>=board.size() || i<0 || j>=board[0].size() || j<0 || board[i][j]!=word[k]) return false;
        char temp = board[i][j];
        board[i][j]='#';
        bool op1 = search(board,word,i+1,j,k+1);
        bool op2 = search(board,word,i-1,j,k+1);
        bool op3 = search(board,word,i,j+1,k+1);
        bool op4 = search(board,word,i,j-1,k+1);
        board[i][j]=temp;
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
       
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(search(board,word,i,j,0)) return true;    
                }
            }
        }
        return false;
        
    }
};
