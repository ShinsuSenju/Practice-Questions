class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        
        int i = 0;

        if(nums.size()==1 && nums[0]==0 && n==1)
        {
            return true;
        }
    
        while(i<nums.size())
        {
            if(n==0) break;
            if(i==0 && nums[i]==0 && i+1<nums.size() && nums[i+1]==0)
            {
                // cout<<"Yes";
                nums[i] = 1;
                n--;
            }

            if(i==nums.size()-1 && i-1>0 && nums[i-1]==0 && nums[i]==0)
            {
                nums[i] = 1;
                n--;
            }

            if(i>0 && i+1<nums.size() && nums[i-1]==0 && nums[i]==0 && nums[i+1]==0)
            {
                nums[i] = 1;
                n--;
            }

            i++;
        }

        

        return n==0;
    }
};
