class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        int count1 =0,count2=0;
        for(int i=0;i<nums1.size();i++) map1[nums1[i]]++;
         for(int i=0;i<nums2.size();i++) map2[nums2[i]]++;
        for(auto it:nums1){
            if(map2.count(it)>0){
                count1++;
                map2[it]--;
            }
        }
        
  for(auto it:nums2){
            if(map1.count(it)>0){
                count2++;
                map1[it]--;
            }
        }
return {count1,count2};

    }
};