class Solution {
    public int[] searchRange(int[] nums, int x) {
        int start =  -1;
        int end = -1;
        int left = 0,right=nums.length-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==x){
                start = mid;
                right = mid-1;
            }
            else if(nums[mid]<x) left = mid+1;
            else right = mid-1;
        }
        left = 0;
        right = nums.length-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==x){
                end = mid;
                left=mid+1;
            }
            else if(nums[mid]<x) left = mid+1;
            else right = mid-1;
        }
        return new int[]{start,end};
        
    }
}
