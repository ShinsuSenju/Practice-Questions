class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        vector<int> nextSmaller(n, n);  // Initialize to n (out of bounds)
        vector<int> prevSmaller(n, -1); // Initialize to -1 (out of bounds)
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                nextSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                prevSmaller[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        long long total = 0;
        for (int i = 0; i < n; i++) {
            long long nextCount = nextSmaller[i] - i;
            long long prevCount = i - prevSmaller[i];
            total = (total + arr[i] * nextCount * prevCount) % mod;
        }

        return total;
    }
};

