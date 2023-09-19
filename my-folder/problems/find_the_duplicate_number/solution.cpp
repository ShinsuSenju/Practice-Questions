class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i<n){
            int temp = nums[i]-1;
            if(nums[i]!=nums[temp])
            {
                int x = nums[temp];
                nums[temp]=nums[i];
                nums[i]=x;
            }
            else i++;
        }
        return nums[n-1];
        
    }

};