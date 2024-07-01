class Solution {
public:
    bool checkpal(string s,int i,int j){
        while(i<=j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void recursion(string s, vector<vector<string>> &ans,vector<string> temp,int i){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        for(int ind = i;ind<s.size();ind++){
            if(checkpal(s,i,ind)){
                temp.push_back(s.substr(i,ind-i+1));
                recursion(s,ans,temp,ind+1);
                temp.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        recursion(s,ans,{},0);
        return ans;
        
    }
};
