class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        for (int i = 0; i < grid.size(); i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if(j%2==0)
                    ans.push_back(grid[i][j]);
                }
            } else {
                for (int j = grid[i].size() - 1; j >= 0; j--) {
                    if(j%2!=0)
                    ans.push_back(grid[i][j]);
                }
            }
        }
        return ans;
    }
};

