class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> row(m, 0);
        vector<int> col(n, 0);
        unordered_map<int, pair<int, int>> position;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                position[mat[i][j]] = {i, j};
            }
        }
        for (int k = 0; k < arr.size(); k++) {
            int val = arr[k];
            if (position.find(val) != position.end()) {
                auto [i, j] = position[val];
                row[i]++;
                col[j]++;
                
                if (row[i] == n || col[j] == m) {
                    return k;
                }
            }
        }
        
        return -1;
    }
};

