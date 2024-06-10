class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> tmep(heights.begin(),heights.end());
        sort(tmep.begin(),tmep.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=tmep[i]) count++;
        }
        return count;

        
    }
};
