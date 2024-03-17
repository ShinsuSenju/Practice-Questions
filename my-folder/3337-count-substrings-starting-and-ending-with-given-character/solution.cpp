class Solution {
public:
    long long countSubstrings(string s, char c) {
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                 count++;
                }
            }
        
        
        return (long long)count*(count+1)/2;
    }
};
