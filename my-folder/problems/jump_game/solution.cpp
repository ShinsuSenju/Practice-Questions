class Solution {
public:
    bool canJump(vector<int>& nums) {
         int jump=0;
         for(int i=0;i<nums.size()-1;i++){
             if(jump<nums[i]){
                 jump=nums[i];

             }
             if(jump--==0) return false;

         }
        
        return true;

    }
};