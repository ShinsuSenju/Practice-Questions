class Solution {
    public int maxProfit(int[] prices) {
        int ans = Integer.MIN_VALUE;
        int day = Integer.MAX_VALUE;
        int profit = 0;
        for(int i:prices){
            if(i<day){
                day = i;
            }
            profit = i-day;
            ans = Math.max(profit,ans);

        }
        return ans;
        
    }
}
