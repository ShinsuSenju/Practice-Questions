class Solution {
public:
    void recursion(vector<int> &candidates,vector<vector<int>>& ans,vector<int>temp,int i,int sum, int target){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target || i==candidates.size()) return;
        for(int j=i;j<candidates.size();j++){
            if (j != i && candidates[j] == candidates[j - 1])continue;
            temp.push_back(candidates[j]);
            recursion(candidates,ans,temp,j+1,sum+candidates[j],target);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        recursion(candidates,ans,{},0,0,target);
        return ans;

    }
};
