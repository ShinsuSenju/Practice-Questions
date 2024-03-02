
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());

        int count = 0;

        while (pq.top() < k && pq.size() >= 2) {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();

            long long opr = x*2;
            long long opr2= opr+y;
            
            // if(opr<k)
            pq.push(opr2);

            count++;
        }
        // if(pq.top()<k) count++;

        return count;
        
    }
};
