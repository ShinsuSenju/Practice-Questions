#include <vector>
#include <unordered_map>

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1,vector<int>& nums2, int k) {
        long long count = 0;
        unordered_map<int, int> Map;
        for (int num : nums2) {
            Map[num * k]++;
        }
        for(int x:nums1){
            for(int i=1;i<=sqrt(x);i++){
                if(x%i==0){
                    count+=Map[i];
                    if(x/i!=i) count+=Map[x/i];
                }
            }
        }

        return count;
    }
};

