class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i< nums.size()-2;i++){
            if(i==0 || (nums[i]!=nums[i-1])){
                int lo=i+1,hi=nums.size()-1,sum=0-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int> row;
                        row.push_back(nums[i]);
                        row.push_back(nums[lo]);
                        row.push_back(nums[hi]);
                        ans.push_back(row);
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum) lo++;
                    else hi--;
                }

            }
        }
        return ans;
        
    }
};