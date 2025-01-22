class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0,right = 0;
        int ans = 0;
        int maxF = 0;
        vector<int> map(26,0);
        while(right<s.size()){
            map[s[right]-'A']++;
            maxF = max(maxF,map[s[right++]-'A']);
            if(right - left - maxF>k)map[s[left++]-'A']--;
            ans = max(right-left,ans);      
        }
        return ans;
        
    }
};
