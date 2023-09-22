class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        int i=0,j=0;
        while(i<n){
            if(s[j]==t[i]) j++;
            i++;
        }
        return m==j;
        
    }
};