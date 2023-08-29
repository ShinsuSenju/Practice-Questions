class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        set<int> s;
        long long cur=1,cursum=0;
        int i=0;
        while(i<n){
            if(s.count(target-cur)<1) {
                
            s.insert(cur);
            cursum+=cur;
            cur++;
            i++;
            }
            else{
                cur++;
            }
        }
        return cursum;
        
    }
};