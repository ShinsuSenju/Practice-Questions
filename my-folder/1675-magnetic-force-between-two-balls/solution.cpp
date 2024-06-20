class Solution {
public:
    bool canPlaceBalls(const vector<int>& position, int m, int minDist) {
        int count = 1;
        int lastPos = position[0];
        
        for (int i = 1; i < position.size(); ++i) {
            if (position[i] - lastPos >= minDist) {
                ++count;
                lastPos = position[i];
                if (count >= m) {
                    return true;
                }
            }
        }
        
        return count >= m;
    }
    
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left = 1; 
        int right = position.back() - position.front(); 
        int ans = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canPlaceBalls(position, m, mid)) {
                ans = mid;
                left = mid + 1; 
            } else {
                right = mid - 1; 
            }
        }
        
        return ans;
        
    }
};
