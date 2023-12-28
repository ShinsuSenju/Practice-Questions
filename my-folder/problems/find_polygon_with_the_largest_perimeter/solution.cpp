class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       long long peri=0;
       for(auto i:nums){
           peri+=i;

       }
       for(int i=nums.size()-1;i>=2;i--){
           peri-=nums[i];
           if(peri>nums[i]) return peri+nums[i];
       }
        return -1;
        
    }
};