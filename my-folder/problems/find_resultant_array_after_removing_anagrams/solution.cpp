class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>vnew;
        for(int i=words.size()-1;i>0;i--){
            string s1=words[i];
            string s2=words[i-1];
            sort(begin(s1),end(s1));
            sort(begin(s2),end(s2));
            if(s1==s2) words[i]="!";
        }
        for(auto i:words){
            if(i!="!") vnew.push_back(i);
        }
        return vnew;

    }
};