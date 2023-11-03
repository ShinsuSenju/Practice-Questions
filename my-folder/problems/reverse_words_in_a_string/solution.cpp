class Solution {
public:
    string reverseWords(string s) {
        stack<string> temp;
        string ctemp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ')
                ctemp += s[i];
            else {
                if (!ctemp.empty()) { 
                    temp.push(ctemp);
                    ctemp = "";
                }
            }
        }

        if (!ctemp.empty()) {
            temp.push(ctemp); 
        }

        string ans = "";
        while (!temp.empty()) {
            ans += temp.top();
            temp.pop();
            if (!temp.empty()) {
                ans += ' '; 
            }
        }
        return ans;
        
    }
};