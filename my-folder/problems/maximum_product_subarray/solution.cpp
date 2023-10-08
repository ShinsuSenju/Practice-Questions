class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int pro1=1,pro=1;
        int maxi = INT_MIN;
        int n  = arr.size();
        for(int i=0;i<n;i++){
      if(pro == 0)   pro = 1;
      if(pro1 == 0)   pro1 = 1;
      pro *= arr[i];
      pro1*= arr[n-i-1];
      maxi = max(pro , max(maxi , pro1));
        }
        return maxi;
        
    }
};