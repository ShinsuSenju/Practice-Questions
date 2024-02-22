class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i =1; i <=numRows; i++) {
            vector<int> row(i, 1);
            int coeff = 1;
            for (int j = 1; j < i; j++) {
                coeff = coeff * (i - j) / j;
                row[j] = coeff;
            }
            ans.push_back(row);
        }
        return ans;
    }
};