class Solution {
    public int missingNumber(int[] nums) {
        int xor = 0;
        for(int i=0;i<nums.length;i++){
            xor^=i^nums[i];
        }
        xor^=nums.length;
        return xor;

        
    }
}
