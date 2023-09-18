class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=INT_MAX,sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int lo=i+1,hi=nums.size()-1;
            while(lo<hi){
                if((nums[i]+nums[lo]+nums[hi]-target)<ans){
                    ans = abs(nums[i]+nums[lo]+nums[hi]-target);
                    sum = nums[i]+nums[lo]+nums[hi];
                }
                if(nums[i]+nums[lo]+nums[hi]-target==0) return nums[i]+nums[lo]+nums[hi];
                else if(nums[i]+nums[lo]+nums[hi]<target) lo++;
                else hi--;

            }
        }
        return sum;
        
    }
};