class Solution {
public:
    int helper(vector<int> nums,int k){
        int left = 0;
        int right = 0;
        int ans = 0;
        unordered_map<int,int> mp;
        while(right<nums.size()){
            mp[nums[right]]++;
            while(mp.size()>k){
                mp[nums[left]]--;
                if(mp[nums[left]]==0) mp.erase(nums[left]);
                left++;
            }
            ans += right - left + 1;
            right++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};
