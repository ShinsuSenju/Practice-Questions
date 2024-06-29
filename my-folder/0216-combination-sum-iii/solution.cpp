class Solution {
public:
    void recursion(vector<vector<int>> &ans, vector<int> temp, int sum, int i, int k, int n){
        if (sum > n || temp.size() > k) return;
        if (sum == n && temp.size() == k) {
            ans.push_back(temp);
            return;
        }
        for (int j = i; j <= 9; j++) {
            temp.push_back(j);
            recursion(ans, temp, sum + j, j + 1, k, n);
            temp.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        recursion(ans, {}, 0, 1, k, n);
        return ans;
    }
};
