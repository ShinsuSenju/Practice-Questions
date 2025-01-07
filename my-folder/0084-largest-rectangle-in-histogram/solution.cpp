class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        stack<int> temp;
        for(int i = 0;i<heights.size();i++){
            while(!temp.empty() && heights[temp.top()]>heights[i]){
                int el = temp.top();
                temp.pop();
                int nse = i;
                int pse = temp.empty()?-1:temp.top();
                ans=max((nse-pse-1)*heights[el],ans);
            }
            temp.push(i);
        }
        while(!temp.empty()){
            int el = temp.top();
            temp.pop();
            int nse = heights.size();
            int pse = temp.empty()?-1:temp.top();
            ans=max((nse-pse-1)*heights[el],ans);
        }
        return ans;
        
    }
};
