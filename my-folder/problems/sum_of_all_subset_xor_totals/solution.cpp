class Solution {

public:
    void subsetxor(vector<int>& nums,int px,int l,int& total){
        for(int i=l;i<nums.size();i++){
            int temp = px^nums[i];
            total+=temp;
            subsetxor(nums,temp,l+1,total);
        }
    }
    int subsetXORSum(vector<int>& nums) {
         vector<int> ans= {0};
         
         for(int i=0;i<nums.size();i++){
             int m = ans.size();
             for(int j=0;j<m;j++){
                 ans.push_back(ans[j]^nums[i]);
                 
             }
            
         }
         int sum=0;
         for(auto it:ans){
             sum+=it;

         }
         return sum;
    }
};