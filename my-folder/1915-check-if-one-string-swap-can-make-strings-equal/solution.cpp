class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> mp(26, 0);
        for (int i = 0; i < s1.size(); i++) {
            mp[s1[i] - 'a']++;
        }
        int incorrect = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (mp[s2[i] - 'a'] == 0) return false;
            if (s1[i] != s2[i]) incorrect++;
            mp[s2[i] - 'a']--;  
        }
        return incorrect == 0 || incorrect == 2; 
    }
};
