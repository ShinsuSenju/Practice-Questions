class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy)
        {
            if(t==1) return false;
            else true;
        }
       int x = abs(fx - sx);
       int y = abs(fy - sy);
       int ts = max(x,y);
        
            
       return ts<=t;
        
        
        
        
    }
};