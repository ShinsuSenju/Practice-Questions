class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> nums3;
        int i = 0,j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]) nums3.push_back(nums1[i++]);
            else nums3.push_back(nums2[j++]);

        }
        while(i<m) nums3.push_back(nums1[i++]);
        while(j<n) nums3.push_back(nums2[j++]);
        int k = nums3.size();
        if(k%2!=0) return nums3[(k)/2];
        return  (nums3[k/2-1]+nums3[k/2])/2.0;
        
    }
};
