class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(char c:s){
            map[c]++;
        }
        vector<pair<int,char>> sol;
        for(auto it:map) sol.push_back({it.second,it.first});
        sort(sol.rbegin(),sol.rend());
        string ans;
        for(auto i:sol){
            for(int j=0;j<i.first;j++) ans+=i.second;
        }
        return ans;
    }
};
