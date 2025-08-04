class Solution {
    public int maxProduct(int[] nums) {
        int maxP1 = nums[0];
        int currP = 1;
        for(int i = 0; i < nums.length; i++) {
            currP *= nums[i];
            maxP1 = Math.max(maxP1, currP);
            if (currP == 0) currP = 1;
        }

        int maxP2 = nums[0];
        currP = 1;
        for(int i = nums.length - 1; i >= 0; i--) {
            currP *= nums[i];
            maxP2 = Math.max(maxP2, currP);
            if (currP == 0) currP = 1;
        }

        return Math.max(maxP1, maxP2);
    }
}

