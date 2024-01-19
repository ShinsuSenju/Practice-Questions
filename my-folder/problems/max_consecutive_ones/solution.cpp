const static int _ = [](){
         ios::sync_with_stdio(false);
         cin.tie(nullptr);
         cout.tie(nullptr);
         return 0;
}();
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxc=0;
        int count=0;
        for(int i:nums){
            if(i==1) count++;
            else count=0;
            maxc=max(maxc,count);
        }
        return maxc;
        
    }
};