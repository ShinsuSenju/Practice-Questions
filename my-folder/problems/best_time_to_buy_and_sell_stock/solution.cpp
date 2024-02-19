class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cStock=-1;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(cStock==-1) cStock = prices[i];
            int diff = prices[i]-cStock;
            if(diff<0) cStock = prices[i];
            if(diff>profit) profit = diff;
        }
        return profit;
        
    }
};