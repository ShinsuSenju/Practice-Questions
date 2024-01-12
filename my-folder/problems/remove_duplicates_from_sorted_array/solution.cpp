class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0,j=1;
        while(j<a.size()){
            if(a[i]!=a[j]){
                a[++i]=a[j];
            }
            j++;
        }
        return i+1;
        
    }
};