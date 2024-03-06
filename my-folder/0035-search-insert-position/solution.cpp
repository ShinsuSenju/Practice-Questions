class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0) return 0;
        int l=0;
        int f = nums.size()-1;
        while(l<=f){
            int m = l+(f-l)/2;
            if(nums[m]==target) return m;
            else if(nums[m]<target) l = m+1;
            else f = m-1;
        }
        return l;
    }
};
