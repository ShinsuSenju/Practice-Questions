class Solution {
    public void moveZeroes(int[] nums) {
        int zero = 0;
        int left = 0;
        while(left<nums.length){
            if(nums[left]!=0){
                int temp = nums[zero];
                nums[zero]=nums[left];
                nums[left]=temp;
                zero++;
            }
            left++;
        }
        
    }
}
