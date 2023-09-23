class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.size();
        int n=t.size();
        int i=n-1,j=m-1;
        while(i>=0 && !s.empty()){
            if(s[j]==t[i]){
            s.pop_back();
            j--;
            }
            i--;
        }
        return s.empty();
        
    }
};