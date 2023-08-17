class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^nums[i];

        }
        return ans;
        
        
    }
};