class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int ct = 0;
        for(auto & it: nums){
            if(it%2==0) ct++;
        }
        return ct>=2;
    }
};