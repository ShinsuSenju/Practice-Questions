class Solution {
    boolean wordSearch(char[][] board,String word,int i,int j, int k){
        if(k==word.length()) return true;
        if((i>=board.length || i<0) || (j<0 || j>=board[0].length) || word.charAt(k)!=board[i][j]) return false;
        char temp = board[i][j];
        board[i][j]='#';
        boolean up = wordSearch(board,word,i-1,j,k+1);
        boolean down = wordSearch(board,word,i+1,j,k+1);
        boolean left = wordSearch(board,word,i,j-1,k+1);
        boolean right = wordSearch(board,word,i,j+1,k+1);
        board[i][j]=temp;
        return up||down||left||right;


    }
    public boolean exist(char[][] board, String word) {
        for(int i = 0;i < board.length; i++){
            for(int j = 0; j <board[0].length; j++){
                if(board[i][j]==word.charAt(0))
                if(wordSearch(board,word,i,j,0)) return true;
            }
        }
        return false;
        
    }
}
