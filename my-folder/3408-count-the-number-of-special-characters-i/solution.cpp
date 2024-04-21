
class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        vector<int> s(26, 0);
        vector<int> l(26, 0);
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') {
                l[c - 'A']++;
            } else if (c >= 'a' && c <= 'z') {
                s[c - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (s[i] > 0 && l[i] > 0) {
                count++;
            }
        }
        return count;
    }
};

