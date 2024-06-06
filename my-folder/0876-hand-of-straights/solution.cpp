class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) {
            return false;
        }
        sort(hand.begin(), hand.end());
        unordered_map<int, int> mp;
        for (int card : hand) {
            mp[card]++;
        }
        for (int card : hand) {
            if (mp[card] == 0) continue;
            for (int i = card; i <card+groupSize; ++i) {
                
                if (mp[i] == 0) {
                    return false;
                }
                mp[i]--;
            }
        }
        
        return true;
    }
};

