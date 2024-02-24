class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(n==0) return ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long diff = (long long)target -(long long)(nums[i]+nums[j]);
                int low = j+1, high = n-1;
                while(low<high){
                    long long sum = nums[low]+nums[high];
                    if(sum>diff) high--;
                    else if(sum<diff) low++;
                    else{
                        vector<int> row(4,0);
                        row[0]=nums[i];
                        row[1]=nums[j];
                        row[2]=nums[low];
                        row[3]=nums[high];
                        ans.push_back(row);
                        while(low<high && nums[low]==row[2]) low++;
                        while(low<high && nums[high]==row[3]) high--;

                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return ans;

           
            

        
        
    }
};