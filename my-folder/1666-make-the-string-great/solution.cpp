class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(st.empty() || abs((int)st.top() - (int)s[i]) != 32){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

