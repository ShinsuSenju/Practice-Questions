class Solution {
public:
    int check(vector<int>& v, int maxCap, int days) {
        int day = 1;
        int curCap = 0;
        
        for (int i:v) {
            if (curCap + i <= maxCap) {
                curCap += i;
            } else {
                curCap = i;
                day++;
                if (day > days || i > maxCap) {
                    return 0;
                }
            }
        }
        return 1;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1;
        int high = 0;
        
        for (int weight : weights) {
            high += weight;
        }
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(weights, mid, days)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
