class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = Integer.MIN_VALUE;
        int currStock =Integer.MAX_VALUE;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<currStock){
                currStock = prices[i];
            }
            maxProfit = Math.max(maxProfit,prices[i]-currStock);
        }
        return maxProfit;

        
    }
}
