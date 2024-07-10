class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int totalForw = 0; 
        for(string s : logs){
            if(s[0]!='.') totalForw++;
            else if(s[0]=='.' && s[1]=='.') if(totalForw>0) totalForw--;
            else continue;
        }
        return totalForw>0?totalForw:0;
        
    }
};
