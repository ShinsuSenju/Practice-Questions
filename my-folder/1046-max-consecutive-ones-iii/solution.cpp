class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0,right = 0;
        int ans = -1;
        while(right<nums.size()){
            if(nums[right]==1) right++;
            else{
                if(k>0){
                    right++;
                    k--;
                }
                else if(nums[left]==0){
                    left++;
                    k++;
                }
                else left++;
                
            }
            ans = max(ans,right-left);
        }
        return ans;
        
    }
};
