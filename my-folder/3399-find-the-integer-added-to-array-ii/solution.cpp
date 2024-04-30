class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       int ans=INT_MAX;
       for(int i=0;i<nums1.size();i++){
        for(int j=i+1;j<nums1.size();j++){
            int k = 0 , m = 0; 
            int diff = 2001;
            while( k < nums1.size() && m < nums2.size() ){
                if( k == i || k == j ){
                    k++; 
                    continue; 
                }
                if(diff==2001){
                    diff = nums2[m]-nums1[k];
                }
                if(diff!=nums2[m]-nums1[k]){
                    diff = 2001;
                    break;
                }
                k++;
                m++;
                
            }
            ans=min(diff,ans);
        }
       }
       return ans;
    }
};
