class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> st;
        int sum = 0;
        int mxNeg = INT_MIN;
        for(int i:nums){
            if(i>0) st.insert(i);
            else mxNeg = max(mxNeg,i);
        }
        for(auto it:st) sum+=it;
        if(st.size()) return sum;
        else return mxNeg;

        
    }
};
