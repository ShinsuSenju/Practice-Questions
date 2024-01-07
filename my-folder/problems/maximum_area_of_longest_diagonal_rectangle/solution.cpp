class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxDiagonal = -1;
        int maxArea = -1;
        for (auto &dimension : dimensions) {
        int length = dimension[0];
        int width = dimension[1];
        double diagonal = sqrt((length*length) + (width*width));
        if (diagonal > maxDiagonal) {
            maxDiagonal = diagonal;
            maxArea = length * width;
        } else if (diagonal == maxDiagonal && length * width > maxArea) {
            maxArea = length * width;
        }
    }
    
    return maxArea;
        
        
        
    }
};