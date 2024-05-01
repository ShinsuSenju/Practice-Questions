class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        string ans = "";
        int i=0;
        bool flag = false;
        for(i=0;i<word.size();i++){
            st.push(word[i]);
            if(word[i]==ch){
                flag=true;
                break;
            }
        }
        if(flag==false) return word;
        i++;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        while(i<word.size()){
            ans+=word[i++];
        }
        return ans;
        
    }
};
