class Solution {
public:
    bool sort(vector<int> nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])
                return false;    
        }
        return true;
    }
    int minimumRightShifts(vector<int>& nums) {
        int count=0;
        while(count<nums.size()){
            if(!sort(nums)){
                int temp=nums[0];
                nums.erase(nums.begin());
                nums.push_back(temp);
                count++;
            }
            else{
                if(count!=0)
                    return nums.size()-count;
                return 0;
            }
        }
        return -1;
        
    }
};