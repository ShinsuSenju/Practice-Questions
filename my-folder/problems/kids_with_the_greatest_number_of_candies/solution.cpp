class Solution {
public:
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> ans;
        int maxe=INT_MIN;
        for(auto it:candies){
            maxe=max(maxe,it);
        }
        for(auto it:candies){
            if(it+extraCandies>=maxe) ans.push_back(true);
            else ans.push_back(false);
        }

        
        return ans;
    }
};