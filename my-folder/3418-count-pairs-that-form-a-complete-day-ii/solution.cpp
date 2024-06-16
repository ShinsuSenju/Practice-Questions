class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> mp;
        long long count = 0;

        for (int hour : hours) {
            int rem = hour % 24;
            int comp = (24 - rem) % 24;
            if (mp.count(comp)) {
                count += mp[comp];  
            }
            mp[rem]++;  
        }

        return count;
    }
};

