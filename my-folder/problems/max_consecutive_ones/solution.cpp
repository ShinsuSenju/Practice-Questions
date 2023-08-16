class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,temp=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            temp++;
            if(nums[i]==0)
            temp = 0 ;
            if(temp>count)
            count=temp;
        }
        return count;
        
    }
};