class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int leader=-1;
        vector<int> ans;
        
        for(int i=n-1;i>=0;i--){
            ans.push_back(leader);
            if(arr[i]>leader) leader=arr[i];  
        }
        
        reverse(ans.begin(),ans.end());
    
        return ans;
        

    
        
    }
};