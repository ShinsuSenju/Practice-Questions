class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort(points.begin(), points.end());
        int count = 0; 
        int len = INT_MIN;

        for (int i = 0; i < points.size(); i++) {
          
            if (points[i][0] > len) {
                len = points[i][0] + w;
                count++;
            }
        }
        return count;
    }
};

