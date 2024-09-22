class Solution {
    boolean solve(int[] piles,int n,int val, int h){
        int result = 0;
        for(int i=0;i<n;i++){
            if(piles[i]%val!=0) result+=piles[i]/val+1;
            else result+=piles[i]/val;
            if(result>h) return false;
        }
        return true;
        
    }
    public int minEatingSpeed(int[] piles, int h) {
        int n = piles.length;
        // Arrays.sort(piles);
        int left = 1;
        int right = Arrays.stream(piles).max().getAsInt();
        int ans = right;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(solve(piles,n,mid,h)){
                ans = Math.min(mid,ans);
                right=mid-1;
            }
            else left = mid+1;
        }
        return ans;
    }
}
