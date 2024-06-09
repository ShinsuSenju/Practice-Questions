class Solution {
public:
    int numberOfChild(int n, int k) {
        if(k==0) return 0;
        int f = 1;
        int i=1;
        k--;
        while(k>0){
            if(i==n-1||i==0){
                f=f*(-1);
            }
            f==1?i++:i--;
            k--;
            
        }
        return i;
        
    }
};
