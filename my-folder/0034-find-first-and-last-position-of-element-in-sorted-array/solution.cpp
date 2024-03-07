#include <vector>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                first = mid;
                last = mid;
                while (first > low && nums[first - 1] == target) {
                    first--;
                }
                while (last < high && nums[last + 1] == target) {
                    last++;
                }
                break; 
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {first, last};
    }
};

