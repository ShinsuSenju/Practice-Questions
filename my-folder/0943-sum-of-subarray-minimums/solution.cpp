class Solution
{
    public:
        int sumSubarrayMins(vector<int> &arr)
        {
            int n = arr.size();
            int mod = 1e9 + 7;
            vector<int> preSmaller(n,-1);
            vector<int> nextSmaller(n,n);
            stack<int> st;
            for(int i = 0;i<n;i++){
                while(!st.empty() && arr[i]<arr[st.top()]) st.pop();
                if(!st.empty()) preSmaller[i]=st.top();
                st.push(i);
            }
            while(!st.empty()) st.pop();
            for(int i = n-1;i>=0;i--){
                while(!st.empty() && arr[i]<=arr[st.top()]) st.pop();
                if(!st.empty()) nextSmaller[i]=st.top();
                st.push(i);
            }
            long long total = 0;
            for(int i = 0;i<n;i++){
                long long left = i-preSmaller[i];
                long long right = nextSmaller[i]-i;
                total+=left*right*arr[i];
                total%=mod;
            }
            return (int)total;
        }
};
