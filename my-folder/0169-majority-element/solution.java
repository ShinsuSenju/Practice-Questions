class Solution {
    public int majorityElement(int[] nums) {
        int votes = 0;
        int candidate = nums[0];
        for(int i = 0;i<nums.length;i++){
            if(nums[i]==candidate) votes++;
            else votes--;
            if(votes==0) {
                candidate = nums[i];
                votes = 1;
            }
        }
        votes = 0;
        for(int i = 0;i<nums.length;i++){
            if(nums[i]==candidate) votes++;
        }
        if(votes>(nums.length/2)) return candidate;
        return -1;

    }
}
