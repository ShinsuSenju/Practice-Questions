class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n<0) return false;
        long long ans = log2(n);
        double ans2 = ceil(log2(n));
        return ans == (long long)ans2;
        
    }
};
