class Solution {
public:
    vector<vector<int>> ans;
    void recursion(vector<int> c,int i,int sum,int target,vector<int>& set){
        if (sum == target) {
            ans.push_back(set);
            return;
        }
        if (i >= c.size() || sum > target) {
            return;
        }
        set.push_back(c[i]);
        recursion(c, i, sum + c[i], target, set);
        set.pop_back();
        recursion(c, i + 1, sum, target, set);
        }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> s;
        recursion(candidates,0,0,target,s);
        return ans;
        
    }
};
