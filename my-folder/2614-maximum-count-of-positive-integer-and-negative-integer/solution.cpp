class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxCount = INT_MAX;
        int negCount=0,posCount=0;
        for(int i:nums){
            if(i<0) negCount++;
            else if(i>0) posCount++;
            maxCount = max(posCount,negCount);
        }
        return maxCount;
        
    }
};
