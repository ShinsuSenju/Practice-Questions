class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
    unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        for(auto it:map){
            if(it.second>2) return false;
        }
        return true;
    }
};