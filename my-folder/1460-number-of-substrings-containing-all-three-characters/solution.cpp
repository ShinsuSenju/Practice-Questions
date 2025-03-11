class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        vector<int> map(3,0);
        int count = 0;
        for(int right = 0;right<s.size();right++){
            map[s[right]-'a']++;
            while(map['a'-'a'] && map['b'-'a'] && map['c'-'a']){
                count+=(s.size()-right);
                map[s[left]-'a']--;
                left++;
            }

        }
        return count;
        
    }
};
