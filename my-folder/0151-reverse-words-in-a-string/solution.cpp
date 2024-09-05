class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        int start = 0;
        for (int end = 0; end <= s.size(); end++) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            s.erase(s.begin() + i);
        }
        int n = s.size();
        i = 0;
        while (i < s.size()) {
            if (s[i] == ' ' && (i + 1 < s.size() && s[i + 1] == ' ')) {
                s.erase(s.begin() + i);
            } else {
                i++;
            }
        }

        if (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }

        return s;
    }
};

