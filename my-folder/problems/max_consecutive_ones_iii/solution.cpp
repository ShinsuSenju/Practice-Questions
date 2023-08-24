class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int left=0,right=0;
         int ans=INT_MIN;
       
        while(right<arr.size())
        {
            if(arr[right]==1)
            {
               
                right++;
                
            }
            else{
                if(k>0)
                {
                    k--;
                    right++;
                }
                else if(arr[left]==0){
                    k++;
                    left++;
            
                }
                else{
                    left++;
                }
                
                
                
                
            }
          
             ans=max(ans,right-left);
             
            
        }
        return ans;


        
    }
};