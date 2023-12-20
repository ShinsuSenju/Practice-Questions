class Solution {
public:
   vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_map<int, int> map;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size();j++){
            map[grid[i][j]]++;

        }
    }
    int  repeat, miss;
    for(int i=0;i<=grid.size()*grid.size();i++){
        if(map[i]==0) miss = i;
        if(map[i]==2) repeat = i;
    }
    return {repeat,miss};
}
};