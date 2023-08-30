class Solution {
public:
    int maxProfit(vector<int>& price) {
        int ls=INT_MAX;
        int diff=0;
        for(int i=0;i<price.size();i++){
        if(price[i]<ls)
        ls=price[i];
        if(price[i]-ls>diff)
        {
          diff=price[i]-ls;
        }

        }
        return diff;


        
        
    }
};