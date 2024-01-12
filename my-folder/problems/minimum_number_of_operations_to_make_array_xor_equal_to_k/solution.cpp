class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int XOR = 0;
        for (int num : nums) {
            XOR ^= num;
        }

        int count = 0;
        while (XOR != 0 || k != 0) {
            if ((XOR & 1) != (k & 1)) {
                count++;
            }
            XOR >>= 1;
            k >>= 1;
        }

        return count;
    }
};
