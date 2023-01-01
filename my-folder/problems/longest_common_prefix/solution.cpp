class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans=strs[0].length();
        int n=strs.size();
        for(int i=1;i<n;i++){
        int j=0;
        while(j<strs[i].length()&& strs[0][j]==strs[i][j])
        j++;
        ans=min(ans,j);
        }
        cout<<strs[0].substr(0,ans);
        return strs[0].substr(0,ans);
        
    }
};