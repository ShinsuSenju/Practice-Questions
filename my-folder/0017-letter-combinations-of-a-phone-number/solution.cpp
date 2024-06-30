class Solution {
public:
    void recursion(string digits,unordered_map<char,string> key,vector<string> &ans,string temp,int i){
        if(i==digits.size()){
            ans.push_back(temp);
            return;
        }
        string s = key[digits[i]];
        for(char c:s){
            recursion(digits,key,ans,temp+c,i+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        unordered_map<char,string> keyboard = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        vector<string> ans;
        recursion(digits,keyboard,ans,"",0);
        return ans;
       

        
    }
};
