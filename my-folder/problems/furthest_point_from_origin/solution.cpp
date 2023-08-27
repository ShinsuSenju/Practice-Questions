class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int> map;
        for(int i=0;i<moves.size();i++)
            map[moves[i]]++;
        int left,right,blank;
        left=right=blank=0;
        for(auto it:map){
            if(it.first=='L')
                left=it.second;
            else if(it.first=='R')
                right=it.second;
            else
                blank=it.second;
        }
        if(blank==moves.size())
            return blank;
        else if(right>left)
            return right+blank-left;
        else
            return left+blank-right;
        
    }
};