class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        int maxf=0;
        for(auto it:map){
            if(it.second>maxf)
                maxf=it.second;
        }
        int count=0;
        for(auto it:map){
            if(it.second==maxf) count++;
        }
        return maxf*count;
        
    }
};