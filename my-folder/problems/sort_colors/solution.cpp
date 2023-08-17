class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int rc,wc,bc;
        rc=wc=bc=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                rc++;
            }
            else if(nums[i]==1)
            {
                wc++;
            }
            else{
                bc++;
            }

        }
        for(int i=0;i<rc;i++)
        {
            nums[i]=0;
        }
        for(int i=rc;i<rc+wc;i++)
        {
            nums[i]=1;
        }
        for(int i=rc+wc;i<nums.size();i++)
        {
            nums[i]=2;
        }
        
    }
};