class Solution {
public:
    string longestCommonPrefix(vector<string> &arr) {
        if(arr.empty()) return "";
        int ans = INT_MAX;  
        for(int i = 1; i < arr.size(); i++) {
            int j = 0;
            while(j < arr[i].size() && arr[0][j] == arr[i][j]) {
                j++;
            }
            ans = min(ans, j);
        }
   
        return arr[0].substr(0, ans);
    }
};

