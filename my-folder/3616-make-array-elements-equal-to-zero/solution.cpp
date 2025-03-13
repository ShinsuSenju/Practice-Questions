class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n+1,0);
        for(int i=1;i<=n;i++){
            preSum[i] = preSum[i-1] + nums[i-1];
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0){
                int lSum = preSum[i];
                int rSum = preSum[n]-lSum;
                if(abs(lSum-rSum)==0) ans+=2;
                else if(abs(lSum-rSum)==1) ans+=1;
            }
        }
        return ans;
        
    }
};
