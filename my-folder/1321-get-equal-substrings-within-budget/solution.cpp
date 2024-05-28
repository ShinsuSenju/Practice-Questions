class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> cost(s.size());
        for(int i = 0; i < s.size(); i++) {
            cost[i] = abs(s[i] - t[i]);
        }
        int i = 0;
        int j = 0;
        int mcos = 0;
        int ans = 0;  
        while(j < cost.size()) {
            mcos += cost[j];
            while(mcos > maxCost) {
                mcos -= cost[i];
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
