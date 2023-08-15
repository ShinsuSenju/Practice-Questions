class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int> temp(n,0);
        k=k%n;
        for(int i=0;i<k;i++)
        {
            temp[i]=arr[n-k+i];
        }
        for(int i =0;i<n-k;i++)
        {
            temp[k+i]=arr[i];
        }
        arr=temp;
    }
};