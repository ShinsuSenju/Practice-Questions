class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int ans = 0;
        int i=0,j=0;
        while(j<s.size()){
            map[s[j]]++;
            if(map.size()==j-i+1) ans = max(ans,j-i+1);
            else if(map.size()<j-i+1){
                while(map.size()<j-i+1){
                    map[s[i]]--;
                    if(map[s[i]]==0){
                        map.erase(s[i]);
                        
                    }
                    i++;

                }
            }
            j++;
        }
        return ans;
        
    }
};