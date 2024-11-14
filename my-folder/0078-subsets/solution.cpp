class Solution {
public:
    void findSubset(vector<int>& nums,vector<vector<int>>& ans,vector<int> temp, int ind){
        ans.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            temp.push_back(nums[i]);
            findSubset(nums,ans,temp,i+1);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
        findSubset(nums,ans,{},0);
        return ans;

        
    }
};
