class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0;i<nums.size();i++){
            int mine = INT_MAX;
            int maxe = INT_MIN;
            for(int j = i;j<nums.size();j++){
                mine = min(nums[j],mine);
                maxe = max(nums[j],maxe); 
                ans+=maxe - mine;
            }
            
        }
        return ans;

        
    }
};
