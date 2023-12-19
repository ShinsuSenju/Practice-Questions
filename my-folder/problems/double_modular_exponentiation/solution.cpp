class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;
      
        for(int i = 0; i < variables.size(); i++) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int m = variables[i][3];
            int t = 1;

            for(int j = 0; j < b; j++) {
                t = (t * a) % 10;
            }

            int tar = 1;
            for(int j = 0; j < c; j++) {
                tar = (tar * t) % m;
            }

            if(tar == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
