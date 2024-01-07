class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        queue<pair<int,int>> q;
        unordered_set<int> s;
        s.insert(x);
        q.push({x,0});
        while(!q.empty()){
            int n = q.front().first;
            int count = q.front().second;
            q.pop();
            if(n==y) return count;
            if(n%5==0 && s.count(n/5)<1){ 
                q.push({n/5,count+1});
                s.insert(n/5);
            }
            if(n%11==0 && s.count(n/11)<1){
             q.push({n/11,count+1});
             s.insert(n/11);
            }
            if(s.count(n+1)<1) {
                q.push({n+1,count+1});
                s.insert(n+1);
            }
            if(s.count(n-1)<1) {
                q.push({n-1,count+1});
                s.insert(n-1);
            }
        }
        return -1;
        
    }
};