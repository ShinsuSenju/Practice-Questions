class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> row;
            int res=1;
            
            for(int j=1;j<=i;j++){
                row.push_back(res);
                res=res*(i-j);
                res=res/j;
            }
            ans.push_back(row);
        }

        
        
        return ans;
    }
};