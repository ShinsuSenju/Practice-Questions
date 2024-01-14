class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
       int n = s.length();
        int m = a.length();
        int p = b.length();

        vector<int> suba, subb;

        for (int i = 0; i <= n - m; ++i) {
            if (s.substr(i, m) == a) {
                suba.push_back(i);
            }
        }

        for (int j = 0; j <= n - p; ++j) {
            if (s.substr(j, p) == b) {
                subb.push_back(j);
            }
        }

        vector<int> ans;
        for (int i : suba) {
            for (int j : subb) {
                if (abs(j - i) <= k) {
                    ans.push_back(i);
                    break;  
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};