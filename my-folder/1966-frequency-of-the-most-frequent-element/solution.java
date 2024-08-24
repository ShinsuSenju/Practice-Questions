class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        long total = 0,ans=0;
        int left = 0,right=0;
        
        while(right<nums.length) {
            total += nums[right];
            
            while (nums[right] * (right - left + 1L) > total + k) {
                total -= nums[left];
                left++;
            }
            
            ans = Math.max(ans, right - left + 1);
            right++;
        }
        
        return (int)ans;
        
    }
}
