class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> map(n*n+1,0);
        for(auto it:grid){
            for(int i:it){
                map[i]++;
            }
        }
        vector<int> ans(2,0);
        
            for(int i=1;i<=n*n;i++){
                if (map[i]>=2) ans[0]=i;
                else if(map[i]==0) ans[1]=i;
            }
    
        return ans;


        
    }
};
