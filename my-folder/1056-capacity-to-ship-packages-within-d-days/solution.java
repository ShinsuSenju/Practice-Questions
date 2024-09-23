class Solution {
    boolean solve(int[] weights, int days,int guess){
        int count = 0;
        int current = 0;
        for(int i=0;i<weights.length;i++){
            if(current+weights[i]<=guess){
                current+=weights[i];
            }
            else{
                count++;
                current = weights[i];
                if(count>days) return false;
            }
            
        }
            if(current!=0) count++;
            return count<=days;
    }
    public int shipWithinDays(int[] weights, int days) {
        int ans=-1;
        int left = Arrays.stream(weights).max().getAsInt();
        int right = Arrays.stream(weights).sum();
        while(left<=right){
            int mid = left + (right-left)/2;
            if(solve(weights,days,mid)){
                ans = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
        
    }
}
