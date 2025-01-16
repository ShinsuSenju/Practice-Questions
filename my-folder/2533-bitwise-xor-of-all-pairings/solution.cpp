class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1%2==0 && n2%2==0) return 0;
        else if(n1%2==0 && n2%2!=0){
            int x = 0;
            for(int i:nums1) x^=i;
            return x;
        }
        else if(n1%2!=0 && n2%2==0){
            int x = 0;
            for(int i:nums2) x^=i;
            return x;
        }
        else{
            int x= 0;
            for(int i:nums1) x^=i;
            for(int i:nums2) x^=i;
            return x;
        }
        return 0;
       
        
    }
};
