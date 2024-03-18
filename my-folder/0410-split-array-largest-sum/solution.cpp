class Solution {
public:
    bool check(vector<int> nums,int maxSum,int parts){
        int part = 1;
        int current = 0;
        for(int i:nums){
            if(current+i<=maxSum){
                current+=i;
            }
            else {
                current = i;
                part++;
                }

            if(part>parts || current>maxSum) return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low =0;
        int high = accumulate(nums.begin(),nums.end(),0);
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(check(nums,mid,k)){
                high = mid-1;
            }
            else low = mid+1;
            
        } 
        return low;
        
    }
};
