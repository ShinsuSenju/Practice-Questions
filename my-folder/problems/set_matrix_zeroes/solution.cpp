class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeroes;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) zeroes.push_back({i,j});
            }
        }
        for(const pair<int,int> &zero:zeroes){
            int x=zero.first;
            int y=zero.second;
            for(int i=0;i<m;i++) matrix[i][y]=0;
            for(int i=0;i<n;i++) matrix[x][i]=0;
        }
        
    }
};