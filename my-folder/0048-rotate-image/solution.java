class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix[0].length;
        int m = matrix.length;
        for(int i = 0;i<m;i++){
            for(int j = i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i]);
        }
        
        
    }
    public void reverse(int[] arr){
        int i = 0;
        int j = arr.length-1;
        while(i<j){
            swap(arr,i,j);
            i++;
            j--;
        }
    }
    public void swap(int[] arr,int i,int j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j] = temp;
    }
}
