class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // priority_queue<int>pq(happiness.begin(),happiness.end());
        sort(happiness.begin(),happiness.end());
        stack<int> pq;
        for(int i:happiness){
            pq.push(i);
        }
        long long sum = 0;
        int day = 0;

        while (day < k && !pq.empty()) {
            int child = pq.top();
            pq.pop();
            child -= day;

            if (child < 0) {
                child = 0;
            }

            sum += child;
            day++;
        }

        return sum;
    
        
    }
};
