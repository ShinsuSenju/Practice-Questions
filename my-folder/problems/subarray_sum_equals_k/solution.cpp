class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        unordered_map<int,int> tmap;
        int c=0,sum=0;

        if(a.size()==1)
        return a[0]==k;

        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            if(sum==k) c++;
            if(tmap.count(sum-k)>0) c+=tmap[sum-k];
            if((tmap.count(sum)>0)) tmap[sum] = tmap[sum]+1;
            else tmap[sum]=1;
        }
        return c;
        
    }
};