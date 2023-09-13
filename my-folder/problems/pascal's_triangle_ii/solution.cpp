class Solution {
public:
    vector<int> getRow(int i) {
        vector<int> ans;
        i++;
        long long res=1;
        
        for(int j=1;j<=i;j++){
                ans.push_back(res);
                res=res*(i-j);
                res=res/j;
            }
        return ans;
    }
};