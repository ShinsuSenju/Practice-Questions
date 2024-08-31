class Solution {
    int countInv(int[] nums,int l,int m,int h){
        int count = 0;
        int j = m+1;
        for(int i = l;i<=m;i++){
            while(j<=h && (long)nums[i]>(long)2*nums[j]) j++;
            count += j-(m+1);
        }
        return count;
    }
    int mergesort(int[] nums,int l, int h){
        int count=0;
        if(l<h){
            int m = l+(h-l)/2;
            count+=mergesort(nums,l,m);
            count+=mergesort(nums,m+1,h);
            count+=countInv(nums,l,m,h);
            merge(nums,l,m,h);
            return count;
        }
        else return count;

    }
    void merge(int[] nums, int l,int m, int h){
        int i = l;
        int j = m+1;
        int[] temp = new int[h-l+1];
        int x = 0;
        while(i<=m && j<=h){
            if(nums[i]<=nums[j]) temp[x++]=nums[i++];
            else temp[x++]=nums[j++];
        }
        while(i<=m) temp[x++]=nums[i++];
        while(j<=h) temp[x++]=nums[j++];
        for(i = l;i<=h;i++){
            nums[i]=temp[i-l];
        } 
    }
    public int reversePairs(int[] nums) {
        int n = nums.length;
        return mergesort(nums,0,n-1);
    }
}
