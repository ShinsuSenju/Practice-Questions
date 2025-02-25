class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";
        
        unordered_map<char, int> mp;
        for (char c : t) mp[c]++; 
        
        int left = 0, right = 0, minLen = INT_MAX, start = 0, count = t.size();
        
        while (right < s.size()) {
            if (mp[s[right]] > 0) count--;
            mp[s[right]]--;
            right++;
            
            while (count == 0) {  
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }
                mp[s[left]]++;
                if (mp[s[left]] > 0) count++;  
                left++;
            }
        }
        
        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};

