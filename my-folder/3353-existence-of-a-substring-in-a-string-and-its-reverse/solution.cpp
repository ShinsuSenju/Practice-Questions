class Solution {
public:
    bool isSubstringPresent(string s) {
        set<string> set;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<=s.size();j++){
                string x = s.substr(i,j-i);
                set.insert(x);
                reverse(x.begin(),x.end());
                if(set.find(x)!=set.end()) {
                    if(x.size()>=2)
                    return true;
                }
            }
        }
        return false;
    }
};

