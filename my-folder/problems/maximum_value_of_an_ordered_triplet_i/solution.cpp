class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max = INT_MIN;
        int n=nums.size();
        for(long long i=0;i<n;i++){
            for(long long j=i+1;j<n;j++){
                for(long long k=j+1;k<n;k++)
                {
                    long long temp =  (long long)(nums[i] - nums[j])* nums[k];
                    if(temp>=max)
                        max=temp;
                }
            }
        }
        if(max<0)
            return 0;
        return max;
        
        
    }
};