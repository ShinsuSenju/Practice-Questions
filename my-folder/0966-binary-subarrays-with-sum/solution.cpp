class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> map;
        int sum = 0;
        int count = 0;
        map[sum]=1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            count+=map[sum-goal];
            map[sum]++;
        }
        return count;
    }
};
