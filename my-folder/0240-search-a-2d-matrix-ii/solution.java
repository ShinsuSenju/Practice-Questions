class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int row = 0;
        int col = matrix[0].length-1;
        while(row<matrix.length && col>=0){
            int t = matrix[row][col];
            if(t==target) return true;
            else if(t<target) row++;
            else col--;
        }
        return false;
        
    }
}
