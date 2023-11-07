class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low = 0, mid = 0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]!=0){
                swap(nums[low++],nums[mid]);
            }
            mid++;
        }
    }
};