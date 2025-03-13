class Solution {
public:
    bool minZeroCheck(vector<int>& nums, vector<vector<int>>& queries, int mid) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int i = 0; i < mid; i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            int val = queries[i][2];
            freq[left] -= val;
            if (right + 1 < n) {
                freq[right + 1] += val;
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            count += freq[i];
            if (nums[i] + count > 0) {
                return false;
            }
        }
        return true;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int left = 0;
        int right = queries.size();
        int ans = -1;

        while (left <= right) {  
            int mid = left + (right - left) / 2;
            if (minZeroCheck(nums, queries, mid)) {
                ans = mid;  
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

