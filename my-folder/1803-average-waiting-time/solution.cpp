class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        double sum = 0;
        int prev = 0;
        for(vector<int> v:customers){
            int arrived = v[0];
            int time = v[1];
            prev = prev>arrived?(prev+time):(arrived+time);
            sum+=prev-arrived;
        }
        return sum/n;
        
    }
};
