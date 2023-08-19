class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(i<j && arr[i]+arr[j]<target)
                   cnt++;
            }
        }
        return cnt;
        
    }
};