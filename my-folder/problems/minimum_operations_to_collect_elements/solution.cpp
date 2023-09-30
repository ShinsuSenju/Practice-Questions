class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count=0;
        int i =nums.size()-1;
        int temp = k;
        set<int> popup;
        while(temp && i>=0){
            if(nums[i]<=k)
            {
                
                if(popup.count(nums[i])<1)
                temp--;
                popup.insert(nums[i]);
            }
            count++;
            i--;
            
            
            
        }
    return count;
        
    }
};