class Solution {
public:
    void recursion(vector<int> &candidates,vector<vector<int>> &ans,vector<int>& temp,int sum,int i,int target){
        if(sum==target){
            ans.push_back(temp);
        }
        if(i==candidates.size()|| sum>target) return;
        if(sum<target){
        temp.push_back(candidates[i]);
        recursion(candidates, ans, temp, sum + candidates[i], i, target);
        temp.pop_back();
        recursion(candidates, ans, temp, sum, i + 1, target);

    }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        recursion(candidates,ans,temp,0,0,target);
        return ans;
        
    }
};
