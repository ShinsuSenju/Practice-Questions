class Solution {
public:
    int maxPower(string s) {
        int maxcount,charcount=1;
        char cc;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            charcount++;
            else{
                maxcount=max(maxcount,charcount);
                charcount=1;
            }


        }
        return max(charcount,maxcount);
        
    }
};