class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = 0, n = nums.size();
        for (int num : nums) target += num;
        target -= x;
        
        if (target == 0) return n;
        int maxl=0,sum=0,i=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(i<=j && sum>target){
                sum-=nums[i];
                i++;
            }
            if(sum==target){
                maxl = max(maxl,j-i+1);
            }
        }
        return maxl ? n - maxl : -1;
        
    }
};