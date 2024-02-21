class Solution {
public:
    int longestConsecutive(vector<int>& a) {
     if(a.size()==0) return 0;   
     sort(a.begin(), a.end());
    int i;
    int count = 1;
    int ans = 1;
    for (i = 1; i < a.size(); i++) {
        if (a[i] - a[i - 1] == 1) {
            count++;
            ans = max(count, ans);
        } else if(a[i]!=a[i-1]){
            count = 1;  
        }
    }
    return ans;
    }
};