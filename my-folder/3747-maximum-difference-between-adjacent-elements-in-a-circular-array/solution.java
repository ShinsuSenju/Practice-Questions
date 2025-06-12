class Solution {
    public int maxAdjacentDistance(int[] nums) {
      int n = nums.length;
      int maxDiff =Math.abs(nums[n-1]-nums[0]);
      for(int i = 1; i<n;i++){
        if(Math.abs(nums[i]-nums[i-1])>maxDiff) maxDiff = Math.abs(nums[i]-nums[i-1]);
      }
      return maxDiff;

        
    }
}
