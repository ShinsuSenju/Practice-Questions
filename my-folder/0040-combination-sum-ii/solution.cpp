class Solution {
public:
    vector<vector<int>> ans;
    void recursion(vector<int>& c,vector<int>& set,int i,int sum,int target){
        if(sum==target){
            ans.push_back(set);
            return;
        }
        if(sum>target||i==c.size()) return;
        for (int j = i; j < c.size(); ++j) {
            if (j > i && c[j] == c[j - 1]) continue; 
            set.push_back(c[j]);
            recursion(c, set, j + 1, sum + c[j], target);
            set.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> set;
        sort(candidates.begin(),candidates.end());
        recursion(candidates,set,0,0,target);
        return ans;
    }
};
