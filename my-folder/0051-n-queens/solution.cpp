class Solution {
public:
    bool ispos(vector<string> temp, int row,int col,int n){
        int dr = row;
        int dc = col;
        while(row>=0 && col>=0){
            if(temp[row][col]=='Q') return false;
            row--;
            col--;
        }
        row = dr;
        col = dc;
        while(col>=0){
            if(temp[row][col]=='Q') return false;
            col--;
        }
        row = dr;
        col = dc;
        while(row<n && col>=0){
            if(temp[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(vector<vector<string>> &ans,vector<string> &temp,int n,int col){
        if(col == n){
            ans.push_back(temp);
            return;
        }
        for(int row=0;row<n;row++){
            if(ispos(temp,row,col,n)){
                temp[row][col]='Q';
                solve(ans,temp,n,col+1);
                temp[row][col]='.';
            }

        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> temp(n,s);
        solve(ans,temp,n,0);
        return ans;
        
    }
};
