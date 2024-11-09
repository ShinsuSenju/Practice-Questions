class Solution {
    public int getProduct(int n){
        int pro = 1;
        while(n>0){
            pro *= n%10;
            n/=10;  
        }
        return pro;
    }
    public int smallestNumber(int n, int t) {
        while(true){
            int product = getProduct(n);
            if(product%t==0) return n;
            n++;
        }
        
    }
}
