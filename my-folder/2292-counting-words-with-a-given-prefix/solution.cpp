class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(string word:words){
            int i=0,j=0;
            while(i<word.size() && j<pref.size()){
                if(word[i]==pref[j]){
                    i++;
                    j++;
                }
                else break;
            }
            if(j!=pref.size()) continue;
            else count++;
        }
        return count;
        
    }
};
