typedef long long ll;

class Solution {
public:
    bool carRepaired(const vector<int>& ranks, int cars, ll mid) {
        int count = 0;
        for (int i = 0; i < ranks.size(); i++) {
            count += sqrt(mid / ranks[i]);
            if (count >= cars) return true; 
        }
        return false;
    }

    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(), ranks.end()); 
        ll left = 1, right = (ll)ranks[0] * cars * cars, ans = 0;

        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (carRepaired(ranks, cars, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

