class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char, int> map;

        for (auto it : s) {
            map[it]++;
       
        }

        int maxc=0;
        for(auto it:map){
            if(it.second>maxc) maxc=it.second;
            
        }
//         for(auto it:map){
//             map[it.first]-=maxc;
       
//         }
        
      
        string temp="";
        for(int i=s.size()-1;i>=0;i--){
            
            if(map[s[i]]==maxc) {
                temp+=s[i];
                map[s[i]]--;
               // cout<<map[s[i]]<<""<<endl;
            }
            
        }
        reverse(temp.begin(),temp.end());
        return temp;

        

    }
};