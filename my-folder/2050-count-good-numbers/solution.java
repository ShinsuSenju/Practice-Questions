class Solution {
    long M = (long)1e9+7;
    public long myPow(long a,long n){
        if(n==0) return 1;
        long half = myPow((long)a*a%M,n/2);
        if(n%2==0) return half%M;
        else return a*half%M;
        
    }
    public int countGoodNumbers(long n) {
        long res = myPow(20,n/2);
        return n%2==0?(int)(res%M):(int)(5*res%M);
        
    }
}
