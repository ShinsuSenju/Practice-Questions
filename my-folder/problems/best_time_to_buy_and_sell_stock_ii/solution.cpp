class Solution {
public:
    int maxProfit(vector<int>& a) {
        int sum=0;
        for(int i=0;i<a.size()-1;i++)
        {
            int x = a[i+1]-a[i];
            if(x>0) sum+=x;
        }
        return sum;

        
    }
};