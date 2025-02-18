class Solution {
public:
    bool backtrack(string& pattern, vector<bool>& used, vector<int>& nums, int index) {
        if (index == pattern.size() + 1) return true; 
        for (int i = 1; i < 10; i++) {
            if (used[i]) continue;
            nums[index] = i;
            used[i] = true;
            if (index == 0 || 
               (pattern[index - 1] == 'I' && nums[index - 1] < nums[index]) || 
               (pattern[index - 1] == 'D' && nums[index - 1] > nums[index])) {
                
                if (backtrack(pattern, used, nums, index + 1)) return true;
            }
            nums[index] = -1;
            used[i] = false;
        }
        
        return false;
    }

    string smallestNumber(string pattern) {
        vector<bool> used(10, false);
        int n = pattern.size();
        vector<int> nums(n + 1, -1);
        
        backtrack(pattern, used, nums, 0);
        
        string ans;
        for (int i = 0; i <= n; i++) {
            ans.push_back(nums[i] + '0');
        }
        
        return ans;
    }
};

