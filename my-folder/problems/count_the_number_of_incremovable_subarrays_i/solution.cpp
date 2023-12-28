class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {

        int n=nums.size();
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>v;

                for(int k=0;k<i;k++) v.push_back(nums[k]);
                for(int k=j+1;k<n;k++) v.push_back(nums[k]);

                if(v.size()==1) {ct++; continue;} 

                for(int k=1;k<v.size();k++){
                    if(v[k-1]>=v[k]) break;
                    if(k==v.size()-1) ct++;
                }

            }
        }
        return ct+1;
        
    }
};