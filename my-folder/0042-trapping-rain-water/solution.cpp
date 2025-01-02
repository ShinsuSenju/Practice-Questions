class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> pre(n),post(n);
        for(int i = 0;i<n;i++){
            if(i==0) pre[i]=height[i];
            else{
                if(height[i]>pre[i-1]) pre[i]=height[i];
                else pre[i]=pre[i-1];
            }
        }
        for(int i = n-1;i>=0;i--){
            if(i==n-1) post[i]=height[i];
            else{
                if(height[i]>post[i+1]) post[i]=height[i];
                else post[i]=post[i+1];
            }
        }
        int total = 0;
        for(int i = 0 ;i<n;i++){
           if(height[i]<pre[i] && height[i]<post[i]) total+=min(pre[i],post[i])-height[i];
        }
        return total;
        
    }
};
