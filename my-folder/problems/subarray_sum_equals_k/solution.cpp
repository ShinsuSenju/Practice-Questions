class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int> map;
        map[sum]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            count+=map[sum-k];
            map[sum]+=1;
        }
        return count;

        
    }
};