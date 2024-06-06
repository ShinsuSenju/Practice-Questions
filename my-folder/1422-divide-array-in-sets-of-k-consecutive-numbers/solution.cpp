class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mp;
        for(int n:nums) mp[n]++;
        for(int n:nums){
            if(mp[n]==0) continue;
            for(int i=n;i<n+k;i++){
                if(mp[i]==0) return false;
                mp[i]--;
        
            }
        }
        return true;
    }
};
