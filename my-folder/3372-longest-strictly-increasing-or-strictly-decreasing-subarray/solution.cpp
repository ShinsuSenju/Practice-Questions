class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();

        int incr = 1;
        int decr = 1;
        int maxLen = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                incr++;
                decr = 1; 
                maxLen = max(maxLen, incr);
            } else if (nums[i] > nums[i + 1]) {
                decr++;
                incr = 1; 
                maxLen = max(maxLen, decr);
            } else {
                incr = 1;
                decr = 1;
            }
        }

        return maxLen;
    }
};
