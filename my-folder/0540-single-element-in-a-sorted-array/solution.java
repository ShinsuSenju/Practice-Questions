class Solution {
    public int singleNonDuplicate(int[] nums) {
        int left = 0, right = nums.length-1;
        if(nums.length==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.length-1]!=nums[nums.length-2]) return nums[nums.length-1];
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            if((mid%2!=0 && nums[mid]!=nums[mid-1]) || (mid%2==0 && nums[mid]!=nums[mid+1])){
                right = mid-1;
            }
            else left = mid+1;
        }
        return 0;
        
    }
}