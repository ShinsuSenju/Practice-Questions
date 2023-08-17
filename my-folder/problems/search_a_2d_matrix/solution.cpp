class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int li=0,hi=n*m-1;
        while(li<=hi){
            int mid=li+(hi-li)/2;
            int value=matrix[mid/m][mid%m];
            if(value==target)
            return true;
            else if(value<target)
            li=mid+1;
            else
            hi=mid-1;
        }
        return false;


        
        

        
    }
};