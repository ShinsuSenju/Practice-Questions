class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> rtl(nums.size(),nums.back());
        for(int i = n-2;i>=0;i--)  rtl[i]=min(rtl[i+1],nums[i]);
        int minl = nums[0],ans =INT_MAX;
        for(int i=1;i<n-1;i++){
            if(minl<nums[i] && rtl[i]<nums[i]) ans = min(ans,minl+nums[i]+rtl[i]);
            minl=min(minl,nums[i]);
        }
        
        return (ans==INT_MAX)?-1:ans;
    }
};
