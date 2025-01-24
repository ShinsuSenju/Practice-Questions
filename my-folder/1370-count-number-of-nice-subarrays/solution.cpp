class Solution {
public:
    int helperFunction(vector<int>& nums,int k){
        if(k<0) return 0;
        int ans = 0;
        int count = 0;
        int left = 0,right = 0;
        while(right<nums.size()){
            count+=nums[right]%2!=0;
            while(count>k){
                count-=nums[left]%2!=0;
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helperFunction(nums,k) - helperFunction(nums,k-1);
        
        
    }
};
