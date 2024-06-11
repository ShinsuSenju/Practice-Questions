class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr2.size();i++) mp[arr2[i]]=i;
        sort(arr1.begin(),arr1.end(),[&mp](int a,int b){
            auto ita=mp.find(a);
            auto itb=mp.find(b);
            if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end()){
                return ita->second<itb->second;
            }
            else if(mp.find(a)!=mp.end()) return true;
            else if(mp.find(b)!=mp.end()) return false;
            else return a<b;
        });
        return arr1;
        
    }
};
