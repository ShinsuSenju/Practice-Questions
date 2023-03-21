class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int j = 0;
        int temp = -1;
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[j]) {
                if (j == 0) {
                    temp = i;
                }
                j++;
                if (j == needle.length()) {
                    return temp;
                }
            } else {
                j = 0;
                if (temp != -1) {
                    i = temp;
                }
                temp = -1;
            }
        }
        return -1;
    }
};






