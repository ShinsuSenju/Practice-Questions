class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
       int count=0;
       unordered_map<int,int> map;
       for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
       }
        for(int i = 0;i<nums.size();i++){
            int target = nums[i]+k;
             if(map.count(target))
             count+=map[target];
        }

        return count;
        
    }
};