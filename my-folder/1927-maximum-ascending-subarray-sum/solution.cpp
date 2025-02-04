class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()<=0) return 0;
        int ans = 0;
        int temp = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) temp+= nums[i];
            else{
                ans = max(temp,ans);
                temp = nums[i];
            }
        }
        return max(ans,temp);
        
    }
};
