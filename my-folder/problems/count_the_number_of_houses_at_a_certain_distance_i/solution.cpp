class Solution {
public:
    vector<int> countOfPairs(int n, int x, int y) {
        if(x>y){
            return countOfPairs(n,y,x);
        }
        vector<int> ans(n,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                int idx = i-j;
                idx = min(idx,abs(j-x)+1+abs(i-y));
                if(idx>=1)
                ans[idx-1]+=2;
            }
           
        }
        return ans;
    }
};