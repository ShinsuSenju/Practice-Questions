class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<vector<int>> st;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(st.empty()) st.push(intervals[i]);
            else{
                vector<int> temp = st.top();
                if(temp[1]>=intervals[i][0]){
                    temp[1]=max(temp[1],intervals[i][1]);
                    st.pop();
                    st.push(temp);
                }
                else st.push(intervals[i]);
            }
        }
        vector<vector<int>> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};