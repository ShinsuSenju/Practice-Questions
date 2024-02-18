class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>set;
        for(int i=0;i<arr1.size();i++)
        {
            string val=to_string(arr1[i]);
            string temp="";
            for(char it:val)
            {
                temp+=it;
                set.insert(temp);
            }
        }
        int ans=0;
        for(int i=0;i<arr2.size();i++)
        {
            string val=to_string(arr2[i]);
            string temp="";
            for(char it:val)
            {
                temp+=it;
                if(set.count(temp))ans=max(ans,(int)temp.size());
            }
        }
        return ans;
        
    }
};