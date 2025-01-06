class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        auto print = [](auto vec) {
            for_each(vec.begin(), vec.end(), [](auto x) { cout << x << " "; });
            cout << endl;
        };
        /*Sum of Subarrays Minimum */
        vector<int> prevSmaller(n, -1), nextSmaller(n, n);
        stack<int> temp;
        for (int i = 0; i < n; i++) {
            while (!temp.empty() && nums[temp.top()] > nums[i])
                temp.pop();
            if (!temp.empty())
                prevSmaller[i] = temp.top();
            temp.push(i);
        }
        while (!temp.empty())
            temp.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!temp.empty() && nums[temp.top()] >= nums[i])
                temp.pop();
            if (!temp.empty())
                nextSmaller[i] = temp.top();
            temp.push(i);
        }
        print(prevSmaller);
        print(nextSmaller);
        while (!temp.empty())
            temp.pop();
        long long minTotal = 0;
        for (int i = 0; i < n; i++) {
            int left = i - prevSmaller[i];
            int right = nextSmaller[i] - i;
            minTotal += (long long)left * right * nums[i];
        }
        cout << minTotal << endl;

        /*Sum of Subarrays Maximum */
        vector<int> prevGreater(n, -1), nextGreater(n, n);
        for (int i = 0; i < n; i++) {
            while (!temp.empty() && nums[temp.top()] < nums[i])
                temp.pop();
            if (!temp.empty())
                prevGreater[i] = temp.top();
            temp.push(i);
        }
        while (!temp.empty())
            temp.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!temp.empty() && nums[temp.top()] <= nums[i])
                temp.pop();
            if (!temp.empty())
                nextGreater[i] = temp.top();
            temp.push(i);
        }
        while (!temp.empty())
            temp.pop();
        print(prevGreater);
        print(nextGreater);
        long long maxTotal=0;
        for (int i = 0; i < n; i++) {
            int left = i - prevGreater[i];
            int right = nextGreater[i] - i;
            maxTotal += (long long)left * right * nums[i];
        }
        cout << maxTotal << endl;
        return maxTotal - minTotal;
    }
};
