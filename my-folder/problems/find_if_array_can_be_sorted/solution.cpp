class Solution {
public:
    
    bool canSortArray(vector<int>& nums) {
    for(int i = 0; i < nums.size() - 1; i++) {
        bitset<32> b1(nums[i]);
        for(int j = i + 1; j < nums.size(); j++) {
            bitset<32> b2(nums[j]);
            
            if(nums[i] > nums[j] && b1.count() != b2.count()) {
                return false;
            }
        }
    }
    return true;
}

};