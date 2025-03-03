class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> num1;
        vector<int> num2;
        vector<int> num3;

        for(int i:nums){
            if(i<pivot) num1.push_back(i);
            else if(i>pivot) num2.push_back(i);
            else num3.push_back(i);
        }
        nums.erase(nums.begin(),nums.end());
        for(int i:num1) nums.push_back(i);
        for(int i:num3) nums.push_back(i);
        for(int i:num2) nums.push_back(i);
        return nums;        
    }
};
