class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());           
            map[word].push_back(strs[i]);
        }

        for(auto it: map) ans.push_back(it.second);
        return ans;
    }
};