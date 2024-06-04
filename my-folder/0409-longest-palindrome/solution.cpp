class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int len = 0;
        for(auto it:mp){
            if(it.second%2==0) len+=it.second;
            else{
                if(len%2==0) len+=it.second;
                else len+=it.second-1;
            }
        }
        return len;

        
    }
};
