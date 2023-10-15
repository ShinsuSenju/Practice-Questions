class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& group) {
        vector<string> ans;
        int last = group[0];
        ans.push_back(words[0]);

          for(int i=1;i<n;i++){
              if(last!=group[i]){
                  last = group[i];
                  ans.push_back(words[i]);
              }
          }
            
        
    return ans;
        
    }
};