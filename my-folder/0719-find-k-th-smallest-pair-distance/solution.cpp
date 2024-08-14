class Solution {
public:
    bool check(vector<int> nums,int diff,int k){
        int count = 0;
        int j=0;
         for (int i = 0; i < nums.size(); i++) {
            while (j < nums.size() && nums[j] - nums[i] <= diff) {
                j++;
            }
            count += j - i - 1; 
        }
        return count>=k;

    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int max_diff = nums[nums.size()-1]-nums[0];
        int min_diff;
        int low = 0, high = max_diff;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(nums,mid,k)){
                high = mid - 1;
                min_diff = mid;

            }
            else low = mid + 1;

        }
        return min_diff;

        
    }
};
