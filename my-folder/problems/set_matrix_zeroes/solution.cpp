class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> x,y;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        for(auto it:x){
            for(int i=0;i<matrix[0].size();i++){
                matrix[it][i]=0;
            }
            
        }
        for(auto it:y){
            for(int i=0;i<matrix.size();i++){
                matrix[i][it]=0;
            }
        }
        
    }
};