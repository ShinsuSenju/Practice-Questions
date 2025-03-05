class Solution {
public:
    long long coloredCells(int n) {
        if(n==1) return 1;
        long long N = n-1;
        long long count = 1 + 2*N*N+2*N;
        return count;
        
        
    }
};
