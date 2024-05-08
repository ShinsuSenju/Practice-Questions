class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> map;
        for(auto i:score){
            map[i]++;
        }
        vector<int> ori(score.begin(),score.end());
        sort(score.begin(),score.end());
        int j=1;
        for(int i=score.size()-1;i>=0;i--){
            map[score[i]]=j++;
        }
        vector<string> ans;
        for(auto it:ori){
            if(map[it]==1) ans.push_back("Gold Medal");
            else if(map[it]==2) ans.push_back("Silver Medal");
            else if(map[it]==3) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(map[it]));
        }
        return ans;
        
        
    }
};
