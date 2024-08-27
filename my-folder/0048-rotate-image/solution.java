class Solution {
    public void rotate(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        for(int i = 0;i<m;i++){
            for(int j=0;j<i;j++){
                swap(matrix,i,j);
            }
        }
        for(int[] row : matrix){
            reverse(row,0,row.length-1);
        }

        
    }
    private void swap (int[] nums,int a,int b){
         int temp = nums[a];
         nums[a]=nums[b];
         nums[b]=temp;
    }
    private void swap (int[][] matrix,int a,int b){
        int temp = matrix[a][b];
        matrix[a][b]=matrix[b][a];
        matrix[b][a]=temp;
    }
    private void reverse(int[] nums,int start,int end){
        while(start<end){
            swap(nums,start,end);
            start++;
            end--;
        }
    }
    
}
