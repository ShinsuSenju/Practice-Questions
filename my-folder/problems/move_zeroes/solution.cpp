class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        int mid =0;
        int end = nums.size()-1;
        while(mid<=end){
            if(nums[mid]!=0){
                swap(nums[mid],nums[start++]);
            }
            mid++;
        }
        
        
        
    }
};