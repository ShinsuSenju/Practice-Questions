class Solution {
public:
    string reverseParentheses(string s) {
        int i;
        stack<int> st;
        for(int i = 0; i<s.size();i++){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                reverse(s.begin()+st.top(),s.begin()+i);
                st.pop();
            }
        }
        string ans = "";
        for(char c:s){
            if(isalpha(c)) ans+=c;
        }
        return ans;
    }
};
