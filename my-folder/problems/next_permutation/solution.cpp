class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if (index == -1) {
            reverse(nums.begin(), nums.end());  
            return;
        }
        for(int j=nums.size()-1;j>index;j--){
            if(nums[j]>nums[index]){
                 swap(nums[j],nums[index]); 
                 break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());

        

        
        
    }
};