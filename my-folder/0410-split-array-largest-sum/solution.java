class Solution {
    boolean solve(int[] nums,int k,int maxSum){
        int current = 0;
        for(int i = 0;i<nums.length;i++){
            if(current+nums[i]<=maxSum){
                current+=nums[i];
            }
            else{
                k--;
                current = nums[i];
                if(k==0) return false;
            }

        }
        return true;
    }
    public int splitArray(int[] nums, int k) {
       int left = Arrays.stream(nums).max().getAsInt();
       int right = Arrays.stream(nums).sum();
       int ans = -1;
       while(left<=right){
        int mid = (left+right)/2;
        if(solve(nums,k,mid)){
            ans = mid;
            right = mid-1;
        }
        else left = mid+1;
       }
       return ans;
        
    }
}
