class Solution {
public:
    int backtrack(vector<int>& count) {
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] == 0) continue;
            ans++;
            count[i]--;  
            ans += backtrack(count); 
            count[i]++; 
        }
        return ans;
    }

    int numTilePossibilities(string tiles) {
        vector<int> count(26, 0);
        for (char c : tiles) count[c - 'A']++; 
        return backtrack(count);
    }
};

