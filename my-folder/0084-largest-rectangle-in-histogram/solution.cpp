class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> prevSmaller(n,-1),nextSmaller(n,n);
        stack<int> temp;
        for(int i=0;i<n;i++){ 
            while(!temp.empty() && heights[temp.top()]>heights[i]) temp.pop();
            if(!temp.empty()) prevSmaller[i] = temp.top();
            temp.push(i);
        }
        while(!temp.empty()) temp.pop();
        for(int i=n-1;i>=0;i--){ 
            while(!temp.empty() && heights[temp.top()]>=heights[i]) temp.pop();
            if(!temp.empty()) nextSmaller[i] = temp.top();
            temp.push(i);
        }
        int maxArea = INT_MIN;
        for(int i = 0;i<n;i++){
            maxArea = max(maxArea,(nextSmaller[i]-prevSmaller[i]-1)*heights[i]);
        }
        return maxArea;

    }
};
