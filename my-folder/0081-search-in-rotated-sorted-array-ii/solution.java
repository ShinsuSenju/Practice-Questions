class Solution {
    public boolean search(int[] nums, int x) {
        int left = 0,right = nums.length-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==x) return true;
            else if(nums[mid]==nums[left] && nums[mid]==nums[right]){
                left++;
                right--;
            }
            else if(nums[left]<=nums[mid]){
                if(nums[left]<=x && x<nums[mid]) right = mid-1;
                else left = mid+1;
            }
            else{
                if(nums[right]>=x && nums[mid]<x) left = mid+1;
                else right = mid-1;
            }
        }
        return false;
        

    }
}
