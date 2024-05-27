class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int area = INT_MIN;
        int right = height.size()-1;
        while(left<right){
            area = max(area,(right-left)*(min(height[left],height[right])));
            if(height[left]<height[right]) left++;
            else right--;
        }
        return area;
    }
};
