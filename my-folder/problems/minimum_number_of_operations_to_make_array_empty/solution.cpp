class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        
        
        int ans = 0 ;
        for(auto it:map){
            int freq = it.second;
            if(freq==1)
                return -1;
            else if(freq==2) ans+=1;
            else if(freq%3==0) {
                ans = ans + freq/3;
                
            }
            else if(freq%3!=0){
                if(freq%3%2==1){
                ans+=freq/3 -1;
                int temp = freq - (3* (freq/3-1));
                ans+=temp/2;
                    
                }
                else{
                    ans+=it.second/3;
                    int temp = it.second%3;
                    ans+=temp/2;
                }
                
            }
            
            
            
            
        }
        return ans;
        
    }
};