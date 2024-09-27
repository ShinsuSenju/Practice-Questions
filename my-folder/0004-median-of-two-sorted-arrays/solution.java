class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int count = 0;
        int x=0,y=0;
        int n = nums1.length+nums2.length;
        int medianInd1 = n/2;
        int medianInd2 = medianInd1-1;
        double median1=0,median2=0;
        while(x<nums1.length && y<nums2.length){
            if(nums1[x]<nums2[y]){
                if(count==medianInd1) median1=nums1[x];
                if(count==medianInd2) median2=nums1[x];
                x++;
            }
            else{
                if(count==medianInd1) median1=nums2[y];
                if(count==medianInd2) median2=nums2[y];
                y++;
            }
            count++;
        }
        while(x<nums1.length){
            if(count==medianInd1) median1=nums1[x];
            if(count==medianInd2) median2=nums1[x];
            x++;
            count++;

        }
        while(y<nums2.length){
            if(count==medianInd1) median1=nums2[y];
            if(count==medianInd2) median2=nums2[y];
            y++;
            count++;
        }
        return n%2==0?(median1+median2)/2.0:median1;
        
    }
}
