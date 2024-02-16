class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int candidate = -1;
        for(int i:nums){
            if(vote==0){
                candidate=i;
                vote=1;
            }
            else{
                if(candidate==i) vote++;
                else vote--;
            }

        }
        int count=0;
        for(int i:nums) if(candidate==i) count++;
        if(count>nums.size()/2) return candidate;
        return -1;
        
    }
};