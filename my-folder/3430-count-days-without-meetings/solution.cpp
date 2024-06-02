class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> merged;
        for(vector<int> v:meetings){
            if(merged.empty() || merged.back()[1]<v[0]){
                merged.push_back(v);
            }
            else if(merged.back()[1]>=v[0] && merged.back()[1]<=v[1] ){
                merged.back()[1]=v[1];
            }
        }
        int diff=0;
        for(vector<int> v:merged){
            diff+=v[1]-v[0]+1;
        }
        return days-diff;
    }
};
