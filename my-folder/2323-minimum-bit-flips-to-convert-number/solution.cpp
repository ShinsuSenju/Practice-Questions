class Solution {
public:
    int minBitFlips(int start, int goal) {
        int sxorg = start ^ goal;
        int count = 0;
        while(sxorg>0){
            count += sxorg&1;
            sxorg>>=1;

        }
        return count;
        
    }
};
