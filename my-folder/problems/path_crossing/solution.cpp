class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,bool> map;
        pair<int,int> xy = {0,0};
        map[xy]=true;
        for(int i=0;i<path.size();i++){
            if(path[i]=='N') xy.first++;
            else if(path[i]=='S') xy.first--;
            else if(path[i]=='E') xy.second++;
            else xy.second--;
            if(map[xy]==true) return true;
            else{
                map[xy]=true;
            }
        }
        return false;
    

    }
};