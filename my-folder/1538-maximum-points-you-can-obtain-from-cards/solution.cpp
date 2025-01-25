class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0,rSum = 0;
        int left = 0,right = cardPoints.size()-1;
        for(int i = 0;i<k;i++) lSum+=cardPoints[i];
        int ans = lSum;
        for(int i=k-1;i>=0;i--){
            lSum-=cardPoints[i];
            rSum+=cardPoints[right--];
            ans = max(ans,lSum+rSum);
        }
        return ans;
        
    }
};
