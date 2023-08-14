class Solution {
public:
    bool check(vector<int>& arr) {
        int x=0,y=0;
        
        int n=arr.size();
        if(n==1||n==2||n==0)
        return true;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
            x++;
            else
            y++;
        }
        if(x!=0 && y==0)
        {
            return true;
        }
        if(y==1)
        {
            if(arr[n-1]<=arr[0])
            x++;
            else 
            y++;
        
           if(y==1)
           return true;
        }

        return false;

        
    }
};