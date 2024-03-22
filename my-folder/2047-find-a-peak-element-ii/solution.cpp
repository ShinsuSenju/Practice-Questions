class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size();
        while(low<=high){
            int mid = (low + high) >> 1;
            int maxEle = -1;
            int maxInd = -1;
            for(int i = 0;i<mat.size();i++){
                if(mat[i][mid]>maxEle){
                    maxEle = mat[i][mid];
                    maxInd = i;
                }      
            }
            int left = mid-1>=0?mat[maxInd][mid-1]:-1;
            int right = mid+1<mat[0].size()?mat[maxInd][mid+1]:-1;
            if(mat[maxInd][mid]>left && mat[maxInd][mid]>right) return {maxInd,mid};
            else if(mat[maxInd][mid]<left) high = mid-1;
            else low = mid+1;

        }
        return {-1,-1};
        
    }
};
