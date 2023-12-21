class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans(nums.size() / 3, vector<int>(3, 0)); 
        int x = 0;

        for (int i = 0; i < nums.size()-2; i=i+3) {
            int a=nums[i];
            int b=nums[i+1];
            int c=nums[i+2];
            if(abs(a-b)<=k && abs(a-c)<=k){
                int y=0;
                ans[x][0]=a;
                ans[x][1]=b;
                ans[x++][2]=c;
            }
            else return{};
        
        }
           

        return ans;
    }
};
