class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && isdigit(s[i])) {
                st.pop();
            } else if(s[i] >= 'a' && s[i] <= 'z') {
                st.push(s[i]);
            } else {
                continue;
            }
        }
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

