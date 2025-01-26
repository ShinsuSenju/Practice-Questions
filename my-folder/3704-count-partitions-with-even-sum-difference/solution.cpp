class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int sum = accumulate(nums.begin(),nums.end(),0);
        int lSum = 0;
        for(int i=0;i<nums.size()-1;i++){
            lSum+=nums[i];
            sum-=nums[i];
            if((sum-lSum)%2 == 0 ) count++;
            cout<<"lSum:"<<lSum<<" Sum:"<<sum<<" sum-lSum:"<<sum-lSum<<endl;
        }
        return count;

        
    }
};
