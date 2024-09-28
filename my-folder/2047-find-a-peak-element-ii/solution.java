class Solution {
    public int[] findPeakGrid(int[][] mat) {
        int left = 0;
        int right = mat[0].length-1;
        while(left<=right){
            int mid = (left+right)/2;
            
            int maxValue = -1;
            int maxInd = -1;
            for(int i=0;i<mat.length;i++){
                if(mat[i][mid]>maxValue){
                    maxValue = mat[i][mid];
                    maxInd = i;
                }
            }
            if((mid==0 || mat[maxInd][mid]>mat[maxInd][mid-1]) &&(mid==mat[0].length-1 || mat[maxInd][mid]>mat[maxInd][mid+1])) return (new int[] {maxInd,mid});
            else if(mid>0 && mat[maxInd][mid-1]>mat[maxInd][mid]) right = mid-1;
            else left = mid+1;
        }
        return (new int[] {-1,-1});
        
    }
}
