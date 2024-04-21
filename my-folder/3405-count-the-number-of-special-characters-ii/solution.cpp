class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        for(int i=0;i<26;i++){
            bool isCap = false;
            bool isSmall= false;
            char t ='a'+i;
            bool isSpecial = false;
            for(int j=0;j<word.size();j++){
                if(word[j]==t && isCap ){
                    isSpecial = false; 
                    break;
                }
                if( word[j]==t ){
                    isSmall = true; 
                }
                if(word[j]-t==-32) {
                    isCap=true;
                    if( isSmall ) isSpecial = true; 
                    continue; 
                }
                
              
            }
            if(isSpecial) count++;
        }
        return count; 
    }
};

