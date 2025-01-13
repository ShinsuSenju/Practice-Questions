class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int ans = s.size();
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>=3){
                ans = ans - 2;
                mp[s[i]]-=2;
            }
        }
        return ans;
    }
};
