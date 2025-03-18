class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0;
        int ans = 1;
        int bitMask = 0;
        for(int right = 0;right<nums.size();right++){
            while((bitMask & nums[right])!=0){
                bitMask^=nums[left];
                left++;
            }
            bitMask|=nums[right];
            ans = max(ans,right-left+1);

        }
        return ans;
    }
};
