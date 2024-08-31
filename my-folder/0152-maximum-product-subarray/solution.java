class Solution {
    public int maxProduct(int[] nums) {
        int maxp = Integer.MIN_VALUE;
        int pror = 1,prol = 1;
        int n = nums.length-1;
        for(int i=0;i<=n;i++){
            if(pror == 0 ) pror = 1;
            if(prol == 0 ) prol = 1;
            prol*=nums[i];
            pror*=nums[n-i];
            maxp = Math.max(maxp,Math.max(prol,pror));
        }
        return maxp;
    }
}
