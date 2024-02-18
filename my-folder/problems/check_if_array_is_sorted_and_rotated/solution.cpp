class Solution {
public:
    bool check(vector<int>& nums) {
        int countElements=0;
        for(int i=0;i<nums.size()-1;i++) if(nums[i]>nums[i+1]) countElements++;
        if(nums[nums.size()-1]>nums[0]) countElements++;
        return countElements<=1;
       
    }
};