class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    row[i]++;
                }
            }
        }
        for(int j=0;j<grid[0].size();j++){
         for(int i=0;i<grid.size();i++){
                if(grid[i][j]==1){
                    col[j]++;
                }
            }
        }
        long long count = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) count+=(row[i]-1)*(col[j]-1);
            }
        }
        return count;
        
    }
};
