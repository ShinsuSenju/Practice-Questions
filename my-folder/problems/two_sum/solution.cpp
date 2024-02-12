class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int k = target-nums[i];
            if(map.count(k)) return {map[k],i};
            else map[nums[i]]=i;
        } 
        return {-1,-1};
    }
};