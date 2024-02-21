class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int sum=0;
        int count=0;
        for(int i:nums){
            sum+=i;
            if(sum==k) count++;
            if(map.count(sum-k)>0) count+=map[sum-k];
            if(map.count(sum)>0) map[sum]++;
            else map[sum]=1;
            
        }
        return count;
    }
};