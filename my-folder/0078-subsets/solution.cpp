class Solution {
public:
    void recursion(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int n){
        if(n == nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[n]);
        recursion(nums, ans, temp, n+1);
        temp.pop_back();
        recursion(nums, ans, temp, n+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        recursion(nums, ans,temp, 0);
        return ans;
    }
};

