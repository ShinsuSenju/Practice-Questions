class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN;
        int product=1,productr=1;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(product==0) product=1;
            if(productr==0) productr=1;
            product*=nums[i];
            productr*=nums[n-i-1];
            maxProduct=max(maxProduct,max(product,productr));
        }
        return maxProduct;
        
    }
};