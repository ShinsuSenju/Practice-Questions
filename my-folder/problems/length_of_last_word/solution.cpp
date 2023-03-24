class Solution {
public:
    int lengthOfLastWord(string s) {
        string st="";
           int i=s.size()-1;
            while(s[i]==' ')i--;
            while(i>=0 && s[i]!=' '){
               st+=s[i];
               i--;
           }
        
        
        return st.size();
    }
};