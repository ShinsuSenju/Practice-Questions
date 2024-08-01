class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for (const string& it : details) {
            char a = it[11];
            char b = it[12];
            if (a > '6' || (a == '6' && b > '0')) {
                ans++;
            }
        }
        return ans;
    }
};
