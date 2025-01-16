class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> charMap;
        int left = 0, right = 0;
        int maxLen = 0;
        while(right<s.size()){
            if(charMap.find(s[right])!=charMap.end()){
                if(charMap[s[right]]>=left)
                left = charMap[s[right]]+1;
            }
            maxLen = max(maxLen,right - left+1);
            charMap[s[right]]=right;
            right++;
        }
        return maxLen;  
    }
};
