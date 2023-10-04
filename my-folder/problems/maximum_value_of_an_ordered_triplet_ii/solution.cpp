class Solution {
private:
    #define ll long long
public:
    long long maximumTripletValue(vector<int>& v) {
        ll n = v.size();
        ll ans = LLONG_MIN;

        vector<ll> pre(n),suff(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++) pre[i] = max(pre[i - 1], (ll)v[i]);
        
        suff[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--) suff[i] = max(suff[i + 1], (ll)v[i]);
        
        for (int j = 1; j < n - 1; j++) {
            ans = max(ans, (pre[j - 1] - v[j]) * suff[j + 1] * 1LL);
        }

        return ans > 0 ? ans : 0; 
    }
    

};