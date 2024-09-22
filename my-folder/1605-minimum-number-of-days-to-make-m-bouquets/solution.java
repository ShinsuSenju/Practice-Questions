class Solution {
    boolean solve(int[] bloomDay,int mid,int m,int k){
        int count = 0;
        int boq = 0;
        for(int i=0;i<bloomDay.length;i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    boq++;
                    count=0;
                }
            }
            else count=0;
            if(boq>=m) return true;
            
        }
        return boq>=m;
    }
    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if (m * k > n) return -1;
        int left = 1;
        int right = Arrays.stream(bloomDay).max().getAsInt();
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(solve(bloomDay,mid,m,k)){
                ans = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return ans;
        
    }
}
