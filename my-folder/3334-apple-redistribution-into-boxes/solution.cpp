class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        for(int it:apple) sum+=it;
        int count=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<capacity.size();i++){
            
                sum-=capacity[i];
            count++;
            if(sum<=0) return count;
        
        }
        return count;
        
    }
};
