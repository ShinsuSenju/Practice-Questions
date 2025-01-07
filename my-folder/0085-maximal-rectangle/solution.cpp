class Solution {
public:
    int maxHistogram(vector<int> row) {
        int area = 0;
        stack<int> temp;
        for (int i = 0; i < row.size(); i++) {
            while (!temp.empty() && row[temp.top()] > row[i]) {
                int ele = row[temp.top()];
                temp.pop();
                int nse = i;
                int pse = temp.empty() ? -1 : temp.top();
                area = max(area, (nse - pse - 1) * ele);
            }
            temp.push(i);
        }
        while (!temp.empty()) {
            int ele = row[temp.top()];
            temp.pop();
            int nse = row.size();
            int pse = temp.empty() ? -1 : temp.top();
            area = max(area, (nse - pse - 1) * ele);
        }
        return area;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return 0;
        
        int m = matrix[0].size();
        int n = matrix.size();
        vector<vector<int>> heights(n, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            heights[0][j] = matrix[0][j] - '0';
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                heights[i][j] = matrix[i][j] == '0' ? 0 : heights[i-1][j] + 1;
            }
        }
        
        int maxArea = 0;
        for (vector<int> row : heights) {
            int area = maxHistogram(row);
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};

