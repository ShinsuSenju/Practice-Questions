class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int arr[32]={0};
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int ind=0;
            while(num!=0){
                int bit =num%2;
                num=num/2;
                if(bit==1) arr[ind]++;
                ind++;

            }
        }
        int ans=0;
        for(int i=0;i<31;i++){
            if(arr[i]>=k){
                ans +=pow(2,i); 
            }
        }
        return ans;

        
    }
};

