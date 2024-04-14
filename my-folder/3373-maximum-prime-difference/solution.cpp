#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        set<int> s = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

        int small = -1, last = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i])) {
                small = i;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (s.count(nums[i])) {
                last = i;
                break;
            }
        }
        if (small == -1 || last == -1) return -1; 

        return abs(small - last);
    }
};

