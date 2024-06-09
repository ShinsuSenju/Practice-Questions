#include <vector>
using namespace std;

class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> arr(n, 1); 
        const int MOD = 1000000007;
        for(int i = 0; i < k; i++) {
            int preSum = 0;
            for(int j = 0; j < n; j++) {
                arr[j] = (arr[j] + preSum) % MOD;
                preSum = arr[j];
            }
        }
        
        return arr[n - 1];
    }
};

