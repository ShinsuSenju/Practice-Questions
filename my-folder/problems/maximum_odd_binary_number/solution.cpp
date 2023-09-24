class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int hi=s.length()-1;
        int i=0,li=0;
        while(i<hi)
        {
            if(s[i]=='1' && s[hi]=='0')
                    swap(s[hi],s[i]);
            
                
        
            else{
                if(s[hi]=='1' && s[i]=='1'){
                swap(s[i],s[li]);
                li++;
                }    
            }
            i++;
        }
        
        return s;
        
    }
};