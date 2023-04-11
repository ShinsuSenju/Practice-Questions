class Solution {
public:
    bool isPalindrome(string s) {
        string sn="";
        
        int n=s.length()-1;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
            if(isalpha(s[i])|| isdigit(s[i]))
            {
                sn+=s[i];
            }
        }
        string snr=string(sn.rbegin(),sn.rend());
        return sn==snr;
    }
};
