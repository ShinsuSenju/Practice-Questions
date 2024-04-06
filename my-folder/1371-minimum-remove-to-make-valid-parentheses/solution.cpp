class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string pref="";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                pref+=s[i];
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                    pref+=s[i];
                }
            }
            else pref+=s[i];
        }
        stack<char> st2;
        string ans="";
 
       for (int i = pref.size()-1; i >= 0; i--) {
            if (pref[i] == ')') {
                st2.push(pref[i]);
                ans+=pref[i];
            } else if (pref[i] == '(') {
                if (!st2.empty()) {
                    st2.pop();
                    ans+=pref[i];
                }
            }
            else ans+=pref[i];
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};

