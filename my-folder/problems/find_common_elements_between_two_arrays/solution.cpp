class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans(2, 0);
        int i = 0, j = 0;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans[0]++;
                i++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums2[j]==nums1[i]){
                ans[1]++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
            
        }
        return ans;
    }
};