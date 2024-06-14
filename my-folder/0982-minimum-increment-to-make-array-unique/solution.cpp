class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
         int count=0;
         sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]) continue;
            else if(nums[i]==nums[i-1]){
                count++;
                nums[i]++;
            }
            else {
                int temp = nums[i-1]-nums[i]+1;
                count+=temp;
                nums[i]=nums[i-1]+1;
                
            }
        }
        return count;
         

        
        
    }
};
