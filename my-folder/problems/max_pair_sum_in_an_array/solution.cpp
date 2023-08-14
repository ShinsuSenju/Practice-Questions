class Solution {
public:
     int retmdig(int x)
    {
        int max=0;
        while(x>0)
        {
            int rem = x%10;
            if(max<rem)
            {
                max = rem;
            }
            x=x/10;
        }
        return max;


    }
    int maxSum(vector<int>& arr) {
        int m1,m2,n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<10 && arr[j]<10 && arr[i]!=arr[j])
                continue;
                m1=retmdig(arr[i]);
                m2=retmdig(arr[j]);
                if(m1==m2 )
                {
                    if(arr[i]+arr[j]>sum)
                    {
                        sum=arr[i]+arr[j];
                    }
                }
                

            }
        }
        if(sum!=0)
        return sum;
        else return -1;
        
    }
};