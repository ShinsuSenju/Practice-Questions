class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1=-1;
        int vote1=0;
        int candidate2=-1;
        int vote2=0;
        for(int i:nums){
            if(vote1==0 && candidate2!=i){
                candidate1=i;
                vote1=1;
            }
            else if(vote2==0 && candidate1!=i){
                candidate2=i;
                vote2=1;
            }
            else if(candidate1==i) vote1++;
            else if(candidate2==i) vote2++;
            else{
                vote1--;
                vote2--;
            }

        }
        vector<int> result;
        int count1=0,count2=0;
        for(int i:nums){
            if(i==candidate1) count1++;
            else if(i==candidate2) count2++;

        }
        if(count1>nums.size()/3) result.push_back(candidate1);
        if(count2>nums.size()/3) result.push_back(candidate2);
        return result;
    }
};