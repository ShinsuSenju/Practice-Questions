class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> ans;
        if(nums.size()==1){
            if(nums[0]==indexDifference && nums[0]==valueDifference)
                return {0,0};
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])>=valueDifference && abs(i-j)>=indexDifference){
                    ans.push_back(i);
                    ans.push_back(j);
                }
                   
            }
        }
        if(ans.empty()) return {-1,-1};
        return ans;
        
    }
};