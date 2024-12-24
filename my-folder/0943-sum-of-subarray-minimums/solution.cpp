class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nextSmaller(n, n);
        vector<int> prevSmaller(n, -1); 
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (!st.empty()) prevSmaller[i] = st.top();
            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (!st.empty()) nextSmaller[i] = st.top();
            st.push(i);
        }
        long long total = 0;
        int mod = 1e9 + 7;
        for (int i = 0; i < arr.size(); i++) {
            long long right = nextSmaller[i] - i;
            long long left = i - prevSmaller[i];
            total+=left*right*arr[i];
            total%=mod;
        }

        return (int)total;
    }
};

