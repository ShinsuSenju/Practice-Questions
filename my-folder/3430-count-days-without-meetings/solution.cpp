class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        map<int, int> mpp;
        for(auto &it : meetings){
            int u = it[0], v = it[1];
            mpp[u]++;  
            mpp[v + 1]--;  
        }

        int count = 0, score = 0, prev = 1;
        for (auto &[day, change] : mpp) {
            if (prev < day && score == 0) {
                count += day - prev;
            }
            score += change;
            prev = day;
        }

        if (prev <= days) count += (days - prev + 1);
        return count;
    }
};
