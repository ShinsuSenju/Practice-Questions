class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix;
        int x =1;
        for(int i=0;i<n;i++){
            prefix.push_back(x);
            x*=nums[i];
        }
        for(int i:prefix) cout<<i<<" ";
        cout<<endl;
        vector<int> suffix;
        int s=1;
        for(int i=n-1;i>=0;i--){
            suffix.push_back(s);
            s*=nums[i];
        }
        for(int i:suffix) cout<<i<<" ";
      
        for(int i=0;i<n;i++){
          nums[i] = suffix[n-i-1]*prefix[i]; 
        }
    
        return nums;
    }
};
