class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> a(26,INT_MAX);
        for(string word:words){
            vector<int> b(26,0);
            for(char c:word){
                b[c-'a']++;
            }
            for(int i=0;i<26;i++){
                a[i]=min(a[i],b[i]);
            }
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(a[i]--){
                ans.push_back(string(1,'a'+i));
            }
        }
        return ans;

        
    }
};
