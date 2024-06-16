class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long currentR=0;
        long long count=0;
        int i=0;
        while(currentR<n){
            if(i<nums.size() && currentR+1>=nums[i]){
                currentR+=nums[i];
                i++;
            }
            else{
                currentR+=currentR+1;
                count++;

            }
        }
        return count;
        
    }
    
};
