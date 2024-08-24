class Solution {
    public void rotate(int[] nums, int k) {
        if(nums.length == 1) return;
        k=k%nums.length;
        int[] temp = new int[nums.length-k];
        for(int i=0;i<nums.length-k;i++){
            temp[i]=nums[i];
        }
        int j=0;
        for(int i=0;i<k;i++){
            nums[i]=nums[i+nums.length-k];
        }
        for(int i=k;i<nums.length;i++){
            nums[i]=temp[j++];
        }
        
    }
}
