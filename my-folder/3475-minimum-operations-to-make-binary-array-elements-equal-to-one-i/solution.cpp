class Solution {
public:
    int minOperations(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        int ans = 0;
        while(right<n-2){
            if(nums[right]==0){
                nums[right] = 1-nums[right];
                nums[right+1] = 1-nums[right+1];
                nums[right+2] = 1-nums[right+2];
                ans++;
            }
            right++;
        }
        if(nums[n-1]==0 ||nums[n-2]==0) return -1;
        return ans;
        
    }
};
