class Solution {
    boolean solve(int[] nums,int threshold,int div){
        int sum = 0;
        for(int i=0;i<nums.length;i++){
            sum+=(nums[i]+div-1)/div;
        }
        return sum<=threshold;
    }
    public int smallestDivisor(int[] nums, int threshold) {
        int ans = Integer.MAX_VALUE;
        int right = Arrays.stream(nums).max().getAsInt();  
        int left = 1;
        while(left<=right){
            int mid = (left+right)/2;
            if(solve(nums,threshold,mid)){
                ans = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }
}

