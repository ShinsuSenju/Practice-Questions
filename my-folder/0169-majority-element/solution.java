class Solution {
    public int majorityElement(int[] nums) {
        int candidate = nums[0];
        int vote = 1;
        for(int i=1;i<nums.length;i++){
            if(vote == 0 ) {
                candidate = nums[i];
                vote = 1;
            }
            else{
                if(candidate == nums[i]) vote++;
                else vote--;
            }
        }
        int count = 0;
        for(int i:nums){
            if(i==candidate) count++;
        }
        return count>nums.length/2?candidate:-1;
        
    }
}
