class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0,last=nums.size()-1,mid;
        while(first<=last)
        {
            mid=first+(last-first)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            first=mid+1;
            else last=mid-1;
        }
        return first;
        
    }
};