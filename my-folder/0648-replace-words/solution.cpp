class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> st(dictionary.begin(),dictionary.end());
        string temp="";
        string ans="";
        vector<string> word;
        for(char c:sentence){
            if(c==' ') {
                word.push_back(temp);
                temp="";
            }
            else temp+=c;
        }
        if(!temp.empty()) word.push_back(temp);
        // for(string s:word) cout<<s<<endl;
        for(string s:word){
            string t;
            for(int i=0;i<s.size();i++){
                t = s.substr(0,i+1);
                if(st.count(t)) break;
            }
            // if (!ans.empty()) {
            //     ans += " ";
            // }
            ans += t+" ";
        }
        ans.erase(ans.size()-1);
        return ans;
        
    }
};
