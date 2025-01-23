class Solution {
public:
    int helperFunc(vector<int>& nums,int goal){
        if(goal<0) return 0;
        int left = 0,right = 0;
        int sum = 0;
        int count = 0;
        while(right<nums.size()){
            sum+=nums[right++];
            while(sum>goal) sum-=nums[left++];
            count+= right-left;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return helperFunc(nums,goal)-helperFunc(nums,goal-1);
        
    }
};
