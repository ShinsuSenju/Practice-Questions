class Solution {
    public int singleNumber(int[] nums) {
        int odd = 0;
        for(int i:nums){
            odd^=i;
        }
        return odd;

        
    }
}
