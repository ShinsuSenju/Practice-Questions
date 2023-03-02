class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char x:s)
        {
        if(x=='{' || x=='(' || x=='[')
        {
            st.push(x);
        }
        else if(x=='}' || x==')' || x==']')
        {
            if(st.empty())
            return false;
            else if(x=='}' && st.top()=='{')
            st.pop();
            else if(x==']' && st.top()=='[')
            st.pop();
            else if(x==')' && st.top()=='(')
            st.pop();
            else 
            return false;
        }
        }
        if(st.empty())
        return true;
        else
        return false;
    }
};