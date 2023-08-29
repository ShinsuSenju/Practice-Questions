class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size()<2)
        return false;
        int sum=0;
        unordered_map<int,int> s;
        s[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(k!=0)
            sum=sum%k;
            if(s.count(sum)>0){
                if(i-s[sum]>1) return true;
            }
            else
            s[sum]=i;
        }
        return false;
        
        
    }
};