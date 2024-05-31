class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int xr=0;
        for(int i =0 ;i<nums.size();i++) xr^=nums[i];
        unsigned int right = (xr&xr-1)^xr;
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&right) a^=nums[i];
            else b^=nums[i];
        }
        return {a,b};
        
    }
};
