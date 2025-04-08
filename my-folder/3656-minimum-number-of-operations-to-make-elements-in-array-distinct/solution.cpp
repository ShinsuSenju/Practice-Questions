class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        unordered_map<int,int> map;
        int count = 0;
        while(right<nums.size()){
            map[nums[right]]++;
            while(map[nums[right]]>1){
                count++;
                map[nums[left]]--;
                if(left<n-1)
                map[nums[left+1]]--;
                if(left<n-2)
                map[nums[left+2]]--;
                left = left+3;
            }
            right++;
            
        }
        return count;
        
    }
};
