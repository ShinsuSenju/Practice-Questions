class Solution {
public:
    void rs(vector<int>& row, int k) {
    int n = row.size();
    k %= n;
    reverse(row.begin(), row.end());
    reverse(row.begin(), row.begin() + k);
    reverse(row.begin() + k, row.end());
}
    void ls(vector<int>& row, int k) {
    int n = row.size();
    k %= n;
    reverse(row.begin(), row.begin() + k);
    reverse(row.begin() + k, row.end());
    reverse(row.begin(), row.end());
}
    bool cmp(vector<int> a,vector<int> b){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) return false;
            
        }
        return true;
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        bool ans;
       for(int i=0;i<mat.size();i++){
           vector<int> temp(mat[i].begin(),mat[i].end());
           if(i%2!=0) rs(temp,k);
           else ls(temp,k);
           ans = cmp(temp,mat[i]);
           if(!ans) return false;
       } 
        return true;
       
    }
};