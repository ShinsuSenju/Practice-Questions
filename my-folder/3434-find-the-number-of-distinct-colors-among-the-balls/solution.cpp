class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int,int> map,color;
        for(vector<int> v:queries){
            int x = v[0];
            int y = v[1];
            if(map.find(x)!=map.end()){
                color[map[x]]--;
                if(color[map[x]]==0) color.erase(map[x]);
            }
            color[y]++;
            map[x]=y;
            ans.push_back(color.size());
        }
        return ans;
        
        
    }
};
