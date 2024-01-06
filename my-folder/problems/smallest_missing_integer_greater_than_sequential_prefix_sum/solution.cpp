class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=0;
        if(nums.size()==1) return nums[0]+1;
        set<int> seti (nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i]-nums[i-1]==1){
             
                
                sum+=nums[i];
            }
            else break;   
            
        }
        
        
                      
        while(true){
            if(seti.count(sum)>0) sum++;
            else return sum;
        }
        
    }
};