class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Tmap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int v = target - nums[i];
            if(Tmap.count(v)>0)
            {
                ans.push_back(Tmap[v]);
                ans.push_back(i);
                break;
            }
            else 
            Tmap[nums[i]]=i;


        }
        return ans; 
        
    }
};