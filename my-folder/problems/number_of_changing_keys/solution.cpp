class Solution {
public:
    int countKeyChanges(string s) {
         for (int x=0; x<s.size(); x++)
        s[x]=tolower(s[x]);
        int count=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]) count++;
        }
        return count;
        
        
    }
};