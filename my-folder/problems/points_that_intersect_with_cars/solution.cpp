class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
     
        set<int> map;
        for(vector<int> a:nums){
            int x = a[0];
            int y= a[1];
            for(int i=x;i<=y;i++)
            {
                map.insert(i);
                
            }
        }
        return  map.size();
    }

        
    };
