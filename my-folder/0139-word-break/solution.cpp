class Solution {
public:
    int dp[301];
    bool solve(string s,int idx,set<string> st){
        if(idx>=s.size()) return true;
        if(dp[idx]!=-1) return dp[idx];
        string temp ="";
        for(int i=idx;i<s.size();i++){
            temp+=s[i];
            if(st.find(temp)!=st.end()){
                if(solve(s,i+1,st)) return dp[idx]=1;
            } 
        }
        return dp[idx]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp,-1,sizeof(dp));
        set<string> st;
        for(string word: wordDict) st.insert(word);
        return solve(s,0,st);
        
    }
};
