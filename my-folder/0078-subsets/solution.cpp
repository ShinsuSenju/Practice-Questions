class Solution {
public:
    void generate(vector<int>& nums,int start,vector<int> &set,vector<vector<int>>& ans){
        ans.push_back(set);
        for(int i=start;i<nums.size();i++){
            set.push_back(nums[i]);
            generate(nums,i+1,set,ans);
            set.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> set;
        generate(nums,0,set,ans);
        return ans;
        
    }
};
