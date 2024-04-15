class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";
        for(int i = 0; i < s.size(); i++) {
           if(s[i]==' ') {
                if(temp.size()!=0){
                st.push(temp);
                temp = "";
                }
            }
            else  temp += s[i];
        }
        if(temp.size()!=0) st.push(temp);
        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
            if(!st.empty())
                ans += " ";
        }
        return ans;
    }
};

